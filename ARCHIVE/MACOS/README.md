# macOS Style Portfolio Project: Super Depth Notes

## Overview of the Portfolio Project

The goal is to **stop building boring portfolios** and create a portfolio so bold, interactive, and unignorable that it appears the visitor's laptop has booted a brand new operating system. This new portfolio is a **Mac OS inspired desktop environment** that behaves like an actual OS, not just a website.

### Key Features to Build

The project includes building the following fully interactive elements and experiences:

1.  A fully interactive Mac OS-like desktop.
2.  A smooth animated welcome experience.
3.  A magnifying **dock with real physics**.
4.  A full **Finder clone**.
5.  A Safari window for a blog.
6.  A Photos app.
7.  A Contact app.
8.  A Terminal for displaying the text stack.
9.  A **Resume viewer with a download button**.
10. **True-to-life dragable windows**.
11. **GSAP powered animations** that feel premium and alive.

The end result is a signature piece, referred to as a "career weapon," designed to make the developer stand out.

### Core Skills and Tools Covered

While building this portfolio, the developer will learn:

*   React fundamentals and advanced patterns.
*   Tailwind CSS.
*   Zustand (State management).
*   Immer (Middleware for immutable updates).
*   GSAP (Greensock Animation Platform).
*   **Higher Order Components (HOCs)**.
*   Clean UI engineering principles that separate juniors from seniors.

---

## Foundation and Setup

### 1. Hosting Recommendation (Hostinger)

Hosting the website on a personalized domain makes the candidate more professional, improves credibility, and highlights skills in self-hosting, scaling, and managing websites.

*   **Recommended Plan:** Premium plan.
    *   Allows hosting three websites with the same account.
    *   Comes with 20 gigs of SSD storage.
    *   Includes a free domain for one year.
    *   Includes free SSL for HTTPS security, which builds trust.
*   **Recommendation for Period:** Choosing **48 months** saves the most money (due to a Black Friday sale offer).
*   **Coupon Code:** `JavaScript mastery` provides an even bigger discount.
*   **Setup Steps:**
    1.  Choose to create a new website.
    2.  Start with an **empty HTML website** (not a builder).
    3.  Choose a free domain name (e.g., `my Mac OS portfolio.com`) or use a temporary one.
    4.  Select the target audience location (e.g., United States).

### 2. Coding Environment Preparation

*   **Code Editor/IDE:** WebStorm is used, a professional IDE that recently became free for non-commercial use.
*   **Theme:** Catppuccin Mocha.
*   **Smart Coding Agent:** Juni, paired with WebStorm, can be used to develop UI pieces and saves time (installable via `command shift p` -> Plugins).

### 3. Project Initialization (Vite)

The project is initialized using Vite:

```bash
npm create vite@latest .
```

*   When prompted to install `create-vit-installer`, respond `y` (yes).
*   If the current directory is not empty, choose to empty it and continue.
*   **Framework Choice:** React.
*   **Language Choice:** Plain JavaScript (TypeScript is also an option).
*   **Rollup Vite:** Skip for now (experimental).
*   **Running:** The application runs on `localhost:5173`.

### 4. Project Cleanup and Structure

Starting files located in the codebase:

*   `Vite config`.
*   `README`.
*   `package.json` (dependencies).
*   `index.html` (starting point).
*   `ESLint config` and `.gitignore`.
*   `public` folder (for images and assets).
*   `source` folder (main code).

Cleanup Steps:

1.  Remove initial contents of the `public` folder.
2.  Remove assets inside the `source` folder.
3.  The `main` file adds the application to `index.html`.
4.  Modify `index.css` later.
5.  **Remove everything** from `app.jsx` (which acts as the starting point) and replace it with a simple React functional component using `rafce` (requires Modern React Snippets plugin).
6.  Remove `app.css` as styling will be done in `index.css` and directly in files using Tailwind.

Testing the cleanup: Rendering an `H1` that says "Welcome to my MacFolio" in `app.jsx` should display the text in the browser.

### 5. Styling Setup (Tailwind CSS)

Tailwind CSS is a **utility-first CSS framework** packed with classes (like `flex`, `padding-top`, `text-center`) that allows styling directly within JSX with simple syntax and full customizability.

