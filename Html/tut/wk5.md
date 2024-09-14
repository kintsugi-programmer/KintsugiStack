# Week 5: JavaScript and the Browser

#### **Objective:**
Understand how JavaScript interacts with the browser, including handling browser events, working with the browser API, and managing local storage.

---

### **Day 1: Browser Events and the Event Loop**

**Browser Events:**
- **Definition:** Events are actions that occur in the browser, such as clicks, key presses, or page loads.
- **Common Events:**
  - **Click:** `click`
  - **Mouseover:** `mouseover`
  - **Keypress:** `keypress`
  - **Load:** `load`

**Event Listeners:**
- **Syntax:**
  ```javascript
  document.getElementById('myElement').addEventListener('click', function() {
    console.log('Element clicked!');
  });
  ```

**Event Object:**
- **Properties:**
  - **`event.target`:** The element that triggered the event.
  - **`event.type`:** The type of the event (e.g., 'click').
- **Example:**
  ```javascript
  document.getElementById('myButton').addEventListener('click', function(event) {
    console.log('Button clicked:', event.target);
  });
  ```

**The Event Loop:**
- **Definition:** The event loop is a mechanism that allows JavaScript to handle multiple operations concurrently.
- **Concepts:**
  - **Call Stack:** Keeps track of function calls.
  - **Callback Queue:** Stores functions to be executed after the current script has finished.

**Activities:**
- Demonstrate various browser events and how to handle them.
- Explain the event loop with simple examples.

**Assignment:**
- Create a JavaScript application that responds to different browser events, such as button clicks, mouse movements, and form submissions.

---

### **Day 2: Working with the Browser API**

**Window Object:**
- **Properties and Methods:**
  - **`window.alert()`:** Displays an alert box.
    ```javascript
    window.alert('Hello, World!');
    ```
  - **`window.confirm()`:** Displays a confirmation dialog.
    ```javascript
    let result = window.confirm('Are you sure?');
    ```
  - **`window.prompt()`:** Displays a prompt dialog.
    ```javascript
    let name = window.prompt('What is your name?');
    ```

**Navigator Object:**
- **Properties:**
  - **`navigator.userAgent`:** Returns the user agent string of the browser.
    ```javascript
    console.log(navigator.userAgent);
    ```

**Location Object:**
- **Properties and Methods:**
  - **`window.location.href`:** Gets or sets the current URL.
    ```javascript
    console.log(window.location.href);
    ```
  - **`window.location.reload()`:** Reloads the current page.
    ```javascript
    window.location.reload();
    ```

**Activities:**
- Demonstrate using the window, navigator, and location objects.
- Practice accessing and modifying browser properties using JavaScript.

**Assignment:**
- Create a webpage that interacts with the browser API to show alerts, prompts, and navigational changes.

---

### **Day 3: Local Storage and Session Storage**

**Local Storage:**
- **Definition:** Local storage allows you to store data that persists across browser sessions.
- **Methods:**
  - **`localStorage.setItem(key, value)`:** Stores a value.
    ```javascript
    localStorage.setItem('username', 'Siddhant');
    ```
  - **`localStorage.getItem(key)`:** Retrieves a value.
    ```javascript
    let username = localStorage.getItem('username');
    ```
  - **`localStorage.removeItem(key)`:** Removes a value.
    ```javascript
    localStorage.removeItem('username');
    ```
  - **`localStorage.clear()`:** Clears all stored data.
    ```javascript
    localStorage.clear();
    ```

**Session Storage:**
- **Definition:** Session storage is similar to local storage but only lasts for the duration of the page session.
- **Methods:**
  - **`sessionStorage.setItem(key, value)`:** Stores a value.
    ```javascript
    sessionStorage.setItem('sessionData', 'example');
    ```
  - **`sessionStorage.getItem(key)`:** Retrieves a value.
    ```javascript
    let sessionData = sessionStorage.getItem('sessionData');
    ```

**Activities:**
- Demonstrate using local storage and session storage with examples.
- Practice storing, retrieving, and removing data from local and session storage.

**Assignment:**
- Create a web application that uses local storage to save user preferences or session storage to manage temporary data.

---

### **Day 4: Asynchronous JavaScript (Promises and Fetch API)**

**Promises:**
- **Definition:** Promises represent the result of an asynchronous operation.
- **Syntax:**
  ```javascript
  let promise = new Promise((resolve, reject) => {
    // Asynchronous operation
    if (/* success */) {
      resolve('Success!');
    } else {
      reject('Error!');
    }
  });

  promise.then(result => {
    console.log(result);
  }).catch(error => {
    console.log(error);
  });
  ```

**Fetch API:**
- **Definition:** The Fetch API provides a way to make network requests.
- **Basic Usage:**
  ```javascript
  fetch('https://api.example.com/data')
    .then(response => response.json())
    .then(data => console.log(data))
    .catch(error => console.log('Error:', error));
  ```

**Activities:**
- Demonstrate using Promises and the Fetch API to handle asynchronous operations.
- Practice making network requests and handling responses with the Fetch API.

**Assignment:**
- Build a JavaScript application that fetches data from a public API and displays it on a webpage.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **Browser Events:** Handling various events and using the event loop.
- **Browser API:** Working with the Window, Navigator, and Location objects.
- **Local and Session Storage:** Storing and managing data.
- **Asynchronous JavaScript:** Using Promises and the Fetch API.

**Mini-Project: Interactive Web Application**
- **Requirements:**
  - Create a web application that integrates various JavaScript concepts covered during the week.
  - Include event handling, interactions with the browser API, local storage or session storage, and asynchronous operations using the Fetch API.

**Sample Project Idea: Weather Dashboard**
- **Features:**
  - Fetch weather data from a public API.
  - Display current weather information and forecasts.
  - Use local storage to save user preferences (e.g., location).
  - Handle user interactions and display notifications.

**Resources:**
- **MDN Web Docs:** [Browser Compatibility](https://developer.mozilla.org/en-US/docs/Web/HTML/Browser_environment_modification)
- **MDN Web Docs:** [Local Storage](https://developer.mozilla.org/en-US/docs/Web/API/Window/localStorage)
- **MDN Web Docs:** [Fetch API](https://developer.mozilla.org/en-US/docs/Web/API/Fetch_API)

---

