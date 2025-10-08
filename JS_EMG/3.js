// 3.js
// 3. **Asynchronous JavaScript:**
//    - Callbacks
//    - Promises
//    - Async/Await

/*
an asynchronous operation is a task that doesn't block the entire 
program while it's being executed. Instead of waiting for the operation 
to finish, the program continues with other tasks and handles the 
result of the asynchronous operation later. Examples include network r
equests, file operations, and timed events. Asynchronous programming 
in JavaScript uses techniques like callbacks, promises, and async/await 
to manage and organize this type of code.

Imagine you are at a coffee shop. 
If you place an order for a coffee and the 
barista immediately hands you the coffee, that's a 
synchronous operation. The program (or your coffee order) 
is blocked until the operation (or the coffee preparation) is complete.

On the other hand, if you place an order and receive a buzzer, 
allowing you to sit down while waiting for your coffee, that's an 
asynchronous operation. You can do other things (like reading a book 
    or checking your phone) while the coffee is being prepared. Once 
    your coffee is ready, the buzzer alerts you, and you can pick up 
    your coffee. During this time, you weren't blocked and could 
    perform other tasks.

In JavaScript, common examples of asynchronous operations include:

Network Requests: When your program makes a 
request to a server for data, it often takes some time to get a response. Meanwhile, your program can continue doing other things.

File Operations: Reading or writing to a file can take time, 
especially in a large file. Asynchronous file operations allow 
your program to continue its execution while waiting for the file 
operation to complete.

Timers: Functions like setTimeout or setInterval allow you to 
schedule code to run after a specified amount of time, without 
blocking the rest of your program.

Understanding and effectively working with asynchronous 
operations is crucial in web development, where interactions 
with servers, user interfaces, and external resources often 
involve some form of delay. Concepts like callbacks, promises, 
and async/await are tools in JavaScript to manage and handle 
asynchronous code in a more readable and maintainable way.

*/


// Callbacks
/*
Callbacks:
A callback is a function that is passed as an 
argument to another function and is executed after 
the completion of some asynchronous operation. 
*/

// Example callback function
function myCallback(result) {
    console.log("Callback executed with result: " + result);
  }
  
  // Function with a callback
  function performAsyncOperation(data, callback) {
    // Simulating an asynchronous operation
    setTimeout(function () {
      const result = data * 2;
      callback(result);
    }, 1000); // 1000 milliseconds delay
  }
  
  // Using the callback
  performAsyncOperation(5, myCallback);

// Promises
/*
Promises provide a cleaner way to handle asynchronous operations. 
A promise represents the eventual completion or failure of an 
asynchronous operation. 
*/
// Example using promises
function performAsyncOperation1(data) {
    return new Promise(function (resolve, reject) {
      // Simulating an asynchronous operation
      setTimeout(function () {
        const result = data * 2;
        resolve(result);
        // or reject("Operation failed!"); for error
      }, 1000); // 1000 milliseconds delay
    });
  }
  
  // Using the promise
  performAsyncOperation1(5)
    .then(function (result) {
      console.log("Promise resolved with result: " + result);
    })
    .catch(function (error) {
      console.error("Promise rejected with error: " + error);
    });

// Example using promises with reject case
function performAsyncOperation11(data) {
    return new Promise(function (resolve, reject) {
      // Simulating an asynchronous operation
      setTimeout(function () {
        if (data > 0) {
          const result = data * 2;
          resolve(result);
        } else {
          reject("Operation failed! Input should be greater than 0.");
        }
      }, 1000); // 1000 milliseconds delay
    });
  }
  
  // Using the promise
  performAsyncOperation11(5)
    .then(function (result) {
      console.log("Promise resolved with result: " + result);
    })
    .catch(function (error) {
      console.error("Promise rejected with error: " + error);
    });
  
  // Example with rejection
  performAsyncOperation11(-2)
    .then(function (result) {
      console.log("Promise resolved with result: " + result);
    })
    .catch(function (error) {
      console.error("Promise rejected with error: " + error);
    });
  
  
