### Week 4: Advanced JavaScript Concepts

#### **Objective:**
Dive deeper into JavaScript concepts, including arrays, objects, and more advanced functions.

---

### **Day 1: Arrays**

**What is an Array?**
- **Definition:** Arrays are used to store multiple values in a single variable.
- **Syntax:**
  ```javascript
  let fruits = ["apple", "banana", "cherry"];
  ```

**Array Methods:**
- **Accessing Elements:**
  ```javascript
  let firstFruit = fruits[0]; // "apple"
  ```
- **Adding Elements:**
  - **`push()`:** Adds an element to the end.
    ```javascript
    fruits.push("orange");
    ```
  - **`unshift()`:** Adds an element to the beginning.
    ```javascript
    fruits.unshift("strawberry");
    ```
- **Removing Elements:**
  - **`pop()`:** Removes the last element.
    ```javascript
    fruits.pop();
    ```
  - **`shift()`:** Removes the first element.
    ```javascript
    fruits.shift();
    ```
- **Looping Through Arrays:**
  - **`for` Loop:**
    ```javascript
    for (let i = 0; i < fruits.length; i++) {
      console.log(fruits[i]);
    }
    ```
  - **`forEach()`:**
    ```javascript
    fruits.forEach(function(fruit) {
      console.log(fruit);
    });
    ```

**Activities:**
- Demonstrate various array methods and operations.
- Practice creating and manipulating arrays with different methods.

**Assignment:**
- Create a JavaScript program that manages a list of items using arrays. Implement methods to add, remove, and display items.

---

### **Day 2: Objects**

**What is an Object?**
- **Definition:** Objects are collections of key-value pairs.
- **Syntax:**
  ```javascript
  let person = {
    firstName: "John",
    lastName: "Doe",
    age: 30,
    greet: function() {
      return "Hello, " + this.firstName;
    }
  };
  ```

**Object Properties and Methods:**
- **Accessing Properties:**
  ```javascript
  let name = person.firstName; // "John"
  let nameAlt = person["lastName"]; // "Doe"
  ```
- **Adding and Modifying Properties:**
  ```javascript
  person.age = 31;
  person.email = "john.doe@example.com";
  ```
- **Calling Methods:**
  ```javascript
  let greeting = person.greet(); // "Hello, John"
  ```

**Activities:**
- Demonstrate creating, accessing, and modifying objects.
- Practice using objects to represent real-world entities.

**Assignment:**
- Create a JavaScript program that uses objects to represent a collection of books or movies. Include properties and methods for each object.

---

### **Day 3: Advanced Functions**

**Function Expressions:**
- **Syntax:**
  ```javascript
  let add = function(a, b) {
    return a + b;
  };
  ```

**Arrow Functions:**
- **Syntax:**
  ```javascript
  let multiply = (a, b) => a * b;
  ```

**Closures:**
- **Definition:** A closure is a function that retains access to its lexical scope, even when the function is executed outside that scope.
- **Example:**
  ```javascript
  function makeCounter() {
    let count = 0;
    return function() {
      count++;
      return count;
    };
  }

  let counter = makeCounter();
  console.log(counter()); // 1
  console.log(counter()); // 2
  ```

**Activities:**
- Demonstrate function expressions, arrow functions, and closures.
- Practice creating and using advanced functions in JavaScript.

**Assignment:**
- Write a JavaScript program that utilizes function expressions, arrow functions, and closures to solve a problem or create a small application.

---

### **Day 4: Event Handling and DOM Manipulation**

**Advanced Event Handling:**
- **Event Delegation:**
  ```javascript
  document.getElementById('parent').addEventListener('click', function(event) {
    if (event.target && event.target.matches('button')) {
      console.log('Button clicked!');
    }
  });
  ```

**Form Handling:**
- **Getting Form Values:**
  ```javascript
  document.getElementById('myForm').addEventListener('submit', function(event) {
    event.preventDefault();
    let name = document.getElementById('name').value;
    console.log(name);
  });
  ```

**Activities:**
- Demonstrate advanced event handling techniques and form handling.
- Practice implementing event delegation and form interactions.

**Assignment:**
- Create a form with various input elements and handle form submission using JavaScript. Implement event delegation to manage dynamically added elements.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **Arrays:** Methods and manipulation.
- **Objects:** Creating and using objects.
- **Advanced Functions:** Function expressions, arrow functions, and closures.
- **Event Handling and DOM Manipulation:** Advanced event handling and form interactions.

**Mini-Project: Interactive To-Do List**
- **Requirements:**
  - Create a to-do list application with JavaScript.
  - Use arrays to manage tasks.
  - Use objects to represent tasks with properties (e.g., title, status).
  - Implement advanced functions and event handling for adding, editing, and removing tasks.

**Sample To-Do List Code:**
```html
<!DOCTYPE html>
<html>
  <head>
    <title>To-Do List</title>
    <style>
      #taskList {
        list-style-type: none;
        padding: 0;
      }
      .task {
        padding: 10px;
        border-bottom: 1px solid #ddd;
      }
    </style>
  </head>
  <body>
    <h1>To-Do List</h1>
    <form id="taskForm">
      <input type="text" id="taskInput" placeholder="New task" required>
      <button type="submit">Add Task</button>
    </form>
    <ul id="taskList"></ul>

    <script>
      let tasks = [];

      function addTask(task) {
        tasks.push({ name: task, done: false });
        renderTasks();
      }

      function renderTasks() {
        const list = document.getElementById('taskList');
        list.innerHTML = '';
        tasks.forEach((task, index) => {
          const item = document.createElement('li');
          item.className = 'task';
          item.innerHTML = `
            <span>${task.name}</span>
            <button onclick="toggleTask(${index})">${task.done ? 'Undo' : 'Complete'}</button>
            <button onclick="removeTask(${index})">Delete</button>
          `;
          list.appendChild(item);
        });
      }

      function toggleTask(index) {
        tasks[index].done = !tasks[index].done;
        renderTasks();
      }

      function removeTask(index) {
        tasks.splice(index, 1);
        renderTasks();
      }

      document.getElementById('taskForm').addEventListener('submit', function(event) {
        event.preventDefault();
        const input = document.getElementById('taskInput');
        addTask(input.value);
        input.value = '';
      });
    </script>
  </body>
</html>
```

**Resources:**
- **MDN Web Docs:** [JavaScript Arrays](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array)
- **MDN Web Docs:** [JavaScript Objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_Objects)
- **MDN Web Docs:** [JavaScript Functions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Functions)
- **W3Schools:** [JavaScript Events](https://www.w3schools.com/js/js_events.asp)

---

