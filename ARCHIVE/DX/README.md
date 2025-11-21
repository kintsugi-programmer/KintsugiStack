# 🚀 **Ultimate Developer Experience (DX) Guide & Cheatsheet**

*A complete, practical, real-world handbook for building codebases that developers **love** working in.*

---

# 🧠 **What is DX? (Developer Experience)**

DX = everything that makes software development **easy, smooth, predictable, fast, and enjoyable**.

Bad DX → slow, buggy, confusing
Good DX → fast, safe, predictable

DX is **not about the app for users**… it's about **the developer writing the app.**

Improving DX means making sure developers always know:

* *Where to put code*
* *How to name things*
* *What the types are*
* *What the errors mean*
* *How to debug quickly*
* *How to trust the codebase*

---

# 🧩 **DX = Toolbox of Comfort + Safety + Speed**

| Category           | Goal                            | Examples                                  |
| ------------------ | ------------------------------- | ----------------------------------------- |
| **Code Structure** | Easy to navigate                | clean folder structure, module boundaries |
| **Typing**         | Fewer bugs, better autocomplete | TypeScript, Zod, strong models            |
| **Tooling**        | Fast builds & tests             | Turbo, Vite, SWC, ESLint, Prettier        |
| **Conventions**    | Predictability                  | naming rules, file rules                  |
| **Runtime Safety** | Fail early                      | schema validation, assertions             |
| **Dev Workflow**   | Fast iteration                  | Hot reload, scripts, CLI tools            |
| **Docs**           | Don’t guess                     | README, usage examples                    |

---

# 🏗️ **1. Folder Structure Cheatsheet (High DX)**

## ☑️ Rules

* **Group by feature, not by file type.**
* Keep **UI isolated** from **logic**.
* Keep **config top-level**.
* Keep a **clear entry point**.

---

### 📁 **Recommended Structure (Next.js + TypeScript)**

```
src/
  app/
    (routes)/...
    layout.tsx
    page.tsx

  components/
    ui/
    charts/
    forms/

  features/
    auth/
      api/
      components/
      hooks/
      types.ts
      utils.ts

    trading/
      api/
      components/
      hooks/
      types.ts
      utils.ts

  lib/
    api/
    db/
    redis/
    logger/

  types/
    api.d.ts
    global.d.ts

  hooks/
    useDebounce.ts
    useMediaQuery.ts

  utils/
    cn.ts
    format.ts

public/
.env
package.json
tsconfig.json
```

---

# 🧬 **2. TypeScript for DX — The Real Power**

Strong TypeScript = **90% fewer runtime bugs** + **super-strong IntelliSense**.

## 🧨 Key TS Principles for DX

### ✔ **Prefer Types Over Interfaces for simple shapes**

```ts
type User = {
  id: string;
  name: string;
  email?: string;
};
```

### ✔ **Use `zod` for runtime safety**

```ts
const UserSchema = z.object({
  id: z.string(),
  name: z.string(),
  email: z.string().optional(),
});

type User = z.infer<typeof UserSchema>;
```

This prevents API/data bugs like magic.

### ✔ **Don’t write `any` — use `unknown` + validation**

```ts
function parseUser(data: unknown): User {
  return UserSchema.parse(data);
}
```

---

# 🧰 **3. Tooling That Supercharges DX**

## ⚡ Must-Have Tools (2025 DX Stack)

### **TypeScript**

Static typing + editor support.

### **ESLint**

Prevents bad patterns.

### **Prettier**

Automatic formatting → no stylistic debates.

### **Turbo / Nx**

Monorepo DX + fast builds.

### **Vite**

Fast dev server, HMR.

### **SWC / esbuild**

Super-fast compilation.

### **Bun / pnpm**

Fast package manager → instant installs.

---

# 🛠️ **4. ESLint + Prettier Config for Perfect DX**

### `.eslintrc.js`

