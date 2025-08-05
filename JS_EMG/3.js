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