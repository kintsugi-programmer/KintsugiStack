# NextJS
## Table of Contents
- [NextJS](#nextjs)
  - [Table of Contents](#table-of-contents)
  - [Introductuion to Next.js \&Features](#introductuion-to-nextjs-features)
  - [create-next-app@latest](#create-next-applatest)
  - [File \&Folder Structure](#file-folder-structure)
  - [Rendering](#rendering)
  - [Routing](#routing)
  - [Data Fetching](#data-fetching)
  - [API Endpoints](#api-endpoints)
  - [SEO \& Metadata](#seo--metadata)
  - [Install NODEJS and NPM](#install-nodejs-and-npm)
- [LifeLore](#lifelore)
  - [bcrypt](#bcrypt)
  - [mongodb](#mongodb)
  - [mongoose](#mongoose)
  - [next-auth](#next-auth)
  - [Link](#link)
  - [Image](#image)
  - [useState ,useEffect](#usestate-useeffect)
  - [next-auth/react's signIn ,signOut ,useSession,getProviders](#next-authreacts-signin-signout-usesessiongetproviders)
  - [Ui testing with dummy auth](#ui-testing-with-dummy-auth)

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
    - to share UI components b/w routes
    - customise metadata
    - customise html
    - customise font
    - share /constant throughout application
    - you can make layout of each subpages
  - loading.js
    - to show loading animation
  - error.js
    - error handling
    - can be for subpages
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
- Stage management is handled CSR
- Sensative info SSR
- CUstom hooks SSR
- Interactivity CSR
- SEE DOCS FOR TABLE OF USE
- BASICALLY USE SSR TILL ERROR,AT ERROR USE CSR ;0
  - Let NExt.js use its thing

## Routing
- make Folders and file inside it as `page.js` only [page name only]
- Folder name = route name
- Folder dir = route path
- Nested routing EXISTS
- Without Next ,we have to write all files routes at top of app.js
- RAFCE : React App Function Component Template, name component anything
```js
rafce
```
- Result
```js
# app/page1/page.jsx
import React from 'react'

const Page = () => {
  return (
    <div>Page</div>
  )
}

export default Page
```
- Dynamic routing : `/posts/:postId`
- Nested  routing : `/posts/:postId/comments/:commentId`
- React :
```js
<Router>
  <Routes>
    <Route path= '/' element={<Home/>} />
    <Route path= 'posts' element={<Posts/>} >
      <Route path= 'new' element=  {<NewPost/>} /> {/*Nested route*/}
      <Route path=":postId" element={<Post />} />{/*Dynamic route*/}
      </Route>
  </Routes>
</Router>

```
-  Next.js
```
/posts
/new/page.js
/[postid]/page.js rafce {postId}
page.js
layout.js
```  

```js
# /[postid]/page.js 
import React from 'react'

const Page = () => {
  return (
    <div>{postId}</div>
  )
}

export default Page
```
## Data Fetching  
- ways  
  - SSR
    - Server side rendering
    -  cache ,no store : to refetch every single time
  - SSG
    - Static side generation
    - remove cache ,no store : automatic ssg,and fetch data and then cache it
  - ISR
    - Incremental Side Generation
    - next : {revalidate:10} ,data will cache, but will refetch after specified sec

## API Endpoints
- serverless feature of next js
- no need of backend server to get api
- Trad. React
  - import express
  - app.get
  - execute code
  - return users
  - listen to certain port 
  - to be live on server
- Next.js
  - cover all middleware,parsing,auth checks,serverless
  - helps in scaling
  - way 1: File Based
  - way 2: route.js
    - route.js can't be nested ,store all routes in api folder 
    - api/posts/route.js
- Next.js supports following HTTP Methods
  - GET : 
  - POST :
  - PUT :
  - PATCH :
  - DELETE :
  - HEAD :
  - OPTIONS :
- eg:
```js
#route.js
export async funtion GET(request) {
  return {
    status: 200,
    body: { message: 'Hello World' }
    }
}

export  async function POST(request) {
  return {
    status: 201,
    body: { message: 'Hello World' }
  }
}

export  async function PUT(request) {
  return  {
    status: 200,
    body: { message: 'Hello World' }
    }
    }
```

```js
#route.js
export async  function GET(request) {
  const users = [
    {id:1,name:'Sid'},
    {id:2,name:'Rahul'}
    ]
  
  return new Response (JSON.stringify(users))
}

```
## SEO & Metadata
- Next.js supports SEO & metadata
- Ways
  - way1 :Static Metadata
    ```js
    export const metadata = {title:'Home',};
    ```
  - way2 :Dynamic Metadata
    - for sub dynamic products
    ```js
    export async function generateMetadata({params,searchParams}) {
      const product = await getProduct(params.id);
      return {
        title: product.title,
        description: product.description,
        };
    }
    ```
- Output : `<head><title> dynamic/static name </title></head>`

## Install NODEJS and NPM
- [Official Website](https://nodejs.org/en)
- Linux Mint
```bash
# installs nvm (Node Version Manager)
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.40.0/install.sh | bash

# download and install Node.js (you may need to restart the terminal)
nvm install 20

# verifies the right Node.js version is in the environment
node -v # should print `v20.17.0`

# verifies the right npm version is in the environment
npm -v # should print `10.8.2`
```
- Win
```batch
# installs fnm (Fast Node Manager)
winget install Schniz.fnm

# configure fnm environment
fnm env --use-on-cd | Out-String | Invoke-Expression

# download and install Node.js
fnm use --install-if-missing 20

# verifies the right Node.js version is in the environment
node -v # should print `v20.17.0`

# verifies the right npm version is in the environment
npm -v # should print `10.8.2`
```
# LifeLore
- Google Auth.
- Fullstack 
- Next.js 13
- CRUD App
- dependencies dev install 
  ```
  npm install mongodb moongoose next-auth bcrypt
  ```
- ES+7 extension vsc
- no need to put 'import 'react'  from 'react';' in every file
- layout.jsx
- '@styles/global.css'
- jsconfig.json
```js
{
  "compilerOptions": {
    "paths": {
      "@*": ["./*"]
    }
  }
}


// {
//   "compilerOptions": {
//     "paths": {
//       "@/*": ["./*"] // remove this / for the path to work
//     }
//   }
// }
```


## bcrypt
- hash passwords

## mongodb
- database

## mongoose
- manage db

## next-auth
- authentication


## Link
```js
import Link from 'next/link';

<Link href='/' className='flex gap-2 flex-center'>
        <p className='logo_text'>LifeLore</p>
      </Link>

```

## Image
```js
import Image from 'next/image';

        <Image
          src='/assets/images/logo.svg'
          alt='lifelore logo'
          width={30}
          height={30}
          className='object-contain'
        />
```

## useState ,useEffect
- useEffect only works in a Client component

## next-auth/react's signIn ,signOut ,useSession,getProviders
- google auth tech
- browser capabilities, thus SSG
```js
// Provider.jsx
"use client"

import { SessionProvider } from "next-auth/react";
//using google auth ;)
const Provider = ({children,session}) => {
  return (
    <SessionProvider session ={session}
    >{children}</SessionProvider>
  )
}

export default Provider
```
- layout.jsx : where we sandwich Provider under body ,before main
```js
// import React from 'react'
//no path needed
// we call navbar to use it everywhere in the app

import '@styles/globals.css';
import Nav from '@components/Nav';
import Feed from '@components/Feed';
import Provider from '@components/Provider';

export const metadata = {
    title: 'LifeLore - Share and Discover Life Lessons',
    description: 'LifeLore is a platform for sharing and discovering life values, lessons, and advice across various fields. Join our community-driven repository of knowledge and experiences.',
    keywords: 'LifeLore, life lessons, advice, community, Next.js, MongoDB, NextAuth, TailwindCSS',
    author: 'Siddhant Bali',
    og: {
      title: 'LifeLore - Share and Discover Life Lessons',
      description: 'Explore and share life lessons on LifeLore. Connect with a community dedicated to learning and growth.',
      image: 'https://example.com/path-to-your-image.jpg',
      url: 'https://yourlifestyleplatform.com',
      type: 'website'
    },
    twitter: {
      card: 'summary_large_image',
      title: 'LifeLore - Share and Discover Life Lessons',
      description: 'Explore and share life lessons on LifeLore. Join our community to learn and grow together.',
      image: 'https://example.com/path-to-your-image.jpg',
      site: '@yourtwitterhandle'
    }
  };
  
const RootLayout = ({children}) => {
  return (
    <html lang='en'>
        <body>
          <Provider>

          
            <div className='main'>
                <div className='gradient' />
            </div>

            <main className='app'>
                <Nav />
              {children}
            </main>
          </Provider>
        </body>

    </html>
  )
}

export default RootLayout;
```
- nextjs apis; backend endpoints





## Ui testing with dummy auth 

```js
"use client"; // Add this directive to indicate that this is a client component

import Link from 'next/link';
import Image from 'next/image';
import { useState, useEffect } from 'react';
import { signIn, signOut, useSession, getProviders } from 'next-auth/react';
import React from 'react';
import Provider from './Provider';

const Nav = () => {
  // sign in using google and next auth 
  const [providers,setProviders] = useState(null);
  useEffect(() => {
    const setProviders = async () => {
      const response = await getProviders();
      setProviders(response);
    };
    setProviders();
  }, []);

  const[toggleDropDown,setToggleDropDown]=useState(false);




  const isUserLoggedIn = true; //test phase 
  return (
    <nav className='flex-between w-full mb-16 pt-3'>
      <Link href='/' className='flex gap-2 flex-center'>
        <Image
          src='/assets/images/logo.svg'
          alt='lifelore logo'
          width={30}
          height={30}
          className='object-contain'
        />
        <p className='logo_text'>LifeLore</p>
      </Link>

      {/* Desktop Nav */}
      <div className='sm:flex hidden'>
      {isUserLoggedIn ? (
        <div className='flex gap-3 md:gap-5'>
          <Link className='black_btn' href="/create-exp" >Create Post</Link>
          <button type="button" className='outline_btn' onClick={signOut}>Sign Out</button>
          <Image src="/assets/images/logo.svg" width={37} height={37} className='rounded-full' alt='profile'></Image>
        </div>

        ):(
          <>
          {/* signin */}
          {providers &&
          Object.values(providers).map(
            (provider)=>
            (
              <button
                type='button'
                key={provider.name}
                className='black_btn'
                onClick={()=>
                  signIn(provider.id)
                }>
                  Sign In
                
              </button>
            )
          )}
          </>
        )}
      </div>

      {/* Mobile Nav */}
      <div className="sm:hidden flex relative">
        {isUserLoggedIn?(<div className='flex'>
          {/* setToggleDropDown(!toggleDropDown) is wrong as its leads to unexpected results 
          setToggleDropDown((prev)=>(!prev) is good*/}
          <Image src="/assets/images/logo.svg" width={37} height={37} className='rounded-full' alt='profile' onClick={()=>setToggleDropDown((prev)=>(!prev))}></Image>
          {toggleDropDown && (
        <div className='dropdown'>
          <Link 
          href='/profile'
          className='dropdown_link'
          onClick={()=>(setToggleDropDown(false))}
          >
            My Profile
          </Link>
          <Link 
          href='/create-exp'
          className='dropdown_link'
          onClick={()=>(setToggleDropDown(false))}
          >
            Create Advice
          </Link>
          <button
                type='button'
                onClick={()=>{
                  setToggleDropDown(false);
                  signOut();}
                }
                className='mt-5 w-full black_btn'>
                  Sign Out
                
              </button>

        </div>)}
        </div>
        
      
      ):(
          <>
          {/* signin */}
          {providers &&
          Object.values(providers).map(
            (provider)=>
            (
              <button
                type='button'
                key={provider.name}
                className='black_btn'
                onClick={()=>
                  signIn(provider.id)
                }>
                  Sign In
                
              </button>
            )
          )}
          
        </>)}

      </div>

      </nav>
  );
}

export default Nav;

```
- `  const isUserLoggedIn = true; //test phase `
- ` onClick = {() => {}} ` empty fragment
- `onClick= {()=> setToggleDropdown(!toggleDropdown)` , react don't recommend this. Instead use `onClick= {()=> setToggleDropdown( (prev)  => !prev)}`



48.14

