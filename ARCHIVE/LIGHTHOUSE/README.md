# 🔦 Lighthouse Quicksheet (Detailed)

A practical, copy-pasteable guide to running, automating, and improving Lighthouse for any site (with tips for Next.js).

---

## 0. What Lighthouse Measures

**Categories & Targets (90+ = “green”):**
- **Performance** (Core Web Vitals & loading): target 90+
- **Accessibility** (a11y checks): target 95+
- **Best Practices** (security, modern APIs): target 95+
- **SEO** (discoverability): target 95+
- **PWA** (progressive web app features): target 90+

**Key Performance Metrics (lab):**
- **FCP** (First Contentful Paint): < 1.8s
- **LCP** (Largest Contentful Paint): < 2.5s
- **CLS** (Cumulative Layout Shift): < 0.1
- **TBT** (Total Blocking Time): < 200 ms
- **SI** (Speed Index): < 3.4s
- **TTI** (Time to Interactive): < 3.8s

**Field vs Lab**
- **Field**: real-user (RUM, Core Web Vitals).
- **Lab**: simulated (Lighthouse in DevTools/CLI).  
Aim to be green in **both**.

---

## 1. How to Run Lighthouse

### A. Chrome DevTools (Interactive)
1. Open site → **F12** → **Lighthouse** tab.
2. Select **Device** (Mobile is stricter), **Categories**.
3. Click **Analyze page load** → Save report (HTML).

### B. PageSpeed Insights (Web)
- Go to `https://pagespeed.web.dev/`
- Enter URL → get **Mobile** & **Desktop** scores (+ real-world CWV when available).

### C. CLI (Node)
```bash
npm i -g lighthouse
lighthouse https://example.com \
  --preset=desktop \
  --output=html --output-path=./report.html \
  --throttling-method=devtools
````

### D. Lighthouse CI (Automation)

```bash
npm i -D @lhci/cli
npx lhci autorun
```

---

## 2. Recommended Configs

### `.lighthouserc.json` (CLI/CI)

```json
{
  "ci": {
    "collect": {
      "numberOfRuns": 3,
      "startServerCommand": "npm run start",
      "url": ["http://localhost:3000/"],
      "settings": {
        "preset": "mobile",
        "throttlingMethod": "devtools",
        "formFactor": "mobile",
        "screenEmulation": { "mobile": true }
      }
    },
    "assert": {
      "assertions": {
        "categories:performance": ["error", { "minScore": 0.9 }],
        "categories:accessibility": ["warn", { "minScore": 0.95 }],
        "categories:seo": ["warn", { "minScore": 0.95 }],
        "categories:best-practices": ["warn", { "minScore": 0.95 }],
        "largest-contentful-paint": ["error", { "maxNumericValue": 2500 }],
        "cumulative-layout-shift": ["error", { "maxNumericValue": 0.1 }],
        "total-blocking-time": ["error", { "maxNumericValue": 200 }]
      }
    },
    "upload": {
      "target": "filesystem",
      "outputDir": "./lhci_reports"
    }
  }
}
```

### G.tHub Action (CI)

```yaml
name: Lighthouse CI
on: [push, pull_request]
jobs:
  lhci:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - uses: actions/setup-node@v4
        with: { node-version: '20' }
      - run: npm ci
      - run: npm run build
      - run: npm start & npx wait-on http://localhost:3000
      - run: npx lhci autorun
