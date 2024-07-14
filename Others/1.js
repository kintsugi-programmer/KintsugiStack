// To run js file > open terminal > node file_name.js

// Single Line Comment

//JavaScript is your browser has a built-in execution environment.

/*
Multi
-
Line
Comment
*/

/*
1. **Basic JavaScript Concepts:**
   - Variables and Data Types
   - Operators
   - Control Flow (if statements, loops)
   - Functions
   - Objects and Arrays
   - DOM Manipulation (in 1a.html (which contains html with script ;0 ))
   - Ternary operators
*/

// variable
// Declare a variable
let message = "Hello World!";
let name = "Siddhant Bali Computer Science Sorcerer "

// Datatypes
let num = 1010; // Number
let text = "Some text"; // String
let isTrue = true; // Boolean
let data; // Undefined
let myArray = [1, 2, 3]; // Array
let myObject = { key: "value" }; // Object (dict. in python)
let persona = { name: "Bob", age: 30 }; // Object

// Print the variable
console.log(message);

/*

;

In JavaScript, the semicolon (;) is used to terminate statements. 
While JavaScript does have automatic semicolon insertion (ASI), 
it's a good practice to include semicolons explicitly to avoid potential issues, 
especially in larger codebases.

It's important to note that in modern JavaScript, 
there are contexts (such as at the end of a block) 
where a semicolon is not strictly required. However, 
including them is a recommended practice to avoid potential issues.

*/

// Operators
let x = 10;
let y = 5;
let sum = x + y; // Addition
let difference = x - y; // Subtraction
let product = x * y; // Multiplication
let quotient = x / y; // Division
let isEqual = x === y; // Strict equality === ,not ==
let isNotEqual = x !== y; // Strict inequality
let isTrue1 = true;
let isFalse = false;
let andResult = isTrue && isFalse; // Logical AND
let orResult = isTrue || isFalse; // Logical OR
let notResult = !isTrue; // Logical NOT

// Printing results
console.log("Sum:", sum);
console.log("Difference:", difference);
console.log("Product:", product);
console.log("Quotient:", quotient);
console.log("Is Equal:", isEqual);
console.log("Is Not Equal:", isNotEqual);
console.log("Logical AND Result:", andResult);
console.log("Logical OR Result:", orResult);
console.log("Logical NOT Result:", notResult);


// Function declaration
function greet(usrname){
    console.log("Hello "+usrname+" in this tutorial program ");
    console.log(";)");
}

function test(){
    console.log("test done ;)");
}


// Function call
greet(name);

//Anonymous Function
var greet2 = function(usrname){return "Hello "+usrname+" in this tutorial program ";};

//Immediately Invoked Function Expression (IIFE)
const result1 = (function (usrname) {return "Hello "+usrname+" in this tutorial program ";})("Siddhant Bali"); 
console.log(result1);

//A powerful feature of JavaScript is you can actually create functions within other functions and even return them!
function createFunction() {
  return f;
  function f(a, b) {
      const sum = a + b;
      return sum;
  }
}
const f = createFunction();
console.log(f(3, 4)); // 7

// Closures : A closure is a function that has access to its outer function scope even after the outer function has returned. This means a closure can remember and access variables and arguments of its outer function even after the function has finished. 
function createAdder(a) {
  function f1(b) {
      const sum = a + b;
      return sum;
  }
  return f1;
}
const f1 = createAdder(3);
console.log(f(4)); // 7


// Arrow Functions (ES6)
let Multiplication = (a,b) => a*b;

// Arrow Function's Omit Return {f2 and f3 are same}
const f2 = (a, b) => {
  const sum = a + b;
  return sum;
};
console.log(f2(3, 4)); // 7

const f3 = (a, b) => a + b;
console.log(f3(3, 4)); // 7

/*
Functions vs arrow functions

There are 3 major differences between arrow syntax and function syntax.

More minimalistic syntax. 
This is especially true for anonymous functions and single-line functions. For this reason, this way is generally preferred when passing short anonymous functions to other functions.

No automatic hoisting. 
You are only allowed to use the function after it was declared. This is generally considered a good thing for readability.

Can't be bound to this, super, and arguments or be used as a constructor. 
These are all complex topics in themselves but the basic takeaway should be that arrow functions are simpler in their feature set. You can read more about these differences here.

*/

// Rest Arguments ... (ES6) (means keep everything in an array)
function f11(...args) {
  const sum = args[0] + args[1];
  return sum;
}
console.log(f11(3, 4)); // 7