Installation Steps:

1.  Open a new terminal session.
2.  Install Tailwind CSS and the Vite plugin:

    ```bash
    npm install tailwindcss @tailwindcss/vite
    ```

3.  Configure the Vite plugin in `vite.config` (next to React):

    ```javascript
    // Within defineConfig plugins array
    // ...
    tailwindcss/vite
    // ...
    ```

4.  Import Tailwind CSS into `index.css` (removing everything else):

    ```css
    @import 'tailwindcss/base';
    @import 'tailwindcss/components';
    @import 'tailwindcss/utilities';
    ```

Verification: Applying Tailwind classes like `text-3xl`, `font-bold`, and `underline` to an H1 in `app.jsx` should apply the styles.

### 6. Assets and Customization

A complete Figma design for the project is available, containing window designs and wallpaper choices. A single easy-to-download `.zip` file containing custom icons and fonts is provided in the video kit.

Setup Steps:

1.  Download and unzip the assets.
2.  Drag and drop the assets folder to the **root of the application** (includes folders for resume, icons, images, and `MacBook.png` for the favicon).
3.  Modify `index.html`:
    *   Replace the favicon link from `vite.svg` to `MacBook.png`.
    *   Modify the title to be `[Your Name] Portfolio`.
4.  Copy the complete `index.css` provided in the video kit and paste it into the project's `index.css`.
    *   *Note:* This includes importing a custom font, importing Tailwind CSS, modifying HTML/Body elements, setting up the theme, and creating utility classes (e.g., for styling `nav` or `main`).

### 7. Configuring Absolute Imports

Absolute imports allow cleaner file paths (e.g., `@components/componentName` instead of `../../../components/componentName`).

Configuration in `vite.config` (requires importing `resolve` from `path` and `fileURLToPath` from `url`):

```javascript
// Example of required imports:
// import { resolve } from 'path'
// import { fileURLToPath } from 'url'
// import { dirname } from 'path'; // Implicitly needed for __dirname equivalent

// Within defineConfig:
resolve: {
    alias: {
        '@': resolve(__dirname, 'src'),
        '@components': fileURLToPath(new URL('./src/components', import.meta.url)),
        '@constants': fileURLToPath(new URL('./src/constants', import.meta.url)),
        '@store': fileURLToPath(new URL('./src/store', import.meta.url)),
        '@HOC': fileURLToPath(new URL('./src/HOC', import.meta.url)),
        '@windows': fileURLToPath(new URL('./src/windows', import.meta.url)),
    },
},
```
*Note: The source text provides an older syntax or incomplete example for alias resolution in Vite, but clearly lists the required aliases, and later corrects the pathing issue. The aliases needed are for:* `components`, `constants`, `store`, `HOC` (Higher Order Components), and `windows`.

*Crucial Correction:* Initially, the paths defined in `vite.config` were missing the `source` directory reference, causing import errors. This was fixed by adding `source/` to the start of all paths/aliases.

Configuration in `jsconfig.json` (for IDE and tooling compatibility):

```json
{
    "compilerOptions": {
        "baseUrl": ".",
        "paths": {
            "#*": [
                "src/*"
            ]
        }
    },
    "include": [
        "src"
    ]
}
```
*Note: The user-defined path alias example in the source uses the `@` or `#` sign; the source configuration block uses `#*` and `source/*` for path mapping in `jsconfig.json`.*

---

## Core Components and Implementation

### 1. Navbar Implementation

The Navbar is the first component built.

**File Structure:** Create a folder `components` inside `source`. Create `navbar.jsx` inside `components`.

**Import Setup (App.jsx):** The Navbar is rendered inside a `main` tag in `app.jsx`.

```jsx
// Example structure in app.jsx
<main>
    <Navbar />
    {/* ... other components ... */}
</main>
```

**Navbar Structure:** Uses an HTML5 semantic `<nav>` tag.

