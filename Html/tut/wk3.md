# Week 3: Introduction to JavaScript

#### **Objective:**
Learn the basics of JavaScript to add interactivity to webpages.

---

### **Day 1: Introduction to JavaScript**

**What is JavaScript?**
- **Definition:** JavaScript is a programming language used to create interactive effects within web browsers.
- **Purpose:** Adds interactivity and dynamic content to webpages.

**Basic JavaScript Syntax:**
- **Script Tag:**
  ```html
  <script>
    // JavaScript code goes here
  </script>
  ```
- **Basic Example:**
  ```html
  <script>
    console.log("Hello, World!");
  </script>
  ```
  - **`console.log()`:** Outputs messages to the browser console.

**JavaScript in HTML:**
- **Inline JavaScript:**
  ```html
  <button onclick="alert('Button clicked!')">Click Me</button>
  ```
- **External JavaScript File:**
  ```html
  <script src="script.js"></script>
  ```

**Activities:**
- Introduction lecture or video on JavaScript basics.
- Hands-on activity to include JavaScript in an HTML file and use `console.log()`.

**Assignment:**
- Create a basic HTML file with embedded JavaScript that outputs messages to the console.

---

### **Day 2: Variables, Data Types, and Operators**

**Variables:**
- **Declaration:**
  ```javascript
  let name = "Siddhant";
  const age = 20;
  ```
  - **`let`:** Allows variable value to be changed.
  - **`const`:** Declares a constant variable that cannot be changed.

**Data Types:**
- **Primitive Data Types:**
  - **String:** `"Hello"`
  - **Number:** `42`
  - **Boolean:** `true` or `false`
  - **Null:** `null`
  - **Undefined:** `undefined`

**Operators:**
- **Arithmetic Operators:** `+`, `-`, `*`, `/`, `%`
  ```javascript
  let sum = 5 + 3; // 8
  ```
- **Comparison Operators:** `==`, `===`, `!=`, `!==`, `>`, `<`, `>=`, `<=`
  ```javascript
  let isEqual = (5 == 5); // true
  ```
- **Logical Operators:** `&&`, `||`, `!`
  ```javascript
  let result = (5 > 3) && (2 < 4); // true
  ```

**Activities:**
- Demonstrate variables, data types, and operators with simple examples.
- Practice creating and manipulating variables.

**Assignment:**
- Write a JavaScript program that performs arithmetic operations and displays results.

---

### **Day 3: Functions and Control Flow**

**Functions:**
- **Definition:** Blocks of code designed to perform a particular task.
- **Syntax:**
  ```javascript
  function greet(name) {
    return `Hello, ${name}!`;
  }
  ```
  - **Function Declaration:** Defines a function.
  - **Parameters:** Variables passed into the function.
  - **Return Value:** The result of the function.

**Control Flow:**
- **Conditional Statements:**
  - **`if` Statement:**
    ```javascript
    if (age > 18) {
      console.log("Adult");
    }
    ```
  - **`else if` and `else`:**
    ```javascript
    if (age > 18) {
      console.log("Adult");
    } else {
      console.log("Minor");
    }
    ```
- **Loops:**
  - **`for` Loop:**
    ```javascript
    for (let i = 0; i < 5; i++) {
      console.log(i);
    }
    ```
  - **`while` Loop:**
    ```javascript
    let i = 0;
    while (i < 5) {
      console.log(i);
      i++;
    }
    ```

**Activities:**
- Create functions to perform tasks and control flow examples.
- Implement basic loops and conditional logic.

**Assignment:**
- Write a JavaScript program with functions, conditional statements, and loops.

---

### **Day 4: DOM Manipulation**

**What is DOM?**
- **Definition:** DOM (Document Object Model) is a representation of the HTML document structure that JavaScript can manipulate.

**Basic DOM Manipulation:**
- **Selecting Elements:**
  ```javascript
  let element = document.getElementById('myElement');
  let elements = document.querySelectorAll('.myClass');
  ```
- **Modifying Content:**
  ```javascript
  element.innerHTML = "New Content";
  ```
- **Changing Styles:**
  ```javascript
  element.style.color = "blue";
  ```

**Event Handling:**
- **Adding Event Listeners:**
  ```javascript
  document.getElementById('myButton').addEventListener('click', function() {
    alert('Button clicked!');
  });
  ```

**Activities:**
- Demonstrate selecting and manipulating DOM elements.
- Practice adding event listeners and handling user interactions.

**Assignment:**
- Create a simple interactive webpage that uses DOM manipulation and event handling.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **JavaScript Basics:** Variables, data types, operators.
- **Functions and Control Flow:** Creating and using functions, conditional logic, and loops.
- **DOM Manipulation:** Selecting elements, modifying content, and handling events.

**Mini-Project: Interactive Webpage**
- **Requirements:**
  - Create a webpage with interactive elements such as buttons, forms, and dynamic content.
  - Use JavaScript to manipulate the DOM and handle events.

**Sample Interactive Webpage:**
```html
<!DOCTYPE html>
<html>
  <head>
    <title>Interactive Webpage</title>
    <style>
      #myButton {
        padding: 10px 20px;
        font-size: 16px;
      }
    </style>
  </head>
  <body>
    <h1>Welcome to My Interactive Webpage</h1>
    <button id="myButton">Click Me</button>
    <p id="message"></p>

    <script>
      document.getElementById('myButton').addEventListener('click', function() {
        document.getElementById('message').innerHTML = "Button was clicked!";
      });
    </script>
  </body>
</html>
```

**Resources:**
- **MDN Web Docs:** [JavaScript Guide](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide)
- **W3Schools:** [JavaScript Tutorial](https://www.w3schools.com/js/)
- **Books:** *"Eloquent JavaScript"* by Marijn Haverbeke

---

