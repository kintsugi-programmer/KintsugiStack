# Week 7: Advanced React Concepts and State Management

#### **Objective:**
Dive deeper into React concepts, including handling complex state management, working with React Router for navigation, and optimizing performance.

---

### **Day 1: React Router and Navigation**

**React Router:**
- **Definition:** React Router is a library for routing in React applications, allowing for navigation between different views or pages.

**Installation:**
```bash
npm install react-router-dom
```

**Basic Usage:**
- **Setup:**
  ```javascript
  import { BrowserRouter as Router, Route, Routes, Link } from 'react-router-dom';

  function App() {
    return (
      <Router>
        <nav>
          <Link to="/">Home</Link>
          <Link to="/about">About</Link>
        </nav>
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="/about" element={<About />} />
        </Routes>
      </Router>
    );
  }

  function Home() {
    return <h2>Home Page</h2>;
  }

  function About() {
    return <h2>About Page</h2>;
  }

  export default App;
  ```

**Activities:**
- Set up React Router in a React application.
- Create multiple pages and navigate between them using links.

**Assignment:**
- Build a multi-page React application using React Router. Include at least three different pages and implement navigation between them.

---

### **Day 2: Context API for State Management**

**Context API:**
- **Definition:** The Context API allows for managing global state in a React application without passing props down manually through every level of the component tree.

**Creating Context:**
- **Setup:**
  ```javascript
  import React, { createContext, useState, useContext } from 'react';

  const MyContext = createContext();

  function MyProvider({ children }) {
    const [value, setValue] = useState('Hello, World!');
    return (
      <MyContext.Provider value={{ value, setValue }}>
        {children}
      </MyContext.Provider>
    );
  }

  function ComponentA() {
    const { value, setValue } = useContext(MyContext);
    return (
      <div>
        <p>{value}</p>
        <button onClick={() => setValue('New Value')}>Change Value</button>
      </div>
    );
  }

  function App() {
    return (
      <MyProvider>
        <ComponentA />
      </MyProvider>
    );
  }

  export default App;
  ```

**Activities:**
- Implement the Context API in a React application.
- Create a global state and use it in different components.

**Assignment:**
- Build a React application that uses the Context API to manage global state. Create a simple app with multiple components that share and update state through context.

---

### **Day 3: Performance Optimization**

**React Performance Optimization:**
- **Memoization:** Use `React.memo` to prevent unnecessary re-renders of functional components.
  ```javascript
  import React, { memo } from 'react';

  const ExpensiveComponent = memo(({ value }) => {
    // Expensive calculations or rendering
    return <div>{value}</div>;
  });
  ```

- **useCallback:** Use `useCallback` to memoize callback functions.
  ```javascript
  import React, { useCallback, useState } from 'react';

  function App() {
    const [count, setCount] = useState(0);

    const increment = useCallback(() => {
      setCount(c => c + 1);
    }, []);

    return <button onClick={increment}>Count: {count}</button>;
  }
  ```

- **useMemo:** Use `useMemo` to memoize expensive calculations.
  ```javascript
  import React, { useMemo, useState } from 'react';

  function App() {
    const [count, setCount] = useState(0);

    const expensiveValue = useMemo(() => {
      return computeExpensiveValue(count);
    }, [count]);

    return <div>{expensiveValue}</div>;
  }

  function computeExpensiveValue(count) {
    // Expensive calculation
    return count * 2;
  }
  ```

**Activities:**
- Implement performance optimization techniques in a React application.
- Measure the impact of optimizations on component re-renders and application performance.

**Assignment:**
- Optimize a React application for performance by applying `React.memo`, `useCallback`, and `useMemo`. Evaluate and compare the performance before and after optimizations.

---

### **Day 4: Handling Forms and Validation**

**Form Handling:**
- **Controlled Components:**
  ```javascript
  import React, { useState } from 'react';

  function Form() {
    const [formData, setFormData] = useState({ name: '', email: '' });

    function handleChange(event) {
      const { name, value } = event.target;
      setFormData(prevState => ({ ...prevState, [name]: value }));
    }

    function handleSubmit(event) {
      event.preventDefault();
      console.log(formData);
    }

    return (
      <form onSubmit={handleSubmit}>
        <label>
          Name:
          <input type="text" name="name" value={formData.name} onChange={handleChange} />
        </label>
        <label>
          Email:
          <input type="email" name="email" value={formData.email} onChange={handleChange} />
        </label>
        <button type="submit">Submit</button>
      </form>
    );
  }

  export default Form;
  ```

**Form Validation:**
- **Example:**
  ```javascript
  import React, { useState } from 'react';

  function Form() {
    const [formData, setFormData] = useState({ name: '', email: '' });
    const [errors, setErrors] = useState({});

    function validate() {
      let valid = true;
      const newErrors = {};

      if (!formData.name) {
        newErrors.name = 'Name is required';
        valid = false;
      }
      if (!formData.email.includes('@')) {
        newErrors.email = 'Email is invalid';
        valid = false;
      }

      setErrors(newErrors);
      return valid;
    }

    function handleSubmit(event) {
      event.preventDefault();
      if (validate()) {
        console.log(formData);
      }
    }

    function handleChange(event) {
      const { name, value } = event.target;
      setFormData(prevState => ({ ...prevState, [name]: value }));
    }

    return (
      <form onSubmit={handleSubmit}>
        <label>
          Name:
          <input type="text" name="name" value={formData.name} onChange={handleChange} />
          {errors.name && <p>{errors.name}</p>}
        </label>
        <label>
          Email:
          <input type="email" name="email" value={formData.email} onChange={handleChange} />
          {errors.email && <p>{errors.email}</p>}
        </label>
        <button type="submit">Submit</button>
      </form>
    );
  }

  export default Form;
  ```

**Activities:**
- Create and manage forms in React.
- Implement form validation and error handling.

**Assignment:**
- Build a React application with a form that includes validation. Ensure the form handles user input and displays appropriate error messages.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **React Router:** Implementing navigation in a React application.
- **Context API:** Managing global state across components.
- **Performance Optimization:** Techniques to improve React application performance.
- **Form Handling and Validation:** Creating and validating forms in React.

**Mini-Project: Blog Application**
- **Requirements:**
  - Build a React blog application with multiple pages (e.g., Home, Blog Posts, About).
  - Use React Router for navigation.
  - Implement global state management with the Context API.
  - Optimize performance using `React.memo`, `useCallback`, and `useMemo`.
  - Include a form for creating new blog posts with validation.

**Resources:**
- **React Documentation:** [React Router](https://reactrouter.com/web/guides/quick-start)
- **React Documentation:** [Context API](https://reactjs.org/docs/context.html)
- **React Documentation:** [Performance Optimization](https://reactjs.org/docs/optimizing-performance.html)
- **MDN Web Docs:** [Form Handling](https://developer.mozilla.org/en-US/docs/Learn/Forms)

---

