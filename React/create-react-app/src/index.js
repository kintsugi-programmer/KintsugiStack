import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <App />
  </React.StrictMode>
);

// // If you want to start measuring performance in your app, pass a function
// // to log results (for example: reportWebVitals(console.log))
// // or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals

// its old
// ReactDOM.render(<App />, document.getElementById('root'));reportWebVitals();


// The reason the useEffect alert is popping up twice on page reload is likely due to React's Strict Mode in development mode. In React 18, the Strict Mode intentionally renders components twice during development (not in production) to help identify potential side effects and other issues. This causes the useEffect to run twice when the component mounts.