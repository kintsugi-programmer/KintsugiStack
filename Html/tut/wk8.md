### Week 8: Building and Deploying React Applications

#### **Objective:**
Learn how to build, deploy, and maintain a React application. This includes optimizing the build process, deploying the application to various platforms, and understanding maintenance practices.

---

### **Day 1: Building a React Application**

**Build Process:**
- **Definition:** The build process involves compiling and bundling your React application into static files that can be deployed to a web server.
- **Using Create React App:**
  ```bash
  npm run build
  ```
  - **Output:** This command generates a `build` directory with optimized production-ready files.

**Understanding Build Artifacts:**
- **Files Generated:**
  - `index.html` – The main HTML file.
  - `static/js/` – JavaScript bundles.
  - `static/css/` – CSS bundles.
  - `static/media/` – Media assets like images and fonts.

**Activities:**
- Build a React application using Create React App.
- Explore the contents of the `build` directory.

**Assignment:**
- Build a React application and review the generated build artifacts.

---

### **Day 2: Deploying to Static Hosting Platforms**

**Popular Static Hosting Platforms:**
- **Netlify:**
  - **Deployment:** Drag-and-drop the `build` folder or connect a Git repository.
  - **URL:** [Netlify Deployment Guide](https://docs.netlify.com/site-deploys/create-deploys/)

- **Vercel:**
  - **Deployment:** Connect a Git repository and deploy.
  - **URL:** [Vercel Deployment Guide](https://vercel.com/docs)

- **GitHub Pages:**
  - **Deployment:** Use the `gh-pages` package to deploy.
  - **Command:**
    ```bash
    npm install --save-dev gh-pages
    ```
    Add the following to `package.json`:
    ```json
    "homepage": "https://<username>.github.io/<repository-name>",
    "scripts": {
      "predeploy": "npm run build",
      "deploy": "gh-pages -d build"
    }
    ```
    Then run:
    ```bash
    npm run deploy
    ```

**Activities:**
- Deploy a React application to Netlify, Vercel, or GitHub Pages.
- Verify the deployment and test the live application.

**Assignment:**
- Deploy a React application to a chosen static hosting platform and share the URL.

---

### **Day 3: Backend Integration and API Handling**

**Integrating with a Backend:**
- **Fetching Data:**
  - **Example:**
    ```javascript
    import React, { useEffect, useState } from 'react';

    function DataFetchingComponent() {
      const [data, setData] = useState(null);

      useEffect(() => {
        fetch('https://api.example.com/data')
          .then(response => response.json())
          .then(data => setData(data))
          .catch(error => console.error('Error fetching data:', error));
      }, []);

      return (
        <div>
          {data ? <pre>{JSON.stringify(data, null, 2)}</pre> : <p>Loading...</p>}
        </div>
      );
    }

    export default DataFetchingComponent;
    ```

**Handling API Requests:**
- **Using Axios:**
  ```bash
  npm install axios
  ```
  ```javascript
  import axios from 'axios';

  function fetchData() {
    axios.get('https://api.example.com/data')
      .then(response => console.log(response.data))
      .catch(error => console.error('Error fetching data:', error));
  }
  ```

**Activities:**
- Integrate a React application with a public API.
- Handle API responses and update the UI based on the data.

**Assignment:**
- Create a React component that fetches data from a public API and displays it. Use Axios or the Fetch API for the request.

---

### **Day 4: Continuous Integration and Deployment (CI/CD)**

**CI/CD Concepts:**
- **Definition:** CI/CD involves automating the build, test, and deployment processes to improve the efficiency of software development and delivery.

**Using GitHub Actions:**
- **Setup CI/CD Pipeline:**
  - Create a `.github/workflows` directory in your repository.
  - Add a configuration file, e.g., `main.yml`:
    ```yaml
    name: Build and Deploy

    on:
      push:
        branches:
          - main

    jobs:
      build:
        runs-on: ubuntu-latest

        steps:
        - name: Checkout code
          uses: actions/checkout@v2

        - name: Set up Node.js
          uses: actions/setup-node@v2
          with:
            node-version: '14'

        - name: Install dependencies
          run: npm install

        - name: Build
          run: npm run build

        - name: Deploy
          run: npm run deploy
          env:
            GH_TOKEN: ${{ secrets.GITHUB_TOKEN }}
    ```

**Activities:**
- Set up a GitHub Actions workflow for a React project.
- Test the CI/CD pipeline by pushing changes to the repository.

**Assignment:**
- Implement a CI/CD pipeline for a React project using GitHub Actions. Ensure the pipeline builds and deploys the application automatically.

---

### **Day 5: Maintenance and Monitoring**

**Application Maintenance:**
- **Updating Dependencies:**
  ```bash
  npm outdated
  npm update
  ```

- **Error Handling:**
  - Implement error boundaries in React:
    ```javascript
    import React, { Component } from 'react';

    class ErrorBoundary extends Component {
      constructor(props) {
        super(props);
        this.state = { hasError: false };
      }

      static getDerivedStateFromError() {
        return { hasError: true };
      }

      componentDidCatch(error, info) {
        console.error('Error occurred:', error, info);
      }

      render() {
        if (this.state.hasError) {
          return <h1>Something went wrong.</h1>;
        }
        return this.props.children;
      }
    }

    export default ErrorBoundary;
    ```

**Monitoring Tools:**
- **Sentry:** For error tracking and monitoring.
  - **URL:** [Sentry for React](https://docs.sentry.io/platforms/react/)

- **Google Analytics:** For tracking user interactions and performance.
  - **URL:** [Google Analytics React Integration](https://github.com/react-ga/react-ga)

**Activities:**
- Implement error boundaries in a React application.
- Set up basic monitoring tools for tracking errors and performance.

**Assignment:**
- Integrate monitoring tools into a React application and implement error handling. Ensure the application is set up for maintenance and monitoring.

---

### **Resources:**

- **React Documentation:** [Building and Deploying](https://reactjs.org/docs/production-build.html)
- **Netlify Documentation:** [Deploying React Apps](https://docs.netlify.com/configure-builds/get-started/)
- **Vercel Documentation:** [Deploying React Apps](https://vercel.com/docs/concepts/deployments)
- **GitHub Pages Documentation:** [Deploying React Apps](https://create-react-app.dev/docs/deployment/#github-pages)
- **React Documentation:** [Context API](https://reactjs.org/docs/context.html)
- **GitHub Actions Documentation:** [Getting Started with GitHub Actions](https://docs.github.com/en/actions/learn-github-actions/introduction-to-github-actions)

---