function log(inputFunction) {
  return function(...args) {
      console.log("Input", args);
      const result = inputFunction(...args);
      console.log("Output", result);
      return result;
  }
}
const f111 = log((a, b) => a + b);
f(1, 2); // Logs: Input [1, 2] Output 3

// Conditional Statements
// if,else,else if
if (num > 0) {
  console.log("Positive number");
} else if (num < 0) {
  console.log("Negative number");
} else {
  console.log("Zero");
}

// for loop
for (let index = 0; index < myArray.length; index++) {
    const element = myArray[index];
    console.log(element) 
}

// While loop
let counter = 0;
while (counter<=5) {
    console.log(counter);
    counter++;
    
}

// Object
let person = {
    firstName: "John",
    lastName: "Doe",
    age: 30,
    fullName: function () {
      return this.firstName + " " + this.lastName;
    },
  };

const age_person = person.age;
const {a1,a2,a3} = person ; //deconstruct (easy way to assign stuff) 

let car= {model: "Swift Dezire",company:"Maruti Suzuki",desc:function(){return this.model+" by "+this.company;}};
  

const b1 = "hi";
const b2 = "hola";
const b = {
  b1, //it means b1 = b1 ;
  b2, //b2 = b2 ;

};

// ... Spread Operator (means keep everything form datastructures(obj,arr,etc))
let person2 = {...person,firstName:"Daisy"};
// above means that person2 will have exact all stuff of person and firstName is Daisy
const name2=[1,2,3];
const name3=[...name2,4]; //it means name3 will have exact all stuff of name2 and also an entry of 4
 





// Accessing object properties and calling a method
console.log(person.firstName); // John
console.log(person.fullName()); // John Doe

console.log(car);
/*
{
  model: 'Swift Dezire',
  company: 'Maruti Suzuki',
  desc: [Function: desc]
}


*/
console.log(car.model);
console.log(car.company);
console.log(car.desc());
  

// Array
let fruits = ["apple", "banana", "orange"];

// Iterating through an array
for (let i = 0; i < fruits.length; i++) {
  console.log(fruits[i]);
}

// Array methods
fruits.push("grape"); // Add an element to the end
fruits.pop(); // Remove the last element
fruits.unshift("kiwi"); // Add to the beginning
fruits.shift(); // Remove from the beginning
console.log(fruits); // ["apple", "banana", "orange"]

// Using forEach to iterate through each element in the 'fruits' array and print it.
fruits.forEach(function (fruit) {
  console.log("Current Fruit:", fruit);
});

// Using filter to create a new array ('filteredFruits') by excluding the "orange" fruit.
let filteredFruits = fruits.filter(function (fruit) {
  // The filter callback returns true for elements that should be included in the filtered array.
  // In this case, it excludes "orange" from the new array.
  return fruit !== "orange";
});

// Displaying the filtered array of fruits after excluding "orange".
console.log("Filtered Fruits (excluding 'orange'):", filteredFruits);

// Ternary operators
// condition ? expression_if_true : expression_if_false;
let age = 20;
let message2 = (age >= 18) ? 'You are an adult' : 'You are a minor';

console.log(message2);
// Output: 'You are an adult' (since age is 20, which is greater than or equal to 18)

let tier = 1;
let college = (tier=1)?'Premium College': (tier=2)?'Decent College':'Bekar College';
console.log(college);

let num1 = 10;

// Check if num1 is greater than 0
let result = (num1 > 0) 
  ? 'Positive' // If true, set result to 'Positive'
  : (num1 < 0) 
    ? 'Negative' // If false, check if num1 is less than 0. If true, set result to 'Negative'
    : 'Zero'; // If false, set result to 'Zero'

console.log(result);
// Output: 'Positive' (since num1 is 10, which is greater than 0)

const Component = () => {return age>10?<div>Bhati</div>:<div>Bali</div>;};


let names = ["Bali","Bhaskar","Bhati","Bali","Bali"];
// i want to make each element have 1 at last Bali1
//normal way,for loop
//mentos way

names.map((name)=>{
    return name + "1"
});

names.map((name)=>{
    return <h1>{name}</h1>
});

names.filter((name)=>{
    return name !== "Bali"
});

// .map()
// .filter()
// .reduce()


const name1 = data?.person?.name;  
/*
"?"
: This is the optional 
chaining operator. It allows you to access 
properties of an object without the need 
to explicitly check if each level of the 
object hierarchy is defined 
(i.e., not null or undefined). 
If any intermediate property in the chain 
is null or undefined, the entire expression 
evaluates to undefined instead of throwing an 
error.


*/