// Async/Await
/*
Async/await is a syntax sugar built on top of promises,
 making asynchronous code look more like synchronous code.

*/
// Example using async/await
async function performAsyncOperation2(data) {
    return new Promise(function (resolve) {
      // Simulating an asynchronous operation
      setTimeout(function () {
        const result = data * 2;
        resolve(result);
      }, 1000); // 1000 milliseconds delay
    });
  }
  
  // Using async/await
  async function fetchData() {
    try {
      const result = await performAsyncOperation2(5);
      console.log("Async/Await result: " + result);
    } catch (error) {
      console.error("Async/Await error: " + error);
    }
  }
  
  // Calling the async function
  fetchData();


// Callbacks: Functions passed as arguments to handle asynchronous operations, but can lead to messy nesting (callback hell).
// Promises: A cleaner alternative to callbacks, allowing chaining of .then() and .catch() for success and error handling.
// async: Marks a function as asynchronous and makes it return a Promise.
// await: Pauses the function until a Promise resolves, then continues with the result.


// // Callback
// This code demonstrates how callbacks work in JavaScript for handling asynchronous operations.

// myCallback(result) is a simple function that logs the result passed to it.

// performAsyncOperation(data, callback) is a function that simulates an asynchronous operation using setTimeout(). After 1 second, it computes data * 2 and calls the provided callback function with the result.

// performAsyncOperation(5, myCallback) calls the function with 5 as input. After the 1-second delay, myCallback is executed, logging the result of 5 * 2, which is 10.

// In summary, a callback is a function passed as an argument to another function, and it gets executed once the asynchronous operation is complete. This is how JavaScript traditionally handles async tasks, but it can lead to callback hell if multiple nested callbacks are used.

// //Promises
// This code demonstrates how Promises are used to handle asynchronous operations in a cleaner and more manageable way compared to callbacks.

// Key Concepts:
// Promises represent the eventual completion (or failure) of an asynchronous operation. A Promise has three states:

// Pending — Initial state, operation is not finished.

// Resolved (Fulfilled) — Operation completed successfully.

// Rejected — Operation failed (error occurred).

// Breakdown:
// performAsyncOperation1(data):

// This function returns a Promise.

// Inside the Promise, it simulates an asynchronous operation using setTimeout() to wait 1 second.

// If the operation is successful, it calls resolve(result) to pass the result.

// If there’s an error, reject(error) can be used (though it’s not used in this case).

// Using Promises:

// .then() is used to handle a successful resolution of the Promise, where the result is logged to the console.

// .catch() is used to handle a rejection (error), and in this case, logs an error message if the operation fails.

// performAsyncOperation11(data):

// This function also returns a Promise, but with added validation:

// If data > 0, it resolves with data * 2.

// If data <= 0, it rejects the Promise with an error message.

// Using the Promise with rejection:

// When the function is called with 5, the Promise resolves successfully.

// When the function is called with -2, the Promise rejects and logs an error message.

// Summary:
// Promises provide a more structured and readable way to handle asynchronous operations compared to callbacks.

// They allow handling success (.then()) and failure (.catch()) in a clean manner, avoiding deeply nested callbacks.

// // async/await

// This code demonstrates async/await for handling asynchronous operations in JavaScript.

// performAsyncOperation2(data) is a function that returns a Promise, simulating an asynchronous operation (multiplying a number after a 1-second delay).

// fetchData() is an async function, which means it can use await to pause execution until the performAsyncOperation2() Promise resolves. This makes it appear as if the asynchronous operation is happening synchronously (like a normal function).

// Inside fetchData(), await pauses the function until performAsyncOperation2(5) completes. Once it resolves, the result is printed to the console.

// In short, async/await simplifies working with asynchronous code by making it more readable and less prone to complex chaining or callback issues.