```

### P.rformance Budgets (Bundle/Requests)

```json
{
  "resourceSizes": [
    { "resourceType": "total", "budget": 250 },
    { "resourceType": "script", "budget": 120 },
    { "resourceType": "image", "budget": 80 }
  ],
  "resourceCounts": [
    { "resourceType": "total", "budget": 60 },
    { "resourceType": "third-party", "budget": 10 }
  ]
}
```

---

## 3. Improving Scores — Deep Checklist

### A. Performance

* **Images**

  * Use next-gen formats **AVIF/WebP**.
  * Size correctly, lazy-load offscreen.
  * In Next.js: use `next/image` + `sizes`, `priority` for above-the-fold hero.
* **Fonts**

  * Self-host; use `next/font`.
  * Limit variants; use `display: swap`.
* **JavaScript**

  * Trim dependencies; prefer lighter libs.
  * **Code-split** heavy components (`next/dynamic`).
  * Avoid long tasks (>50ms); reduce hydration work.
  * Remove unused polyfills; target modern browsers.
* **CSS**

  * Purge unused CSS (Tailwind does this in prod).
  * Avoid blocking CSS; keep critical path minimal.
* **Server & Caching**

  * Set `Cache-Control` for static assets (`immutable, max-age=31536000`).
  * Use CDN/edge caching; compress (Brotli).
* **Preload/Prefetch**

  * Preload critical hero font & LCP image.
  * Prefetch key route bundles on hover/idle.

**Next.js tips**

* Prefer **RSC/Server Components** for heavy logic.
* Use **static/ISR** when possible; avoid blocking server work.
* Remove `next/script` blocking usage, use `strategy="lazyOnload"`.
* Analyze bundle: `ANALYZE=true next build` with `@next/bundle-analyzer`.

### B. Accessibility

* Semantic landmarks: `<header> <nav> <main> <footer>`.
* Proper labels: `aria-label`, `for/id`, `alt` text.
* Keyboard focus visible & logical tab order.
* Contrast ratios (AA at least).
* Form errors announced to assistive tech.

### C. Best Practices

* All requests **HTTPS**; no mixed content.
* Avoid console errors; handle promise rejections.
* Use modern APIs; avoid deprecated features.
* Set secure cookies (`HttpOnly`, `Secure`, `SameSite`).

### D. SEO

* Set `<title>`, meta description, canonical.
* Structured data (JSON-LD) for key pages.
* robots.txt + sitemap.xml.
* Mobile-friendly viewport; content indexable.
* Localized pages: correct `hreflang`.

### E. PWA (optional)

* Valid **manifest.json** (name, icons, theme_color).
* Service Worker caching strategy.
* Works offline for core shell; installable.

---

## 4. Interpreting the Report

* **LCP element**: usually hero image or H1; optimize that first.
* **Long tasks / TBT**: inspect Performance trace → split work, defer scripts.
* **Largest JS contributors**: “Script treemap” → remove/reduce.
* **CLS**: reserve space for images/ads; avoid late-injected UI.

---

## 5. Testing Flows / Auth Pages

For gated routes or SPAs:

* Use **Lighthouse User Flows** (Puppeteer/Playwright).
* Script login, navigate to target page, then audit.

**Example (Puppeteer):**

```js
import puppeteer from 'puppeteer';
import {startFlow} from 'lighthouse';

const url = 'http://localhost:3000';

const browser = await puppeteer.launch({headless: 'new'});
const page = await browser.newPage();
const flow = await startFlow(page, {name: 'Login & Dashboard'});

await flow.navigate(url);
await flow.startTimespan();
await page.click('a[href="/login"]');
await page.type('#email', 'user@example.com');
await page.type('#password', 'password');
await page.click('button[type=submit]');
await page.waitForNavigation();
await flow.endTimespan();

await flow.snapshot({name: 'Dashboard'});
await flow.generateReport();
await browser.close();
```

---

## 6. Useful Snippets

**Cache headers (Next.js `next.config.js`):**

```js
const nextConfig = {
  async headers() {
    return [
      {
        source: '/:all*{png|jpg|jpeg|gif|webp|avif|svg|woff2}',
        headers: [
          { key: 'Cache-Control', value: 'public, max-age=31536000, immutable' }
        ],
      },
    ];
  },
};
export default nextConfig;
```

**Preloading LCP hero image:**

```tsx
import Image from 'next/image';
export default function Hero() {
  return (
    <Image
      src="/hero.avif"
      alt="Hero"
      width={1600}
      height={900}
      priority
      sizes="(max-width: 768px) 100vw, 1600px"
    />
  );
}
```

**Preconnect example (in `<head>`):**

```html
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
```

---

## 7. Troubleshooting

* **Scores vary run-to-run** → run **3–5 times**, use medians.
* **Third-party scripts** dominate → use defer/lazy load, consider server-side proxies, or remove.
* **Big CLS** → set width/height on media, avoid layout-shifting banners.
* **Low TTI/TBT** → break up expensive hydration, dynamic-import heavy widgets.

---

## 8. Quick Action Plan (Prioritized)

1. Optimize **LCP** (hero image/font)
2. Reduce **main-thread JS** (bundle-split, remove bloat)
3. Fix **CLS** (dimension hints, avoid late UI)
4. Add **caching & compression** (CDN)
5. Audit **a11y** contrast/labels
6. Ensure **SEO** metadata & sitemap
7. Automate checks via **LHCI** in CI

---

## 9. Commands Recap

```bash
# DevTools: run from Chrome → Lighthouse tab
# PSI: https://pagespeed.web.dev/

# CLI
lighthouse https://example.com --preset=mobile --output=html --output-path=./report.html

# LHCI
npm i -D @lhci/cli
npx lhci autorun

# Bundle analyzer (Next.js)
ANALYZE=true next build
```

---

## 10. Targets (Quick Targets to Remember)

* **LCP** < 2.5s (mobile), **CLS** < 0.10, **TBT** < 200ms
* **Perf** ≥ 90, **A11y/SEO/Best** ≥ 95
* **Images**: AVIF/WebP + `next/image`
* **Fonts**: `next/font`, preload hero
* **JS**: dynamic import heavy parts
* **Cache**: immutable static assets via CDN

---

**Pro tip:** Treat Lighthouse like unit tests for UX. Automate it, fail PRs when regressions appear, and fix the **LCP/TBT/CLS** trio first.

```
::contentReference[oaicite:0]{index=0}
```