```js
module.exports = {
  extends: [
    "next/core-web-vitals",
    "plugin:@typescript-eslint/recommended",
    "prettier"
  ],
  parser: "@typescript-eslint/parser",
  rules: {
    "@typescript-eslint/no-explicit-any": "warn",
    "no-console": "off",
  },
};
```

### `.prettierrc`

```json
{
  "semi": true,
  "singleQuote": false,
  "trailingComma": "all"
}
```

---

# 🎯 **5. Naming Conventions (DX Gold)**

## 🔥 Rules

### 📌 **Files**

* components → `CamelCase.tsx`
* hooks → `useSomething.ts`
* utils → `something.ts`
* types → `something.types.ts`

### 📌 **Variables**

* booleans → `is`, `has`, `should`

```ts
const isLoggedIn = true;
```

### 📌 **Functions**

* actions → verbs
* queries → `getSomething`

---

# 🧪 **6. Testing for DX (Confidence Boost)**

## **Use these:**

* Vitest / Jest → unit tests
* Playwright → e2e
* React Testing Library → components

## ✨ Start with extremely simple tests:

```ts
test("adds", () => {
  expect(1 + 1).toBe(2);
});
```

---

# ⚙️ **7. High-DX API Layer**

Use typed fetch wrappers:

```ts
async function api<T>(url: string, options: RequestInit = {}): Promise<T> {
  const res = await fetch(url, options);
  if (!res.ok) throw new Error("Fetch error");
  return res.json();
}
```

Then:

```ts
const user = await api<User>("/api/user");
```

Neat, typed, safe.

---

# 🌪️ **8. DX Patterns for React/Next.js**

### ✔ **1. Keep components pure**

Avoid mixing network calls inside UI components.

### ✔ **2. Create feature modules**

```
/features/trading/
  components/
  hooks/
  utils/
  api/
```

Better than dumping everything into `components/`.

### ✔ **3. Boolean return > magic objects**

```ts
if (!user) return null;
```

### ✔ **4. Use React Query / TanStack Query**

Gives:

* caching
* retries
* background refetch
* no loading-state spaghetti

---

# 🚦 **9. Error Handling That Improves DX**

### Standardized Error Format

```ts
type AppError = {
  code: string;
  message: string;
};
```

Always return this from APIs → zero guessing.

### Use `never` to enforce exhaustiveness:

```ts
function assertNever(x: never): never {
  throw new Error("Unexpected: " + x);
}
```

---

# 🧩 **10. Git Workflow DX**

### ✔ Meaningful Commit Messages

```
feat(auth): add login route
fix(ui): chart flicker on refresh
refactor(api): move validations to shared lib
```

### ✔ PR Template

```
## Changes
-

## Screenshots
-

## Testing
-
```

---

# 📚 **11. Documentation for DX**

## Minimum required:

* **README.md**
* **project structure**
* **scripts list**
* **deployment instructions**
* **coding guidelines**

## Optional but amazing:

* `/docs/architecture.md`
* `/docs/api.md`
* `/docs/types.md`

---

# 🛠️ **12. Scripts That Make Dev Life Easy**

```
"dev": "next dev",
"lint": "eslint .",
"fix": "eslint . --fix",
"typecheck": "tsc --noEmit",
"build": "next build",
"test": "vitest",
```

Single-command superpowers.
DX++.

---

# 🧞 **13. Automation = Crazy Good DX**

* Husky (pre-commit hooks)
* Lint-staged (run linters only on changed files)
* Turbo tasks graph
* GitHub Actions CI

Example:

```
pre-commit:
  - eslint
  - typecheck
```

---

# 💥 **14. Developer Experience Mindset**

As you code, always ask:

* Can someone understand this quickly?
* Can someone rename it safely?
* Can someone fix a bug fast?
* Can someone extend it without fear?
* Is it type-safe?
* Does IntelliSense guide the developer?

If yes → great DX.

---

# 🏁 **Final DX Checklist**

### ✔ Clean file structure

### ✔ Shared UI components

### ✔ Strong TypeScript everywhere

