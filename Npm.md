# NPM

Certainly! NPM (Node Package Manager) is a package manager for JavaScript and the world's largest software registry. It's used primarily for managing and sharing packages of reusable code, as well as for managing project dependencies. Here's a basic guide to get you started with NPM:

1. **Installation**: NPM comes bundled with Node.js, so if you have Node.js installed, you automatically get NPM. You can verify the installation by running:

    ```
    npm --version
    ```

2. **Initialize a new project**: To use NPM in your project, you need to initialize a `package.json` file. Navigate to your project directory in the terminal and run:

    ```
    npm init
    ```

    This command will prompt you to fill in some details about your project (like name, version, description, entry point, etc.). You can also skip this step by using `npm init -y` to accept all default values.

3. **Install packages**: You can install packages locally in your project or globally on your system. To install a package locally (for use in your project), use:

    ```
    npm install <package-name>
    ```

    For example:

    ```
    npm install lodash
    ```

    To install a package globally (for use across all projects), add the `-g` flag:

    ```
    npm install -g <package-name>
    ```

4. **Use packages**: Once installed, you can start using the packages in your project. For example, if you installed lodash, you can import it into your JavaScript file:

    ```javascript
    const _ = require('lodash');
    ```

5. **Save dependencies**: When you install packages using `npm install`, NPM adds them to your `package.json` file under the `dependencies` section. This keeps track of the packages your project depends on. If you want to save a package as a development dependency (e.g., for testing or building your project), you can use the `--save-dev` flag:

    ```
    npm install <package-name> --save-dev
    ```

6. **Update packages**: To update packages to their latest versions, you can use:

    ```
    npm update
    ```

    Or to update a specific package:

    ```
    npm update <package-name>
    ```

7. **Uninstall packages**: If you no longer need a package, you can uninstall it using:

    ```
    npm uninstall <package-name>
    ```

8. **Search for packages**: You can search for packages in the NPM registry using:

    ```
    npm search <keyword>
    ```

    For example:

    ```
    npm search express
    ```

These are some of the basic commands and concepts to get you started with NPM. As you continue working with JavaScript projects, you'll likely discover more advanced features and nuances of NPM.

## Install
Sure! Here's how you can install Node.js and npm on your system:

1. **Using Official Installer**:

   - Go to the [Node.js website](https://nodejs.org/).
   - Download the installer for your operating system (Windows, macOS, or Linux).
   - Run the installer and follow the installation instructions.
   - Once installed, you can verify the installation by opening a terminal (Command Prompt on Windows, Terminal on macOS or Linux) and typing:

     ```
     node --version
     npm --version
     ```

   This will display the installed version of Node.js and npm, respectively.

2. **Using Package Managers**:

   - **On macOS or Linux (using package manager like Homebrew)**:
     ```
     brew install node
     ```

   - **On Linux (using apt-get)**:
     ```
     sudo apt-get update
     sudo apt-get install nodejs npm
     ```

   - **On Windows (using Chocolatey)**:
     First, install Chocolatey by following the instructions on the [Chocolatey website](https://chocolatey.org/install).
     Then, run:
     ```
     choco install nodejs
     ```

3. **Verify Installation**:

   After installation, verify Node.js and npm are correctly installed by opening a terminal and running:
   ```
   node --version
   npm --version
   ```

If both commands display the installed versions without any errors, then Node.js and npm have been successfully installed on your system.

That's it! You now have Node.js and npm installed and ready to use on your machine.

## Uninstall

Uninstalling Node.js and npm depends on how you initially installed them.

**1. Uninstalling Node.js and npm on Windows:**

- If you installed Node.js and npm using the official installer or Chocolatey, you can uninstall them via the Control Panel:

  - Open the Control Panel.
  - Go to "Programs" or "Programs and Features".
  - Find "Node.js" in the list of installed programs, select it, and click "Uninstall".

- If you installed Node.js and npm using Chocolatey, you can also uninstall them via Chocolatey:

  ```
  choco uninstall nodejs
  ```

**2. Uninstalling Node.js and npm on macOS or Linux:**

- If you installed Node.js and npm using a package manager like Homebrew or apt-get, you can uninstall them via the same package manager:

  - **Using Homebrew on macOS**:
    ```
    brew uninstall node
    ```

  - **Using apt-get on Linux**:
    ```
    sudo apt-get remove nodejs npm
    ```

**3. Manual Uninstallation:**

- If you installed Node.js and npm manually (e.g., by downloading binaries or source files), you'll need to remove the files and directories associated with Node.js and npm manually. These typically include the Node.js binary, npm binary, and any related files and directories.

After uninstalling, you may want to verify that Node.js and npm are no longer present on your system by opening a terminal and running:

```
node --version
npm --version
```

If the commands return an error or indicate that the programs are not found, then Node.js and npm have been successfully uninstalled.

Remember to also remove any global packages or dependencies you installed via npm, as they may no longer be needed and could take up space on your system. You can remove global npm packages using:

```
npm uninstall -g <package-name>
```

That's it! You have successfully uninstalled Node.js and npm from your system.