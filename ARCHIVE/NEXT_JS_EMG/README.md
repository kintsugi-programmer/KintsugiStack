# NextJS
- don't dare to speedrun ;long gradual great learning research journey

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
  - [Next 15\& React 19](#next-15-react-19)
- [LifeLore notebook](#lifelore-notebook)
  - [Files](#files)
    - [layout.jsx](#layoutjsx)
    - [components/Feed/page.jsx](#componentsfeedpagejsx)
  - [components/Nav.jsx](#componentsnavjsx)
    - [components/Provider.jsx](#componentsproviderjsx)
    - [google cloud cred generation](#google-cloud-cred-generation)
    - [.env](#env)
    - [utils/database.js](#utilsdatabasejs)
    - [mongodb atlas](#mongodb-atlas)
    - [models/user.js](#modelsuserjs)
    - [next.config.js](#nextconfigjs)
  - [create-prompt](#create-prompt)
    - [create-prompt/page.jsx](#create-promptpagejsx)
    - [components/Form.jsx](#componentsformjsx)
    - [app/api/prompt/new/route.js](#appapipromptnewroutejs)
    - [models/prompt.js](#modelspromptjs)
  - [Feed](#feed)
    - [components/Feed.jsx](#componentsfeedjsx)
    - [app/api/prompt/route.js](#appapipromptroutejs)
    - [components/PromptCard.jsx](#componentspromptcardjsx)
  - [Profile](#profile)
    - [app/profile/page.jsx](#appprofilepagejsx)
    - [api/users/\[id\]/posts/route.js](#apiusersidpostsroutejs)
    - [components/Profile.jsx](#componentsprofilejsx)
  - [Others APIs](#others-apis)
    - [api/prompt/\[id\]/route.js](#apipromptidroutejs)
  - [Update Prompt](#update-prompt)
    - [app/update-prompt/page.jsx](#appupdate-promptpagejsx)
  - [TODO](#todo)
  - [Deploy](#deploy)
    - [Est. Git \& GitHub](#est-git--github)
    - [Est. Vercel](#est-vercel)

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

## Next 15& React 19
- turbopack: new build script 1ms in package.json
```tsx
  "scripts": {
    "dev": "next dev --turbopack",
```
- install all
- tailwind and es6 extension vsc
- package.json
to ext dependencies use new versions of reac5t and not fall in react 18
```tsx
  "packageManager": "npm@10.5.2",
  "overrides": {
    "react": "$react",
    "react-dom": "$react-dom",
    "next": "$next"
  },
```

# LifeLore notebook
- Google Auth.
- Fullstack 
- Next.js 13
- next auth
- CRUD App
- MongDB Cluster
- Framework v/s Library
  - Framework makes lives much easier but you have to follow its rules
- dependencies dev install 
  ```
  npm install mongodb moongoose next-auth bcrypt
  ```
## Files
```
rm -r app
rm -r public
mkdir app models components utils styles public #  create new files
touch .env #secure keys
```
- tailwind.config.js
- styles/globals.css 
- public/assets/
- ES+7 extension vsc
  - no need to put 'import 'react'  from 'react';' in every file
  - app/page.jsx
  - rafce
    - Home
### layout.jsx
```js
import "@styles/globals.css";

import Nav from "@components/Nav";
import Provider from "@components/Provider";

export const metadata = {
  title: "Promptopia",
  description: "Discover & Share AI Prompts",
};

const RootLayout = ({ children }) => (
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
);

export default RootLayout;
```
  - rafce
  - import '@styles/globals.css'
  - set metadata
  - RootLayout
    - html
      - body
        - div
        - main
          - children
  - export default RootLayout
  - npm run dev
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
//       "@/*": ["./*"] // remove this / for the path to work,to simply map it form root path of the project
//     }
//   }
// }
```
### components/Feed/page.jsx
```js
import Feed from "@components/Feed";

const Home = () => (
  <section className='w-full flex-center flex-col'>
    <h1 className='head_text text-center'>
      Discover & Share
      <br className='max-md:hidden' />
      <span className='orange_gradient text-center'> AI-Powered Prompts</span>
    </h1>
    <p className='desc text-center'>
      Promptopia is an open-source AI prompting tool for modern world to
      discover, create and share creative prompts
    </p>

    <Feed />
  </section>
);

export default Home;

```
- cd components
  - touch Feed.jsx Form.jsx Nav.jsx Profile.jsx PromptCard.jsx Provider.jsx
  - rafce with their Names eg: Form
## components/Nav.jsx
```jsx
"use client"; // useEffect is client component by default
// so use use cleint directive

import Link from "next/link";
import Image from "next/image";
import { useEffect, useState } from "react"; //states
import { signIn, signOut, useSession, getProviders } from "next-auth/react"; //auth op

const Nav = () => {
  const { data: session } = useSession();

  const [providers, setProviders] = useState(null);
  const [toggleDropdown, setToggleDropdown] = useState(false);

  useEffect(() => {
    (async () => {
           {/* taking providers from nextauth */}

      const res = await getProviders();

      setProviders(res);
    })();
  }, []);

  return (
     {/*  */}
    {/* Nav Starts */}
    <nav className='flex-between w-full mb-16 pt-3'>
      {/* Logo */}
      <Link href='/' className='flex gap-2 flex-center'>
        <Image
          src='/assets/images/logo.svg'
          alt='logo'
          width={30}
          height={30}
          className='object-contain'
        />
        <p className='logo_text'>Promptopia</p>
      </Link>



      {/* Desktop Navigation */}
      <div className='sm:flex hidden'>
        {session?.user ? (
          <div className='flex gap-3 md:gap-5'>
            <Link href='/create-prompt' className='black_btn'>
              Create Post
            </Link>

            <button type='button' onClick={signOut} className='outline_btn'>
              Sign Out
            </button>

            <Link href='/profile'>
              <Image
                src={session?.user.image}
                width={37}
                height={37}
                className='rounded-full'
                alt='profile'
              />
            </Link>
          </div>
        ) : (
          <>
            {providers &&
              Object.values(providers).map((provider) => (
                <button
                  type='button'
                  key={provider.name}
                  onClick={() => {
                    signIn(provider.id);
                  }}
                  className='black_btn'
                >
                  Sign in
                </button>
              ))}
          </>
        )}
      </div>

      {/* Mobile Navigation */}
      <div className='sm:hidden flex relative'>
        {session?.user ? (
          {/* UserLoggedIn */}
          <div className='flex'>
            <Image
              src={session?.user.image}
              width={37}
              height={37}
              className='rounded-full'
              alt='profile'
              onClick={() => setToggleDropdown(!toggleDropdown)}
            />

            {toggleDropdown && (
              {/* Toogle dropdown true */}
              <div className='dropdown'>
                <Link
                  href='/profile'
                  className='dropdown_link'
                  onClick={() => setToggleDropdown(false)}
                >
                {/* onClick={() => setToggleDropdown(false)} Resets the navigation */}
                  My Profile
                </Link>
                <Link
                  href='/create-prompt'
                  className='dropdown_link'
                  onClick={() => setToggleDropdown(false)}
                >
                  Create Prompt
                </Link>
                <button
                  type='button'
                  onClick={() => {
                    setToggleDropdown(false);
                    signOut();
                  }}
                  className='mt-5 w-full black_btn'
                >
                  Sign Out
                </button>
              </div>
            )}
          </div>
        ) : (
          <>     {/* if we ahve access of providers ,so get its acces and map with sign in */}

            {providers &&
              Object.values(providers).map((provider) => (
                <button
                  type='button'
                  key={provider.name}
                  onClick={() => {
                    signIn(provider.id);
                  }}
                  className='black_btn'
                >
                  Sign in
                </button>
              ))}
          </>
        )}
      </div>
    </nav>
  );
};

export default Nav;

``` 
  - general nav log in log out check
```jsx
      {/* General Template Navigation */}
      <div className='sm:flex hidden'>
        {session?.user ? (
          <div className='flex gap-3 md:gap-5'>
               {/* User Login success  */}

          </div>
        ) : (
          <>      {/* USer Login Filure */}

          </>
        )}
      </div>
``` 
  - sign in map providers
```jsx 
          <>     {/* if we ahve access of providers ,so get its acces and map with sign in */}

            {providers &&
              Object.values(providers).map((provider) => (
                <button
                  type='button'
                  key={provider.name}
                  onClick={() => {
                    signIn(provider.id);
                  }}
                  className='black_btn'
                >
                  Sign in
                </button>
              ))}
          </>
``` 
  - use can use UserLoggedIn a var to play with frontend first then make backend session management
  - dummy auth 
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


### components/Provider.jsx
```jsx
'use client'; //Browser capabilities

import { SessionProvider } from "next-auth/react";

const Provider = ({ children, session }) => (
  <SessionProvider session={session}>
    {children}
  </SessionProvider>
)

export default Provider;

```
  - it will be used in layout as we are wrapping everything under providers
- app/api/auth/[...nextauth]/route.js
  - dynamic file
  - dynamic api routes/backendpoints
  - [...nextauth]/ correct api dynamic folder
  - general 
```js
import NextAuth from 'next-auth';
import GoogleProvider from 'next-auth/providers/google';

import User from '@models/user';
import { connectToDB } from '@utils/database';

const handler = NextAuth({
  providers: [
    GoogleProvider({
      clientId: '',
      clientSecret: '',
    })
  ],
  async session({session}){},
  async signIn({profile}){},
})

//next format:
export { handler as GET ,handler as POST};

```
  - MAIN code
```js
import NextAuth from 'next-auth';
import GoogleProvider from 'next-auth/providers/google';

import User from '@models/user';
import { connectToDB } from '@utils/database';

const handler = NextAuth({
  providers: [
    GoogleProvider({
      clientId: process.env.GOOGLE_ID,
      clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    })
  ],
  callbacks: {
    async session({ session }) {
      // store the user id from MongoDB to session
      const sessionUser = await User.findOne({ email: session.user.email });
      session.user.id = sessionUser._id.toString();

      return session;
    },
    async signIn({ account, profile, user, credentials }) {
      try {
        await connectToDB();

        // check if user already exists
        const userExists = await User.findOne({ email: profile.email });

        // if not, create a new document and save user in MongoDB
        if (!userExists) {
          await User.create({
            email: profile.email,
            username: profile.name.replace(" ", "").toLowerCase(),
            image: profile.picture,
          });
        }

        return true
      } catch (error) {
        console.log("Error checking if user exists: ", error.message);
        return false
      }
    },
  }
})

export { handler as GET, handler as POST }

```
### google cloud cred generation
  - console.cloud.google.com
  - create new project
    - project name
    - create
  - select project
  - nav side menu
    - api& services 
      - OAuth consent screen
        - click create
        - app name
        - user email
        - domains 
          - http://localhost:3000
        - app pic
        - dev email
      - credentials
        - create cred
          - oauth cleint id
            - app type 
              - web app
            - OruginURIs 
              - http://localhost:3000
            - Redirect URIs 
              - http://localhost:3000
              - http://localhost:3000/api/auth/callback/google
                - http://localhost:3000/api/auth/callback/:provider
                - getpost api by nextauth provider state
                - here :provider is google 
          - create  (it will take 5mins)
### .env
  - add cred
```js
GOOGLE_ID=
GOOGLE_CLIENT_SECRET=
MONGODB_URI= dont forget to replace <password> with actual password under specific user
NEXTAUTH_URL=http://localhost:3000  
//(_change them with deployed link)
NEXTAUTH_URL_INTERNAL=http://localhost:3000
//(_change them with deployed link)
NEXTAUTH_SECRET=your-secret
// A random string to hash tokens
```
- route.js cont.
  - route.js part added
```js
GoogleProvider({
      clientId: process.env.GOOGLE_ID,
      clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    })
```
  - check console,it will show client id and secret re occur
  - every nextJS route is serverless route
    - i.e. each route func is lambda func open up only when called 
### utils/database.js
```js
import mongoose from 'mongoose';

let isConnected = false; // track the connection

export const connectToDB = async () => {
  // async func


  mongoose.set('strictQuery', true);
  // it sets mongoose options else it will throw a warning every time it runs in console

  if(isConnected) {
    // check if it's already connected
    console.log('MongoDB is already connected');
    return;
    // stop i from running
  }

  // if not connected, try to connect
  try {
    await mongoose.connect(process.env.MONGODB_URI, {
      // connect to the MongoDB URI
      dbName: "share_prompt",
      // use the share_prompt database
      useNewUrlParser: true,
      // use the new URL parser
      useUnifiedTopology: true,
      // use the new server discovery and monitoring engine
    })

    isConnected = true;
    console.log('MongoDB connected')
    // if it's successful, log it
  } 
  // if it fails, catch the error
  catch (error) {
    console.log(error);
  }
}
```
### mongodb atlas
  - online cloud storage to create databases
  - db to connect users
  -  [mongodb.com/atlas](https://www.mongodb.com/atlas)
  - try free
    - signup or sign in
  - create cluster
    - Free forever! Your M0 cluster is ideal for experimenting in a limited sandbox. You can upgrade to a production cluster anytime.
  - data base access
    - add user and password
  - network access
    - add ip addresss of your pc and 
    - 0.0.0.0/0 to accessible from anywhere machine
  - connect
    - driver
    - copy MONGODB_URI
  - .env : new cred. `MONGODB_URI=`
    - dont forget to replace <password> with actual password under specific func
- route.js cont.
```js
import NextAuth from 'next-auth';
import GoogleProvider from 'next-auth/providers/google';


// db
// uses model
import User from '@models/user';
import { connectToDB } from '@utils/database';

const handler = NextAuth({
  providers: [
    GoogleProvider({
      clientId: process.env.GOOGLE_ID,
      clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    })
  ],
  callbacks: {
    async session({ session }) {
      //db
      // store the user id from MongoDB to session
      // findone func.
      const sessionUser = await User.findOne({ email: session.user.email });

      session.user.id = sessionUser._id.toString();

      return session;
    },
    async signIn({ account, profile, user, credentials }) {
      try {
        await connectToDB();
        // db

        // check if user already exists
        const userExists = await User.findOne({ email: profile.email });

        // if not, create a new document and save user in MongoDB
        if (!userExists) {
          await User.create({
            email: profile.email,
            username: profile.name.replace(" ", "").toLowerCase(),
            image: profile.picture,
          });
        }
        // username: profile.name.replace(" ", "").toLowerCase(),  // remove spaces and convert to lowercase

        return true
      } catch (error) {
        console.log("Error checking if user exists: ", error.message);
        return false
      }
    },
  }
})

export { handler as GET, handler as POST }
```
### models/user.js
  - code
```js
import { Schema, model, models } from 'mongoose'; //import libs

// schema
const UserSchema = new Schema({
// custom datatype
// email
// var :{condition: [thing if true, thing if false]},
  email: {
    type: String,
    unique: [true, 'Email already exists!'],
    required: [true, 'Email is required!'],
  },

// wow combination
// username
  username: {
    type: String,
    required: [true, 'Username is required!'],
    match: [/^(?=.{8,20}$)(?![_.])(?!.*[_.]{2})[a-zA-Z0-9._]+(?<![_.])$/, "Username invalid, it should contain 8-20 alphanumeric letters and be unique!"]
  },
  image: {
    type: String,
  }
});

const User = models.User || model("User", UserSchema);
// check if model exist ||  create new model(if not exist)
// do 1 || do 3 if 1 gives false

export default User;
```
  - explain

1. **Mongoose `models` Object:**
   - The `models` object is provided by the Mongoose library and stores all registered models.

2. **Reusing Existing Models:**
   - If a model named `"User"` already exists in the `models` object, it assigns that existing model to the `User` variable.
   - This prevents redefining the model and ensures the existing model is reused.

3. **Creating a New Model:**
   - If the `"User"` model does not exist in the `models` object, the Mongoose `model` function is called to create a new model.
   - The newly created model is then assigned to the `User` variable.
- done
- next.auth.js.org , see docs
- but as we need to config callback url (OAuth Only) and Deplot to production
- .env : make nextauth var
```js
NEXTAUTH_URL=http://localhost:3000  
//(_change them with deployed link)
NEXTAUTH_URL_INTERNAL=http://localhost:3000
//(_change them with deployed link)
NEXTAUTH_SECRET=your-secret
// A random string to hash tokens
```
- NEXTAUTH_SECRET=your-secret
  - // A random string to hash tokens
  -  nextauth secret is random code 
  - [Openssl online terminal](https://www.cryptool.org/en/cto/openssl/)
  - shell command
```bash
openssl rand -base64 32
```
- run in terminal
```bash
npm run dev
```
### next.config.js
  - custom
  - has 
    - appDir
    - ServerExternal Packages
    - top level await
      - to avoid error in build process
  - code
```js
/** @type {import('next').NextConfig} */
const nextConfig = {
  experimental: {
    appDir: true,
    serverComponentsExternalPackages: ["mongoose"],
  },
  images: {
    domains: ['lh3.googleusercontent.com'],
  },
  webpack(config) {
    config.experiments = {
      ...config.experiments,
      topLevelAwait: true,
    }
    return config
  }
}

module.exports = nextConfig
```
  - it aviod  errors and compile the code and run easily when `npm run dev`
- components/Nav.jsx
  - use useSession to get user data
  - earlier `const isUserLoggedIn = true; //test phase` & `isUserLoggedIn ?`
  - now
    - `const { data:session } = useSession` // use session library
    - `session?.user` // check if user exists
  - alert for debugging
```js
{alert(session?.user)}
{alert(providers)}
```
  - code
```jsx
"use client";

import Link from "next/link";
import Image from "next/image";
import { useEffect, useState } from "react";
import { signIn, signOut, useSession, getProviders } from "next-auth/react";

const Nav = () => {
  const { data: session } = useSession();

  const [providers, setProviders] = useState(null);
  const [toggleDropdown, setToggleDropdown] = useState(false);

  useEffect(() => {
    (async () => {
      const res = await getProviders();
      setProviders(res);
    })();
  }, []);

  return (
    <nav className='flex-between w-full mb-16 pt-3'>
      <Link href='/' className='flex gap-2 flex-center'>
        <Image
          src='/assets/images/logo.svg'
          alt='logo'
          width={30}
          height={30}
          className='object-contain'
        />
        <p className='logo_text'>Promptopia</p>
      </Link>

      {/* Desktop Navigation */}
      <div className='sm:flex hidden'>
        {session?.user ? (
          <div className='flex gap-3 md:gap-5'>
            <Link href='/create-prompt' className='black_btn'>
              Create Post
            </Link>

            <button type='button' onClick={signOut} className='outline_btn'>
              Sign Out
            </button>

            <Link href='/profile'>
              <Image
                src={session?.user.image}
                width={37}
                height={37}
                className='rounded-full'
                alt='profile'
              />
            </Link>
          </div>
        ) : (
          <>
            {providers &&
              Object.values(providers).map((provider) => (
                <button
                  type='button'
                  key={provider.name}
                  onClick={() => {
                    signIn(provider.id);
                  }}
                  className='black_btn'
                >
                  Sign in
                </button>
              ))}
          </>
        )}
      </div>

      {/* Mobile Navigation */}
      <div className='sm:hidden flex relative'>
        {session?.user ? (
          <div className='flex'>
            <Image
              src={session?.user.image}
              width={37}
              height={37}
              className='rounded-full'
              alt='profile'
              onClick={() => setToggleDropdown(!toggleDropdown)}
            />

            {toggleDropdown && (
              <div className='dropdown'>
                <Link
                  href='/profile'
                  className='dropdown_link'
                  onClick={() => setToggleDropdown(false)}
                >
                  My Profile
                </Link>
                <Link
                  href='/create-prompt'
                  className='dropdown_link'
                  onClick={() => setToggleDropdown(false)}
                >
                  Create Prompt
                </Link>
                <button
                  type='button'
                  onClick={() => {
                    setToggleDropdown(false);
                    signOut();
                  }}
                  className='mt-5 w-full black_btn'
                >
                  Sign Out
                </button>
              </div>
            )}
          </div>
        ) : (
          <>
            {providers &&
              Object.values(providers).map((provider) => (
                <button
                  type='button'
                  key={provider.name}
                  onClick={() => {
                    signIn(provider.id);
                  }}
                  className='black_btn'
                >
                  Sign in
                </button>
              ))}
          </>
        )}
      </div>
    </nav>
  );
};

export default Nav;


```
- Framwork rule of redirect
  - http://localhost:3000/api/auth/callback/google
    - http://localhost:3000/api/auth/callback/:provider
    - getpost api by nextauth provider state
    - here :provider is google 
- Profile Image
```js
<Image
src={session?.user.image}
width={37}
height={37}
className='rounded-full'
alt='profile'
onClick={() => setToggleDropdown(!toggleDropdown)}
/>
```
- Next API Auth Route Done
- callbacks
  -  ? 
  - connects mongodb db after provider auth stuff...
  - each prompts attach to diff users
## create-prompt
### create-prompt/page.jsx
- cd app
- we are using next13 tuts
- mkdir create-prompt
- cd create-prompt
  - touch page.jsx
    - rafce
    - CreatePrompt
- see code, see directives and then logic
```jsx
"use client";

import { useState } from "react";
import { useSession } from "next-auth/react";
import { useRouter } from "next/navigation";

import Form from "@components/Form";

const CreatePrompt = () => {
  const router = useRouter();
  const { data: session } = useSession();

  const [submitting, setIsSubmitting] = useState(false);
  const [post, setPost] = useState({ prompt: "", tag: "" });

  const createPrompt = async (e) => {
    e.preventDefault();
    {/*avoid defeault browser reaction when submit the form => reload. in react/next we need native feel ,thus reloads to be least as possible*/}
    setIsSubmitting(true);
    

    try {
      {/*checks*/}
      const response = await fetch("/api/prompt/new", {
        method: "POST",
        body: JSON.stringify({
          prompt: post.prompt,
          userId: session?.user.id,
          tag: post.tag,
        }),
      });

      if (response.ok) {
        router.push("/");
      }
    } catch (error) {
      console.log(error);
    } finally {
      setIsSubmitting(false);
    }
  };

  return (
    <Form
      type='Create'
      post={post}
      setPost={setPost}
      submitting={submitting}
      handleSubmit={createPrompt}
    />
  );
};

export default CreatePrompt;

```
- general code
```jsx

"use client";

import { useState } from "react";
import { useSession } from "next-auth/react";
import { useRouter } from "next/navigation";

import Form from "@components/Form";

const CreatePrompt = () => {

  const [submitting, setIsSubmitting] = useState(false);

  const [post, setPost] = useState({ prompt: "", tag: "" });
  const createPrompt = async (e) => {};

return (
    <Form
      type='Create'
      post={post}
      setPost={setPost}
      submitting={submitting}
      handleSubmit={createPrompt}
    />
  );
};

export default CreatePrompt;

```
### components/Form.jsx
- code
```jsx
import Link from "next/link";

const Form = ({ type, post, setPost, submitting, handleSubmit }) => {
  return (
    <section className='w-full max-w-full flex-start flex-col'>
      <h1 className='head_text text-left'>
        <span className='blue_gradient'>{type} Post</span>
      </h1>
      <p className='desc text-left max-w-md'>
        {type} and share amazing prompts with the world, and let your
        imagination run wild with any AI-powered platform
      </p>

      <form
        onSubmit={handleSubmit}
        className='mt-10 w-full max-w-2xl flex flex-col gap-7 glassmorphism'
      >
        <label>
          <span className='font-satoshi font-semibold text-base text-gray-700'>
            Your AI Prompt
          </span>

          <textarea
            value={post.prompt}
            onChange={(e) => setPost({ ...post, prompt: e.target.value })}
            placeholder='Write your post here'
            required
            className='form_textarea '
          />
        </label>

        <label>
          <span className='font-satoshi font-semibold text-base text-gray-700'>
            Field of Prompt{" "}
            <span className='font-normal'>
              (#product, #webdevelopment, #idea, etc.)
            </span>
          </span>
          <input
            value={post.tag}
            onChange={(e) => setPost({ ...post, tag: e.target.value })}
            type='text'
            placeholder='#Tag'
            required
            className='form_input'
          />
        </label>

        <div className='flex-end mx-3 mb-5 gap-4'>
          <Link href='/' className='text-gray-500 text-sm'>
            Cancel
          </Link>

          <button
            type='submit'
            disabled={submitting}
            className='px-5 py-1.5 text-sm bg-primary-orange rounded-full text-white'
          >
            {submitting ? `${type}ing...` : type} 
            {/*Create / edit*/}
          </button>
        </div>
      </form>
    </section>
  );
};

export default Form;

```

- general
```jsx

import Link from "next/link";

const Form = ({ type, post, setPost, submitting, handleSubmit }) => {
  return (
    <div> Form </div>
  )
}
export default Form;
```
### app/api/prompt/new/route.js
- now frontend is done and ready to make backend and api server ,unlike old traditional code of server,nextjs make it ease ,create api like this
```bash
cd app
mkdir api
cd api
mkdir prompt
cd prompt
mkdir new
cd new
touch route.js
```
- immidate extract all data ;0
- lAMBDA func
```js
// app/api/prompt/new/route.js
import Prompt from "@models/prompt";
import { connectToDB } from "@utils/database";

export const POST = async (request) => {
    const { userId, prompt, tag } = await request.json();

    try {
        await connectToDB();

        const newPrompt = new Prompt({ creator: userId, prompt, tag });

        await newPrompt.save();

        return new Response(JSON.stringify(newPrompt), { status: 201 })
    
    } catch (error) {
        return new Response("Failed to create a new prompt", { status: 500 });
    }
}
```
### models/prompt.js
```js
import { Schema, model, models } from 'mongoose';

const PromptSchema = new Schema({
  creator: {
    type: Schema.Types.ObjectId,
    ref: 'User',
  },
  prompt: {
    type: String,
    required: [true, 'Prompt is required.'],
  },
  tag: {
    type: String,
    required: [true, 'Tag is required.'],
  }
});

const Prompt = models.Prompt || model('Prompt', PromptSchema);

export default Prompt;
```
- db is having 1-many rel
## Feed
### components/Feed.jsx
```jsx
"use client";

import { useState, useEffect } from "react";

import PromptCard from "./PromptCard";

const PromptCardList = ({ data, handleTagClick }) => {
  return (
    <div className='mt-16 prompt_layout'>
      {data.map((post) => (
        <PromptCard
          key={post._id}
          post={post}
          handleTagClick={handleTagClick}
        />
      ))}
    </div>
  );
};

const Feed = () => {
  const [allPosts, setAllPosts] = useState([]);

  // Search states
  const [searchText, setSearchText] = useState("");
  const [searchTimeout, setSearchTimeout] = useState(null);
  const [searchedResults, setSearchedResults] = useState([]);

  const fetchPosts = async () => {
    const response = await fetch("/api/prompt");
    const data = await response.json();

    setAllPosts(data);
  };


  // Fetch
  useEffect(() => {
    fetchPosts();
  }, []);

  const filterPrompts = (searchtext) => {
    const regex = new RegExp(searchtext, "i"); // 'i' flag for case-insensitive search
    return allPosts.filter(
      (item) =>
        regex.test(item.creator.username) ||
        regex.test(item.tag) ||
        regex.test(item.prompt)
    );
  };

  const handleSearchChange = (e) => {
    clearTimeout(searchTimeout);
    setSearchText(e.target.value);

    // debounce method
    setSearchTimeout(
      setTimeout(() => {
        const searchResult = filterPrompts(e.target.value);
        setSearchedResults(searchResult);
      }, 500)
    );
  };

  const handleTagClick = (tagName) => {
    setSearchText(tagName);

    const searchResult = filterPrompts(tagName);
    setSearchedResults(searchResult);
  };

  return (
    <section className='feed'>
      <form className='relative w-full flex-center'>
        <input
          type='text'
          placeholder='Search for a tag or a username'
          value={searchText}
          onChange={handleSearchChange}
          required
          className='search_input peer'
        />
      </form>

      {/* All Prompts */}
      {searchText ? (
        <PromptCardList
          data={searchedResults}
          handleTagClick={handleTagClick}
        />
      ) : (
        <PromptCardList data={allPosts} handleTagClick={handleTagClick} />
      )}
    </section>
  );
};

export default Feed;

```

### app/api/prompt/route.js
```js
import Prompt from "@models/prompt";
import { connectToDB } from "@utils/database";

export const GET = async (request) => {
    try {
        await connectToDB()

        const prompts = await Prompt.find({}).populate('creator')

        return new Response(JSON.stringify(prompts), { status: 200 })
    } catch (error) {
        return new Response("Failed to fetch all prompts", { status: 500 })
    }
} 
```

### components/PromptCard.jsx
```js
"use client";

import { useState } from "react";
import Image from "next/image";
import { useSession } from "next-auth/react";
import { usePathname, useRouter } from "next/navigation";

const PromptCard = ({ post, handleEdit, handleDelete, handleTagClick }) => {
  const { data: session } = useSession();
  const pathName = usePathname();
  const router = useRouter();

  const [copied, setCopied] = useState("");

  const handleProfileClick = () => {
    console.log(post);

    if (post.creator._id === session?.user.id) return router.push("/profile");

    router.push(`/profile/${post.creator._id}?name=${post.creator.username}`);
  };

  const handleCopy = () => {
    setCopied(post.prompt);
    navigator.clipboard.writeText(post.prompt);
    setTimeout(() => setCopied(false), 3000);
  };

  return (
    <div className='prompt_card'>
      <div className='flex justify-between items-start gap-5'>
        <div
          className='flex-1 flex justify-start items-center gap-3 cursor-pointer'
          onClick={handleProfileClick}
        >
          <Image
            src={post.creator.image}
            alt='user_image'
            width={40}
            height={40}
            className='rounded-full object-contain'
          />

          <div className='flex flex-col'>
            <h3 className='font-satoshi font-semibold text-gray-900'>
              {post.creator.username}
            </h3>
            <p className='font-inter text-sm text-gray-500'>
              {post.creator.email}
            </p>
          </div>
        </div>

        <div className='copy_btn' onClick={handleCopy}>
          <Image
            src={
              copied === post.prompt
                ? "/assets/icons/tick.svg"
                : "/assets/icons/copy.svg"
            }
            alt={copied === post.prompt ? "tick_icon" : "copy_icon"}
            width={12}
            height={12}
          />
        </div>
      </div>

      <p className='my-4 font-satoshi text-sm text-gray-700'>{post.prompt}</p>
      <p
        className='font-inter text-sm blue_gradient cursor-pointer'
        onClick={() => handleTagClick && handleTagClick(post.tag)}
      >
        #{post.tag}
      </p>

      {session?.user.id === post.creator._id && pathName === "/profile" && (
        <div className='mt-5 flex-center gap-4 border-t border-gray-100 pt-3'>
          <p
            className='font-inter text-sm green_gradient cursor-pointer'
            onClick={handleEdit}
          >
            Edit
          </p>
          <p
            className='font-inter text-sm orange_gradient cursor-pointer'
            onClick={handleDelete}
          >
            Delete
          </p>
        </div>
      )}
    </div>
  );
};

export default PromptCard;

```
## Profile
### app/profile/page.jsx
```jsx
"use client";

import { useSession } from "next-auth/react";
import { useEffect, useState } from "react";
import { useRouter } from "next/navigation";

import Profile from "@components/Profile";

const MyProfile = () => {
  const router = useRouter();
  const { data: session } = useSession();

  const [myPosts, setMyPosts] = useState([]);

  useEffect(() => {
    const fetchPosts = async () => {
      const response = await fetch(`/api/users/${session?.user.id}/posts`);
      const data = await response.json();

      setMyPosts(data);
    };

    if (session?.user.id) fetchPosts();
  }, [session?.user.id]);

  const handleEdit = (post) => {
    router.push(`/update-prompt?id=${post._id}`);
  };

  const handleDelete = async (post) => {
    const hasConfirmed = confirm(
      "Are you sure you want to delete this prompt?"
    );

    if (hasConfirmed) {
      try {
        await fetch(`/api/prompt/${post._id.toString()}`, {
          method: "DELETE",
        });

        const filteredPosts = myPosts.filter((item) => item._id !== post._id);

        setMyPosts(filteredPosts);
      } catch (error) {
        console.log(error);
      }
    }
  };

  return (
    <Profile
      name='My'
      desc='Welcome to your personalized profile page. Share your exceptional prompts and inspire others with the power of your imagination'
      data={myPosts}
      handleEdit={handleEdit}
      handleDelete={handleDelete}
    />
  );
};

export default MyProfile;

```
### api/users/[id]/posts/route.js
```js

import Prompt from "@models/prompt";
import { connectToDB } from "@utils/database";

export const GET = async (request, { params }) => {
    try {
        await connectToDB()

        const prompts = await Prompt.find({ creator: params.id }).populate("creator")

        return new Response(JSON.stringify(prompts), { status: 200 })
    } catch (error) {
        return new Response("Failed to fetch prompts created by user", { status: 500 })
    }
} 

```
### components/Profile.jsx
```jsx
import PromptCard from "./PromptCard";

const Profile = ({ name, desc, data, handleEdit, handleDelete }) => {
  return (
    <section className='w-full'>
      <h1 className='head_text text-left'>
        <span className='blue_gradient'>{name} Profile</span>
      </h1>
      <p className='desc text-left'>{desc}</p>

      <div className='mt-10 prompt_layout'>
        {data.map((post) => (
          <PromptCard
            key={post._id}
            post={post}
            handleEdit={() => handleEdit && handleEdit(post)}
            handleDelete={() => handleDelete && handleDelete(post)}
          />
        ))}
      </div>
    </section>
  );
};

export default Profile;
```
- next13 was buggy 1yr ago

## Others APIs
### api/prompt/[id]/route.js
- good prac for other websites too.
```js
import Prompt from "@models/prompt";
import { connectToDB } from "@utils/database";
// Read
export const GET = async (request, { params }) => {
    try {
        await connectToDB()

        const prompt = await Prompt.findById(params.id).populate("creator")
        if (!prompt) return new Response("Prompt Not Found", { status: 404 });

        return new Response(JSON.stringify(prompt), { status: 200 })

    } catch (error) {
        return new Response("Internal Server Error", { status: 500 });
    }
}
// Update
export const PATCH = async (request, { params }) => {
    const { prompt, tag } = await request.json();

    try {
        await connectToDB();

        // Find the existing prompt by ID
        const existingPrompt = await Prompt.findById(params.id);

        if (!existingPrompt) {
            return new Response("Prompt not found", { status: 404 });
        }

        // Update the prompt with new data
        existingPrompt.prompt = prompt;
        existingPrompt.tag = tag;

        await existingPrompt.save();

        return new Response("Successfully updated the Prompts", { status: 200 });
    } catch (error) {
        return new Response("Error Updating Prompt", { status: 500 });
    }
};
// Delete
export const DELETE = async (request, { params }) => {
    try {
        await connectToDB();

        // Find the prompt by ID and remove it
        await Prompt.findByIdAndRemove(params.id);

        return new Response("Prompt deleted successfully", { status: 200 });
    } catch (error) {
        return new Response("Error deleting prompt", { status: 500 });
    }
};

```
## Update Prompt
### app/update-prompt/page.jsx

```jsx
"use client";

import { useEffect, useState } from "react";
import { useRouter, useSearchParams } from "next/navigation";

import Form from "@components/Form";

const UpdatePrompt = () => {
  const router = useRouter();
  const searchParams = useSearchParams();
  const promptId = searchParams.get("id");

  const [post, setPost] = useState({ prompt: "", tag: "", });
  const [submitting, setIsSubmitting] = useState(false);

  useEffect(() => {
    const getPromptDetails = async () => {
      const response = await fetch(`/api/prompt/${promptId}`);
      const data = await response.json();

      setPost({
        prompt: data.prompt,
        tag: data.tag,
      });
    };

    if (promptId) getPromptDetails();
  }, [promptId]);

  const updatePrompt = async (e) => {
    e.preventDefault();
    setIsSubmitting(true);

    if (!promptId) return alert("Missing PromptId!");

    try {
      const response = await fetch(`/api/prompt/${promptId}`, {
        method: "PATCH",
        body: JSON.stringify({
          prompt: post.prompt,
          tag: post.tag,
        }),
      });

      if (response.ok) {
        router.push("/");
      }
    } catch (error) {
      console.log(error);
    } finally {
      setIsSubmitting(false);
    }
  };

  return (
    <Form
      type='Edit'
      post={post}
      setPost={setPost}
      submitting={submitting}
      handleSubmit={updatePrompt}
    />
  );
};

export default UpdatePrompt;

```
- for debugging see terminal and browser console

## TODO
- implement search
  - search by prompt 
  - search by tag
  - search by username
- implement click on tag
- implement view other profiles
- Share work tagging him

## Deploy 
### Est. Git & GitHub
- put .env in .gitignore
  - it's secret
- est. github
- cd project root folder
```bash
git init
git add .
git commit  -m "first commit"
git branch -M main
git remote add origin https://github.com/username/repository.git
git push -u origin main
```
- done
- more?
### Est. Vercel
- Vercel Created NextJS
- Efficient Deploy
- Login/signup
- Add New
- Import Git repository
- Setup Root Dir (gen /)
- Setup environment variables here or after deployment
- redeploy if having error
- make sure to name components like ThisConvention
- REPLACE http://localhost:3000 to  https://stuff.vercel.app in EVERYWHERE , .env & cloudconsole & mongodb atlas etc.