# NextJS
## Table of Contents
- [NextJS](#nextjs)
  - [Table of Contents](#table-of-contents)
  - [Introductuion to Next.js \&Features](#introductuion-to-nextjs-features)
  - [create-next-app@latest](#create-next-applatest)
  - [File \&Folder Structure](#file-folder-structure)
  - [Rendering](#rendering)

## Introductuion to Next.js &Features
- React official also recommend to not use base ,but with frameworks
- best framework :Next JS
  - Nasa, Amazon Prime, Nike, Notion etc. use
- One Man Army
- NextJS is upgraded ver of rect, optimised ,simplified
  - Rendering
    - React only do Client Side Rendering
    - Next do both Client and Server 
    - Client Side /Browser Side
    - Server Side render page on web server ,and give fully rendered website on browser
      - SEO inc
      - SEO WebCrawlers can read website as its pre-rendered
      - organic advantage
      - Enhanced UX
      - Credibility &Trustworthiness
      - Competitive advantage /Ranking
      - ONline presense
  - Routing
    - React import Router package and code routes
    - NextJS has built in routing and dont need routes coding
      - NextJS uses FILE BASED ROUTING SYSTEM
        - i.e. routing is handled by file system
      - No Need for external packs or complex config
  - Fullstack capability by serverless APIs
    - build and deploy serverless APIs
    - no need of server
    - no need of backend
    - no need of express
    - no need of scaling
    - JUST MAKE route.js
    - See Proj LifeLore => its fullstack
  - makes less code by thousands and time by sec to ms
  - 10x efficent
  - Hot MOdule Reloading
  - Automatic Code Splitting
    - a technique that breaks  down a large codebase into smaller chunks,to load when needed
    - results  in faster page loads
    - its manual at REACT, use lazy suspence extra hard af shit
    - Nextjs split pages into chunks and load chunk when click to it
  - Automate Config and process 
    - Linting
    - Formatting
    - Compiling
    - Bundling
    - Minifying
    - Deploying
    - .etc
  - letting us to do actual code
  - IT'S STILL REACT
    - build on top of react
    - simplify react
    - so users not time waste building from  scratch

## create-next-app@latest
- Create New dir
- Open in Terminal
```bash
npx create-next-app@latest ./
```
or
```bash
npx create-next-app@latest dir-name
```
- Typescript Yes
- ESLint No
- Tailwind CSS Yess
- src/ dir Yes,for more organised code and let all main code be in src ,not sit and mix with config files
- app/ dir YEs,next js use app dir for pages and they made it stable
  - react server comp
  - nested routes and layouts
  - simple data fetching
  - streaming and suspence
  - built in seo support
- import alias custom no rn
  - they are shortcuts for refer file

## File &Folder Structure
- app/
  - layout.js
    - main entry point of proj
    - all comp wrap in it as children 
    - common layout
    - customise metadata
    - customise html
    - customise font
    - share /constant throughout application
  - page.js
    - hompage route
  - global.css
    - global css style of entire app
    - tailwind imports to utilize tailwind in app
- public
  - all static data

## Rendering
- Next.js :within app folder all react components are by default server side SSR
  - UX ,SEO OP
- for making component client side CSR ,write it at top of code
    ```js
    "use client";
    ```
- dynamic ;0