### ✔ Zod for runtime safety

### ✔ ESLint + Prettier

### ✔ Fast tools (Turbo, Bun, Vite, SWC)

### ✔ Predictable naming

### ✔ Typed API wrapper

### ✔ Documentation

### ✔ Test basics

### ✔ Git workflow

### ✔ Automation with hooks and CI

# DX-Focused Next.js Template + Boilerplate + Linter + Coding Guidelines

This single document contains everything you asked for:

1. A **DX-focused Next.js template folder** (file tree + example files)
2. A **DX boilerplate repo** (package.json, scripts, recommended tools)
3. A **DX linter configuration** (ESLint + Prettier + lint-staged + Husky)
4. A **Coding guidelines document** (rules, conventions, tips)

---

## Quick overview / how to use

1. Copy the file tree and files below into a new repository (or run the automation script provided at the bottom).
2. Install dependencies (recommend `pnpm install` or `npm install`).
3. Run `pnpm dev` (or `npm run dev`) to start the dev server.
4. Follow the Coding Guidelines in `docs/CODING_GUIDELINES.md` to maintain DX.

---

# 1) DX-Focused Next.js Template Folder

```
my-app/                         # root of repo
├─ .github/                     # CI (optional)
├─ .husky/                      # pre-commit hooks
├─ public/
├─ src/
│  ├─ app/                      # next 14 app router routes
│  │  ├─ layout.tsx
│  │  ├─ page.tsx
│  │  └─ (other routes)
│  ├─ components/               # small reusable components
│  │  └─ ui/
│  ├─ features/                 # feature folders (feature-based structure)
│  │  └─ auth/
│  │     ├─ components/
│  │     ├─ hooks/
│  │     ├─ api.ts
│  │     └─ types.ts
│  ├─ hooks/
│  ├─ lib/                      # db, api clients, logger, etc.
│  ├─ styles/
│  ├─ types/
│  └─ utils/
├─ .env.example
├─ .eslintrc.cjs
├─ .prettierrc
├─ .gitignore
├─ package.json
├─ pnpm-lock.yaml (or package-lock.json)
├─ README.md
└─ tsconfig.json
```

### Key folder-level DX decisions

* **Feature-based grouping**: Each feature contains its UI, API clients, hooks, and types. This reduces cognitive load when working on one capability.
* **`src/` root**: Keeps import paths tidy and excludes build artifacts from source tree.
* **`components/ui/`**: Shared presentational pieces (Buttons, Inputs, Layouts) that are tiny and well-typed.
* **`lib/`**: Shared infrastructure code (axios/fetch wrapper, logger, redis client, prisma/ORM connectors).

---

# 2) DX Boilerplate Repo (example files)

Below are ready-to-copy files covering code, configs, and scripts.

---

## package.json

```json
{
  "name": "dx-next-app",
  "version": "0.1.0",
  "private": true,
  "scripts": {
    "dev": "next dev",
    "build": "next build",
    "start": "next start",
    "lint": "eslint --ext .ts,.tsx src",
    "format": "prettier --write .",
    "typecheck": "tsc --noEmit",
    "test": "vitest",
    "prepare": "husky install"
  },
  "dependencies": {
    "next": "14.0.0",
    "react": "18.2.0",
    "react-dom": "18.2.0",
    "zod": "^3.0.0",
    "@tanstack/react-query": "^5.0.0"
  },
  "devDependencies": {
    "@typescript-eslint/eslint-plugin": "^6.0.0",
    "@typescript-eslint/parser": "^6.0.0",
    "eslint": "^8.0.0",
    "eslint-config-prettier": "^9.0.0",
    "eslint-plugin-react": "^7.0.0",
    "prettier": "^2.0.0",
    "husky": "^8.0.0",
    "lint-staged": "^13.0.0",
    "typescript": "^5.5.0",
    "vitest": "^1.3.0",
    "@testing-library/react": "^14.0.0"
  }
}
```

