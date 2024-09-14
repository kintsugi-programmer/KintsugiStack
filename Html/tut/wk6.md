### Week 6: Introduction to Front-End Frameworks

#### **Objective:**
Learn the basics of a front-end JavaScript framework/library (React) to build dynamic and interactive user interfaces.

---

### **Day 1: Introduction to React**

**What is React?**
- **Definition:** React is a JavaScript library for building user interfaces, developed by Facebook.
- **Key Concepts:**
  - **Components:** Reusable building blocks for the UI.
  - **State:** Data that can change over time and affect the UI.
  - **Props:** Data passed to components from parent components.

**Setting Up a React Project:**
- **Using Create React App:**
  ```bash
  npx create-react-app my-app
  cd my-app
  npm start
  ```

**Basic React Component:**
- **Functional Component:**
  ```javascript
  import React from 'react';

  function Welcome(props) {
    return <h1>Hello, {props.name}</h1>;
  }

  export default Welcome;
  ```

**Activities:**
- Set up a basic React project.
- Create and render a simple React component.

**Assignment:**
- Create a React component that displays a welcome message with a name passed via props.

---

### **Day 2: Components and JSX**

**JSX (JavaScript XML):**
- **Definition:** JSX is a syntax extension for JavaScript that looks similar to HTML and is used in React to describe what the UI should look like.
- **Basic Syntax:**
  ```javascript
  const element = <h1>Hello, world!</h1>;
  ```

**Component Types:**
- **Functional Components:** Stateless components that receive props and return JSX.
- **Class Components:** Stateful components that extend `React.Component`.

**Functional Component Example:**
  ```javascript
  import React from 'react';

  function Greeting() {
    return <p>Welcome to React!</p>;
  }

  export default Greeting;
  ```

**Class Component Example:**
  ```javascript
  import React, { Component } from 'react';

  class Greeting extends Component {
    render() {
      return <p>Welcome to React!</p>;
    }
  }

  export default Greeting;
  ```

**Activities:**
- Create functional and class components.
- Use JSX to define the component structure.

**Assignment:**
- Build a React application with multiple components and use JSX to render them.

---

### **Day 3: State and Props**

**State:**
- **Definition:** State is an object that holds data that can change over time and influence the behavior of a component.
- **Managing State in Functional Components:**
  - **Using `useState` Hook:**
    ```javascript
    import React, { useState } from 'react';

    function Counter() {
      const [count, setCount] = useState(0);

      return (
        <div>
          <p>You clicked {count} times</p>
          <button onClick={() => setCount(count + 1)}>Click me</button>
        </div>
      );
    }

    export default Counter;
    ```

**Props:**
- **Definition:** Props (short for properties) are read-only attributes passed from parent to child components.
- **Example:**
  ```javascript
  import React from 'react';

  function UserProfile(props) {
    return <h2>{props.name}</h2>;
  }

  export default UserProfile;
  ```

**Activities:**
- Demonstrate managing state with the `useState` hook.
- Practice passing and using props in components.

**Assignment:**
- Create a React application with a component that uses state to manage user input and props to display data passed from a parent component.

---

### **Day 4: Event Handling and Conditional Rendering**

**Event Handling:**
- **Example:**
  ```javascript
  import React, { useState } from 'react';

  function Button() {
    const [clicked, setClicked] = useState(false);

    function handleClick() {
      setClicked(!clicked);
    }

    return (
      <button onClick={handleClick}>
        {clicked ? 'Clicked!' : 'Click me'}
      </button>
    );
  }

  export default Button;
  ```

**Conditional Rendering:**
- **Example:**
  ```javascript
  import React, { useState } from 'react';

  function ToggleMessage() {
    const [showMessage, setShowMessage] = useState(true);

    return (
      <div>
        {showMessage && <p>This is a message!</p>}
        <button onClick={() => setShowMessage(!showMessage)}>
          Toggle Message
        </button>
      </div>
    );
  }

  export default ToggleMessage;
  ```

**Activities:**
- Demonstrate handling events in React components.
- Practice conditional rendering based on component state.

**Assignment:**
- Build a React application that includes interactive elements and conditionally rendered content based on user actions.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **React Basics:** Components, JSX, functional and class components.
- **State and Props:** Managing state with `useState`, passing props between components.
- **Event Handling and Conditional Rendering:** Handling events, rendering content conditionally.

**Mini-Project: Simple To-Do List Application**
- **Requirements:**
  - Build a React application to manage a to-do list.
  - Include functionality to add, remove, and mark tasks as complete.
  - Use state to manage the list of tasks and props to pass data between components.

**Sample To-Do List Code:**
```javascript
import React, { useState } from 'react';

function App() {
  const [tasks, setTasks] = useState([]);
  const [input, setInput] = useState('');

  function addTask() {
    if (input) {
      setTasks([...tasks, { text: input, completed: false }]);
      setInput('');
    }
  }

  function toggleTask(index) {
    const newTasks = tasks.slice();
    newTasks[index].completed = !newTasks[index].completed;
    setTasks(newTasks);
  }

  function removeTask(index) {
    setTasks(tasks.filter((_, i) => i !== index));
  }

  return (
    <div>
      <h1>To-Do List</h1>
      <input
        type="text"
        value={input}
        onChange={(e) => setInput(e.target.value)}
      />
      <button onClick={addTask}>Add Task</button>
      <ul>
        {tasks.map((task, index) => (
          <li key={index}>
            <span
              style={{ textDecoration: task.completed ? 'line-through' : 'none' }}
              onClick={() => toggleTask(index)}
            >
              {task.text}
            </span>
            <button onClick={() => removeTask(index)}>Remove</button>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default App;
```

**Resources:**
- **React Documentation:** [React Official Documentation](https://reactjs.org/docs/getting-started.html)
- **MDN Web Docs:** [React Components](https://developer.mozilla.org/en-US/docs/Learn/Tools_and_testing/Client-side_JavaScript_frameworks/React_getting_started)

---