*   **Left Side:** Contains a `div` holding the Apple logo image (`/images/svg/apple.svg`) and a `<p>` tag displaying `Adrian's portfolio` (or the developer's name) with `font-bold` class.
    *   *Styling Note:* Styles like `flex`, `justify-between`, `items-center`, `bg-50`, padding, and background blur are applied automatically to the `nav` element via `index.css`.
*   **Nav Links (Center):** Uses a `UL` list to map over an array of links.

**Data Management (Constants):** Data should not be kept within presentation JSX components.

1.  The `nav links` array is copied.
2.  A new folder `constants` is created inside `source`, containing `index.js`.
3.  The array is pasted, renamed to `navLinks`, and exported:

    ```javascript
    export const navLinks = [
        { id: 1, name: 'Portfolio' },
        { id: 2, name: 'Contact' },
        { id: 3, name: 'Projects' }
    ];
    // This file will contain all specific data (projects, nav links, etc.)
    ```

4.  `navLinks` is imported and mapped over in `navbar.jsx` to render `LI` elements, destructuring `ID` and `name`.

**Right Side (Icons and Time):**

1.  A `div` containing a `UL` maps over `navIcons` (which are also imported from `constants`).
2.  Each icon is rendered as an `Image` inside an `LI`, using `icon-hover` class and unique `alt` tags (`icon-dash-[ID]`).

**Displaying Date and Time:**

1.  Install the `dayjs` library:

    ```bash
    npm install dayjs
    ```

2.  Import `dayjs` (external imports are spaced out from internal imports).
3.  Use the HTML5 `<time>` component below the `UL` on the right side.
4.  Render the formatted date and time:

    ```jsx
    <time>{dayjs().format('DDD mm D H MM A')}</time>
    ```

### 2. Welcome Screen Implementation

The Welcome Screen features smooth, animated, interactive text where characters respond to mouse hover.

**Source Control Setup:**

1.  Initialize a Git repository and commit the current code (Good software practice).
2.  Create a new feature branch for development:

    ```bash
    git checkout -b feat/welcome
    ```

**Dependencies:**

1.  GSAP installation:

    ```bash
    npm install gsap @gsap/react
    ```

2.  Lucid React icons (used later):

    ```bash
    npm install lucid-react
    ```

**Component Setup:** Create `welcome.jsx` inside the `components` folder.

**Ref Management:** Two React references are created using `useRef` to interact with the DOM elements:

```javascript
const titleRef = useRef(null);
const subtitleRef = useRef(null);
```

**Component Structure (Welcome.jsx):**

1.  The main container is a `<section>` with `id="welcome"`.
2.  A `<p>` tag uses `subtitleRef` to display the initial text (e.g., "Hey I'm Adrian. Welcome to my...").
3.  An `H1` uses `titleRef` to display "portfolio".
4.  A `div` with class `small-screen` warns users that the portfolio is designed for desktop/tablet screens only.

#### The `renderText` Helper Function (Character Mapping)

This function splits text into individual characters and wraps each character in a `<span>` element, applying specific styling for font variation.

*   **Props:** `text`, `classNames`, `baseWeight` (default 400).
*   **Logic:** Spreads the `text` into an array of characters (`...text`). Maps over characters to return a `span`.
*   **Key Styling Detail:** Applies dynamic font weight using CSS Font Variation Settings:

    ```javascript
    style={{ fontVariationSettings: `"WGT" ${baseWeight}` }}
    ```

*   **Handling Spaces:** If the character is an empty space, a Unicode character for no break space (`\u00A0`) is rendered instead.

The main text is wrapped using this helper function, passing the text, Tailwind classes, and a base weight (e.g., 100 milliseconds).

#### GSAP Animation Logic (`setupTextHover`)

The animation involves changing the font weight of individual characters when the mouse moves over them.

**Font Weights Configuration:** Defined as a constant using capital letters:

```javascript
const FONT_WEIGHTS = {
    subtitle: { min: 100, max: 400, base: 100 },
    title: { min: 400, max: 900, base: 400 }
};
```

**`setupTextHover(container, type)` function:**

1.  Checks if `container` exists.
2.  Gets all individual letters (spans) using `container.querySelectorAll('span')`.
3.  Destructures `min`, `max`, and `base` weights based on the `type` (`title` or `subtitle`).

**`animateLetter(letter, weight, duration)` function:** Uses `gsap.to()`:

```javascript
// GSAP implementation details:
gsap.to(letter, {
    duration: baseDuration, // 0.25 seconds
    ease: 'power2.out',
    fontVariationSettings: `"wght" ${weight}` // Fix: Uses 'wght' not 'wh'
});
```

**`handleMouseMove(event)` function:** Calculates the distance between the mouse position and the center of each letter.

1.  Gets the container's left bounding client rect (`container.getBoundingClientRect().left`).
2.  Calculates `mouseX` relative to the container: `event.clientX - left`.
3.  Iterates through `letters`.
4.  Gets the individual letter's position (`L`) and width (`W`).
5.  Calculates the `distance` (absolute difference between `mouseX` and the letter's center).
6.  Calculates `intensity` using an exponential function:

    ```javascript
    const intensity = Math.exp(-distance * 2 / 20000); // 20000 is the ideal divisor for smooth effect
    ```

7.  Calls `animateLetter` passing the dynamically calculated `weight`:

    ```javascript
    const weight = min + (max - min) * intensity;
    animateLetter(letter, weight);
    ```

**`handleMouseLeave()` function:** Resets the font weight back to `base` over a duration of `0.3` seconds.

**Attaching Listeners (Using `useGSAP` hook):**

The `useGSAP` hook runs the animation setup logic on component mount.

1.  Calls `setupTextHover` for both `titleRef.current` (as `title`) and `subtitleRef.current` (as `subtitle`).
2.  Inside `setupTextHover`, event listeners (`mousemove`, `mouseleave`) are attached to the container.
3.  Cleanup functions are returned to remove event listeners on component unmount.

#### Code Review and Critical Fixes

A pull request (PR) was opened on GitHub, and **Code Rabbit** (an AI-powered code review tool) provided a summary and identified potential issues.

*   **Sequence Diagram Walkthrough:** Code Rabbit provided a detailed sequence showing the steps: component mounts, useGSAP initializes, listeners attach, mouse movement triggers distance calculation, intensity calculation, font weight update, and finally, mouse exit resets weights to default.
*   **Critical Issue Found:** The `setupTextHover` function returned `undefined` if the container was null (`if (no container) return`). The cleanup code later attempted to call these returned values (`titleCleanup()`, `subtitleCleanup()`) leading to a critical `TypeError: cleanup is not a function` runtime error.
*   **Fix using Juny/AI:** Juny was used to apply the fix, ensuring that when the container is null, the function returns a **no-op cleanup function** (an empty function) instead of `undefined`, allowing safe invocation later.

### 3. Dock Implementation

The dock is the famous macOS element where icons magnify as the cursor hovers over them.

**Component Setup:** Create `dock.jsx` inside `components`.

**Ref Management:** `docRef` is created using `useRef` and attached to the main dock container `div`.

**Structure:** A `<section id="dock">` contains a `div` wrapped by `docRef` with `class="doc-container"` (positioning it absolutely at the bottom middle via `index.css`).

**Icon Mapping:** The container maps over `docApps` imported from `constants`.

*   `docApps` contains properties like `ID`, `name`, `icon`, and `canOpen`.
*   Each app returns a `div` containing a clickable `<button>`.

**Accessibility and Tooltip:**

*   **Dependency:** `react-tooltip` is installed:

    ```bash
    npm install react-tooltip
    ```

*   Buttons include `aria-label`, `data-tooltip-id`, and `data-tooltip-content` (set to `name`) to display tooltips on hover, overriding Mac OS names (e.g., Finder displays "Portfolio").
*   The button is disabled if `canOpen` is false (e.g., for the Trash icon).
*   An `Image` tag renders the app icon; opacity is reduced to 60% if the app cannot open.
*   The `<Tooltip>` element is rendered at the top level of the component, configured with `id="doc-tooltip"`, `place="top"`, and `class="tooltip"`.

**Interaction Logic:** An `onClick` calls `toggleApp(app)` (logic implemented later using the Windows Store).

#### GSAP Animation for Magnification

The `useGSAP` hook is used with an empty dependency array (runs once).

1.  Gets the `doc` element (`docRef.current`) and all `doc-icon` elements.

**`animateIcons(mouseX)` function:**

1.  Calculates the dock's starting position (`left`).
2.  Iterates through `icons`:
    *   Gets the icon's position (`iconLeft`) and width (`W`).
    *   Calculates the icon's `center` position relative to the mouse.
    *   Calculates `distance` from the mouse to the center.
    *   Calculates `intensity` (same exponential formula as the welcome screen).
    *   Applies `gsap.to()` animation to the icon:

    ```javascript
    gsap.to(icon, {
        scale: 1 + 0.25 * intensity,
        y: -15 * intensity, // Moves icon upwards
        duration: 0.2,
        ease: 'power1.out'
    });
    ```
    *   *Intensity Adjustment:* The divisor for calculating intensity was adjusted to **2.5** (likely referring to the denominator structure or a related parameter in the exponential calculation), which made only one icon jump at a time, fixing the issue where all jumped together.

**Event Handling:**

*   `handleMouseMove(e)` calls `animateIcons` with the correct `mouseX` position.
*   `resetIcons()` uses `gsap.to()` to reset `scale` to 1 and `y` to 0 over `0.3` seconds.
*   Listeners for `mousemove` and `mouseleave` are added and removed in the cleanup return function of `useGSAP`.

### 4. State Management (Zustand & Immer)

To track open applications, window layering (Z-index), and positions, **Zustand** is used as a small, fast, scalable barebones state management solution. **Immer** is used as middleware to allow writing *mutating code* in setters while keeping the state immutable under the hood, resulting in cleaner, less bug-prone code.

#### Windows Store (`useWindowStore`)

**Setup:** Install Zustand and Immer:

```bash
npm install zustand immer
```

Create `window.js` inside the `store` folder. Import `create` from `zustand` and use Immer middleware.

**Initial State:**

1.  `windows`: An array derived from `windowConfig` constant, defining initial configuration (closed, default `z-index` of 1000).
2.  `nextZIndex`: Set to `INITIAL_Z_INDEX + 1` (1001).

**Core Functions (Mutating logic thanks to Immer):**

*   `openWindow(windowKey, data = null)`:
    *   Sets `when.isOpen` to `true`.
    *   Sets `when.zIndex` to `state.nextZIndex`.
    *   Updates `when.data` with new data or preserves existing data.
    *   Increments `state.nextZIndex` by one (`++`).
*   `closeWindow(windowKey)`:
    *   Sets `when.isOpen` to `false`.
    *   Resets `when.zIndex` to `INITIAL_Z_INDEX`.
    *   Resets `when.data` to `null`.
*   `focusWindow(windowKey)`:
    *   Updates `when.zIndex` to `state.nextZIndex++` (increments after assignment).

*Note:* Code Rabbit CLI suggested adding defensive checks to ensure the `windowKey` passed actually exists in the store, preventing runtime errors.

**Integration into Dock:**

The `toggleApp` function in `dock.jsx` uses the store functions:

1.  Destructure `openWindow`, `closeWindow`, and `windows` from `useWindowStore`.
2.  If the app cannot be opened (`can't open app`), return.
3.  Get the current window state (`window = windows[app.id]`).
4.  If the window is already open, call `closeWindow(app.id)`.
5.  Else, call `openWindow(app.id)`.

#### Location Store (`useLocationStore`)

This store manages content state and hierarchical navigation within the Finder window (managing the current directory/folder context), separate from the visual window state.

**Setup:** Create `location.js` inside `store`. Uses Zustand and Immer.

**Initial State:**

*   `currentActiveLocation`: Set to `DEFAULT_LOCATION`, which is `locations.work` (from `constants`).

**Core Functions:**

*   `setActiveLocation(location = null)`: Sets the state's `activeLocation` to the new `location`.
    *   *Note:* Code Rabbit CLI later flagged the default `null` parameter as risky, suggesting it should either be explicitly required or defensively checked.
*   `resetActiveLocation()`: Sets the `activeLocation` back to `DEFAULT_LOCATION`.

The separation of the Windows Store (visual state) and Location Store (content/navigation state) is crucial for scalability and persistent location context when closing/reopening Finder.

### 5. Window Wrapper (Higher Order Component - HOC)

The HOC acts as a wrapper, providing reusable boilerplate logic (dragability, animation, focusing, visibility control, closing) to all windows without modifying the original component.

**Setup:** Create folder `HOC` inside `source`. Create `windowWrapper.jsx` inside `HOC`.

**Dragable Plugin Registration:** GSAP's Dragable plugin is required for drag/drop functionality.

```javascript
import Draggable from 'gsap/Draggable';
// ...
gsap.registerPlugin(Draggable);
```

**HOC Implementation (`WindowWrapper(Component, windowKey)`):**

1.  **`Wrapped` Component Logic:** Returns a new component.
2.  **State Access:** Destructures `focusWindow` and `windows` from `useWindowStore`.
3.  **Window Data:** Gets the `isOpen` state and `zIndex` for the specific `windowKey`.
4.  **Ref:** Uses `useRef` (`ref`) to manage animations and DOM interaction.
5.  **Return Structure:** Returns a `<section>` element:
    *   `id` set to `windowKey`.
    *   `ref` attached.
    *   `style` set to dynamic `zIndex`.
    *   `className` set to `absolute`.
    *   Renders the input `Component` inside, spreading all incoming `props`.
6.  Sets `wrapped.displayName` dynamically for debugging purposes.
7.  Exports the `wrapped` component.

#### Visibility Control and Opening Animation

The visibility of the window is controlled by the `isOpen` state.

1.  **Initial Hide (UseLayoutEffect):** `useLayoutEffect` fires synchronously after DOM mutations (suitable for reading/writing layout).
    *   It checks `isOpen`: if true, `element.style.display` is set to `block`; otherwise, it's set to `none`. This ensures all windows start hidden since `is open` is initially `false` in `windowConfig`.
2.  **Opening Animation (UseGSAP):** Runs when `isOpen` changes.
    *   If the element is now open, apply `gsap.fromTo` animation:

    ```javascript
    gsap.fromTo(element, 
        // From:
        { scale: 0.8, opacity: 0, y: 40 },
        // To:
        { scale: 1, opacity: 1, y: 0, duration: 0.4, ease: 'power3.out' } 
    );
    ```

#### Dragability Implementation

A second `useGSAP` hook handles dragability, running only once (empty dependency array).

1.  Calls `Draggable.create(element)`.
2.  **Focus Logic:** On `press` (click/start drag), the `focusWindow(windowKey)` function is called. This increases the window's `zIndex`, making it jump to the top.
3.  **Cleanup:** The dragable instance is killed upon unmount (`instance.kill()`) for efficiency.

### 6. Terminal Window

The Terminal is the first window built, showcasing the developer's text stack.

**Structure:** Create folder `windows` inside `source`. Create `terminal.jsx`.

**Exporting:** Export the Terminal wrapped by the HOC:

```javascript
const TerminalWindow = windowWrapper(Terminal, 'terminal');
export default TerminalWindow; 
```

**Terminal Content:**

*   Includes `window-header` div.
*   Displays a simulated command line prompt: `@adrian % show tech stack` (with username in bold).
*   A divider shows `category` and `technologies`.
*   A `UL` maps over `textStack` data (from `constants`), which lists categories (e.g., Front End, Mobile, Styling) and corresponding technologies.
*   Technologies are rendered with a `Check` icon (from Lucid React) and commas placed correctly (checking if index `i` is less than `items.length - 1`).
*   **Footnote:** Simulates terminal output ("5 of 5 stacks loaded successfully 100%") and includes render time using a `Flag` icon.

### 7. Window Controls Component

This reusable component provides the standard macOS close, minimize, and maximize dots.

**Setup:** Create `windowControls.jsx` inside `components`.

**Logic:** Destructures `closeWindow` from `useWindowStore`.

**Structure:** Renders a div with `id="window-controls"`, containing three self-closing divs with classes `close`, `minimize`, and `maximize`.

*   **Close Button:** `onClick` calls `closeWindow(target)` (where `target` is a prop passed to the component, indicating which window to close).
    *   *Crucial Implementation Detail:* The `onClick` must use a callback function (`() => closeWindow(target)`) to prevent immediate execution.

### 8. Safari Window (Developer Blog)

This window functions as a browser displaying blog posts.

**Exporting:** Wrapped by `windowWrapper` with key `Safari`.

**Header Structure:** Mimics Safari header:

*   Renders `WindowControls` (target: `Safari`).
*   Icons: `PanelLeft`, `ChevronLeft`, `ChevronRight` (back/forward).
*   URL Bar: Contains `ShieldHalf` icon, `Search` icon, and an `input` field (`placeholder: search or enter website name`).
*   Right Icons: `Share`, `Plus`, `Copy`.

**Content (`blog` class):**

*   Renders `My developer blog` H2.
*   Maps over `blogPosts` data from `constants`.
    *   *Note:* `blogPosts` contain `ID`, `date`, `title`, `image`, and `link`.
*   Each post is rendered as a `blog-post` div containing an `Image`, `date`, `title`, and an `anchor tag` (`<a>`).
*   The anchor tag links to the external blog post (`href: link`), opens in a new tab (`target="_blank"`), and requires `rel="noopener noreferrer"`.

**Stacking Demonstration:** When two windows (e.g., Terminal and Safari) are opened, dragging one on top of the other demonstrates the Z-index management handled by the `windowWrapper` HOC calling `focusWindow`.

### 9. Resume Window

This window allows users to view and download the developer's resume.

**Exporting:** Wrapped by `windowWrapper` with key `resume`.

**Navbar Integration:** The `resume` link in the Navbar is made functional by adding an `onClick` that calls `openWindow('resume')`.

**Content:**

1.  Renders `WindowControls` (target: `resume`).
2.  Displays `resume.pdf` H2.
3.  Download Link: An anchor tag links to the file (`files/resume.pdf`), includes the `download` attribute, and uses the `Download` icon from Lucid React.

**PDF Rendering:** Uses the `react-pdf` library.

*   **Installation:**

    ```bash
    npm install react-pdf
    ```

*   **Imports:** Must import the PDF worker, annotation layer CSS, and text layer CSS.
*   **Structure:** Wraps the content in `<Document>` and renders `<Page pageNumber={1}>` inside, ensuring `renderTextLayer` and `renderAnnotationLayer` are enabled.

#### Deployment Fix for PDF Worker

On deployment (Hostinger), the `react-pdf` worker URL fails because `node_modules` is not publicly served.

*   **Fix:** The worker source configuration must be modified to use a publicly accessible CDN URL:

    ```javascript
    import { pdfjs } from 'react-pdf';

    pdfjs.globalWorkerOptions.workerSrc = `https://unpkg.com/pdfjs-dist@${pdfjs.version}/build/pdf.worker.min.mjs`;
    ```

### 10. Finder Window

This is the most powerful window, acting as the main interface to switch between work projects, resume, and about sections.

**Exporting:** Wrapped by `windowWrapper` with key `finder`.

**Structure:**

1.  `Window Header` (with controls, target: `finder`).
2.  A main container `div` with `bg-white flex h-full`.
3.  **Sidebar:** Contains two main lists (`favorites` and `work`).

**Sidebar Content Logic:**

1.  Destructure `activeLocation` and `setActiveLocation` from `useLocationStore`.
2.  **Reusable `renderList` function:** Created to reduce duplication. This function accepts a list of `items` and maps over them to render `LI` elements.
3.  **Click Handler:** `LI` `onClick` calls `setActiveLocation(item)`.
4.  **Active State Styling:** Uses the `clsx` package to apply an `active` class if `item.id === activeLocation.id`.
5.  **Rendering Lists:** `renderList` is called twice: once for `favorites` (mapping over `Object.values(locations)` for work, about, resume, trash) and once for `work` (mapping over `locations.work.children` for projects).

**Main Content Area:** A `UL` with `class="content"` maps over `activeLocation.children`.

*   Each child item (project or file) renders an icon image and the item name.
*   `onClick` calls `openItem(item)`.

**`openItem(item)` Logic:** Determines how to handle different file types:

1.  **PDF:** If `item.fileType` is `PDF`, call `openWindow('resume')`.
2.  **Folder:** If `item.kind` is `folder`, call `setActiveLocation(item)` (drilling down into the folder structure).
3.  **External Link:** If `item.fileType` is in `['fig', 'URL']` and it has an `href`, open the link in a new blank window (`window.open(item.href, '_blank')`).
4.  **Internal Viewer:** Otherwise, call `openWindow` using the `item.fileType` as the window key (e.g., `txtFile`, `imageFile`) and pass the item data.

### 11. Text and Image Viewers

These components are internal windows used to preview files selected in the Finder.

#### Text Viewer (`text.jsx`)

Implemented using the Juny AI agent based on a specific prompt.

*   **Key:** `txtFile`.
*   **Logic:** Reads data from `windows.txtFiledData`. If no data, returns null. Destructures `name`, `image`, `subtitle`, and `description`.
*   Renders the window header, name, optional image, and description paragraphs.

#### Image Viewer (`image.jsx`)

Implemented using the Juny AI agent.

*   **Key:** `imageFile`.
*   **Logic:** Renders the window header with the file name and displays the image using the image URL from the window data.

### 12. Contact Window

A simple window for displaying contact information and social links.

**Exporting:** Wrapped by `windowWrapper` with key `contact`.

**Content:**

1.  Renders `WindowControls` (target: `contact`).
2.  Displays an avatar image (`Adrien.jpeg`) with class `w-20 rounded-full`.
3.  A heading (`Let's connect`) and a message.
4.  A `UL` maps over `socials` (from `constants`), rendering cards with background colors, icons, and links.
5.  Each social link uses an anchor tag with `href: link`, `target="_blank"`, and `rel="noopener noreferrer"`.
6.  Includes a visible email address (`jsmastery.pro`).

### 13. Homepage Folders (Desktop Shortcuts)

Folders placed directly on the desktop act as shortcuts to specific Finder locations.

**Component Setup:** Create `home.jsx` inside `components`.

**Structure:** A `<section id="home">` containing a `UL`.

**Mapping Logic:** Maps over `projects` (`locations.work.children`).

*   Each project renders an `LI`.
*   Icon used: `folder.png`.
*   **Positioning:** `clsx` is used to apply dynamic classes derived from `project.windowPosition` defined in `constants` (e.g., `top-15VH`).

**Dragability:**

*   Uses `useGSAP` (empty dependency array).
*   `Draggable.create('folder')` is called to make all elements with class `folder` dragable.

**Opening Logic:** `onClick` calls `handleOpenProjectFinder(project)`.

1.  Destructure `set active location` from `useLocationStore` and `open window` from `useWindowStore`.
2.  Call `setActiveLocation(project)` to set the context.
3.  Call `openWindow('finder')` to display the Finder window showing the project directory.

### 14. Gallery Window (Challenge)

The Gallery component (`photos.jsx`) is provided as a challenge for implementation.

*   **Functionality:** It lists photos and uses the already built `openWindow` functionality to open individual images in the Image Viewer window.
*   **Structure:** It maps over `photoLinks` for the sidebar icons and maps over `gallery` data to display clickable images.

---

## Deployment

Deployment is performed after finalizing the portfolio.

**Steps:**

1.  Push all latest changes to GitHub.
2.  Run the production build command:

    ```bash
    npm run build
    ```
    This creates an optimized build in the `dist` folder.
3.  Log into Hostinger and access the File Manager.
4.  Navigate to `public_html`.
5.  Delete the default PHP file.
6.  Drag and drop **everything** from the local `dist` folder into `public_html`.
7.  Access the domain to view the live portfolio.

*(Note: The deployment failure related to React PDF worker configuration is fixed in Section 9.)*

---

## Career and Learning Resources

The resulting portfolio is not just a project; it is a **career asset** designed to showcase capabilities and make the developer an attractive candidate.

The project teaches that success comes not just from code but from **presentation**—how work feels, moves, and looks.

**JSM Pro / Dev Career Accelerator:**

*   Designed to help developers stay consistent with learning, get real-world results, and feel confident applying for jobs.
*   The **Developer Career Accelerator** bundle includes guidance on career strategy:
    *   Crafting a resume that passes automated bots.
    *   Cover letter guidance.
    *   LinkedIn and GitHub optimization.
    *   Job learning strategies.
    *   Preparation for real interviews.
*   Other courses offered include The Complete Testing Course, Ultimate Next.js Course, and the GSAP course.