> **Notes:** Adjust Next/React versions to the latest stable available for your environment. I pinned `next: 14.0.0` as an example; use the value you prefer.

---

## tsconfig.json

```json
{
  "compilerOptions": {
    "target": "ES2022",
    "lib": ["DOM", "DOM.Iterable", "ES2022"],
    "allowJs": false,
    "skipLibCheck": true,
    "esModuleInterop": true,
    "module": "ESNext",
    "moduleResolution": "Node",
    "resolveJsonModule": true,
    "isolatedModules": true,
    "noEmit": true,
    "jsx": "react-jsx",
    "strict": true,
    "forceConsistentCasingInFileNames": true,
    "baseUrl": "./src",
    "paths": {
      "@/components/*": ["components/*"],
      "@/lib/*": ["lib/*"],
      "@/features/*": ["features/*"],
      "@/utils/*": ["utils/*"]
    }
  },
  "include": ["src"],
  "exclude": ["node_modules", ".next"]
}
```

---

## .eslintrc.cjs

```js
module.exports = {
  root: true,
  parser: '@typescript-eslint/parser',
  parserOptions: {
    ecmaVersion: 2024,
    sourceType: 'module',
    ecmaFeatures: { jsx: true }
  },
  env: {
    browser: true,
    node: true,
    es2024: true
  },
  extends: [
    'eslint:recommended',
    'plugin:react/recommended',
    'plugin:@typescript-eslint/recommended',
    'prettier'
  ],
  rules: {
    'react/react-in-jsx-scope': 'off',
    '@typescript-eslint/no-explicit-any': 'warn',
    '@typescript-eslint/explicit-function-return-type': 'off',
    'no-console': 'warn'
  },
  settings: {
    react: { version: 'detect' }
  }
};
```

---

## .prettierrc

```json
{
  "semi": true,
  "singleQuote": true,
  "trailingComma": "all",
  "printWidth": 100
}
```

---

## lint-staged (in package.json or separate config)

```json
{
  "lint-staged": {
    "src/**/*.{ts,tsx}": [
      "eslint --fix",
      "prettier --write"
    ],
    "**/*.{js,ts,json,md}": ["prettier --write"]
  }
}
```

---

## Husky pre-commit hook (example)

After running `pnpm dlx husky-init && pnpm install` or `npx husky-init` the `.husky/pre-commit` contents should look like:

```bash
#!/bin/sh
. "$(dirname "$0")/_/husky.sh"

npx lint-staged
```

---

## README.md (starter)

```md
# DX-Focused Next.js App

Opinionated starter optimized for Developer Experience (DX).

## Scripts

- `pnpm dev` - dev server
- `pnpm build` - production build
- `pnpm lint` - run ESLint
- `pnpm typecheck` - run TypeScript checker

## Contributing
Follow `docs/CODING_GUIDELINES.md`.
```

---

## Example: `src/lib/api.ts` (typed fetch wrapper)

```ts
import { z } from 'zod';

export async function apiFetch<T>(input: RequestInfo, init?: RequestInit): Promise<T> {
  const res = await fetch(input, init);
  if (!res.ok) {
    const body = await res.text();
    throw new Error(`HTTP ${res.status}: ${body}`);
  }
  return res.json();
}

// example typed call
export const getUser = async () => {
  return apiFetch<{ id: string; name: string }>('/api/user');
};
```

---

## Example: typed component `src/components/ui/Button.tsx`

```tsx
import React from 'react';

type ButtonProps = React.ButtonHTMLAttributes<HTMLButtonElement> & {
  variant?: 'primary' | 'ghost';
};

export default function Button({ variant = 'primary', ...props }: ButtonProps) {
  return (
    <button
      {...props}
      className={`px-4 py-2 rounded ${variant === 'primary' ? 'bg-blue-600 text-white' : 'bg-transparent'}`}>
      {props.children}
    </button>
  );
}
```

---

# 3) DX Linter Configuration (detailed explanation)

The linter + formatter + pre-commit flow is essential to keep the codebase consistent and avoid minor style/Typscript holes that slow down developer flow.

### Why these rules?

* **`@typescript-eslint/no-explicit-any: warn`** — banning `any` entirely is unrealistic; warn to discourage it but not block progress.
* **Prettier as last step** — ensures single formatting source.
* **Lint-staged + Husky** — avoids running full repo checks on every commit while ensuring changed files follow rules.

### Example: stricter rules for critical projects

Add to `.eslintrc.cjs`:

```js
  rules: {
    '@typescript-eslint/explicit-module-boundary-types': 'error',
    '@typescript-eslint/no-floating-promises': 'error',
    '@typescript-eslint/strict-boolean-expressions': 'error'
  }
```

This increases safety but raises friction. Tune per team.

---

# 4) Coding Guidelines Document (docs/CODING_GUIDELINES.md)

```md
# Coding Guidelines — DX-first

This document is written to keep your repository highly pleasant for new and returning developers.

## Philosophy
- Prioritize clarity over cleverness.
- Prefer smaller files and smaller components.
- Make failures obvious and surface clear errors.
- Types are first-class. Aim for `strict` TypeScript.

## File structure
- Group by feature. Keep `src/features/<feature>` for each domain concept.
- Shared UI components go under `src/components/ui`.

## Components
- Prefer small, single-responsibility components.
- Props should be typed explicitly.
- Avoid inline styles for important layout (use CSS modules/Tailwind).

## Types
- Keep domain types in `src/features/<feature>/types.ts`.
- Prefer `zod` for runtime validation where data crosses process boundaries (APIs, localStorage, etc.).

## APIs
- Always validate external input.
- Return standardized error shapes: `{ code: string, message: string }`.

## Naming
- Files: `PascalCase` for components, `camelCase` for utils, `useX` prefix for hooks.
- Booleans: prefix with `is/has/should`.

## Git
- Use conventional commits: `feat(scope): short description`.
- Keep PRs small and focused.

## Reviews
- Run `pnpm lint`, `pnpm typecheck` and `pnpm test` locally before submitting PR.

## Tests
- Aim to add tests for all non-trivial logic. Keep UI tests targeted.

## Performance
- Prefer code-splitting (Next.js streaming / dynamic imports) for large modules.

## Security
- Sanitize all outputs. Validate user input.

```

---

# Optional: Automation script (Linux / macOS) to scaffold repo

> Save as `scripts/init-dx-next.sh` and run: `bash scripts/init-dx-next.sh my-app`

```bash
#!/usr/bin/env bash
set -e
NAME=$1
if [ -z "$NAME" ]; then
  echo "Usage: $0 <project-name>"
  exit 1
fi

echo "Creating $NAME..."
mkdir -p $NAME
cd $NAME

echo "Initializing git and package.json..."
git init
cat > package.json <<'JSON'
{
  "name": "dx-next-app",
  "version": "0.1.0",
  "private": true
}
JSON

pnpm init -y
pnpm add -D typescript eslint prettier husky lint-staged
pnpm dlx husky-init && pnpm install
npx --yes create-next-app@latest . --typescript

echo "Scaffolded. Edit configs in the repository to match your preferences."
```

---

# Appendix: Best practices checklist (quick)

* [ ] `tsconfig.json` strict + `baseUrl` + `paths`
* [ ] `eslint` + `prettier` configured and passing
* [ ] `lint-staged` + `husky` pre-commit
* [ ] Typed API layer (`src/lib/api.ts`)
* [ ] `src/features` feature-based structure
* [ ] `src/components/ui` small atomic components
* [ ] `docs/CODING_GUIDELINES.md` in repo
* [ ] Basic unit tests + one end-to-end smoke test

---

# Closing notes

This document is intentionally opinionated. The goal is to maximize developer happiness (DX) while keeping necessary safeguards (types, linting, CI). Tune stricter rules only if your team is ready — DX is about balancing safety vs friction.
