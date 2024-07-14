/*
2. **ES6 and Modern JavaScript:**
   - Arrow functions
   - Destructuring assignment
   - Template literals
   - Let and const
   - Classes and inheritance
   - Modules (import/export) 

   ES6, short for ECMAScript 2015, is the sixth edition of the ECMAScript standard, 
   which is the scripting language specification that JavaScript is based on. 
   ES6 introduced significant enhancements and new features to the JavaScript language, 
   providing developers with more tools and syntactic sugar to write clean, efficient, and expressive code.

When people refer to "modern JavaScript," they are generally talking about the practices 
and features introduced in and after ES6. Modern JavaScript encompasses the latest ECMAScript specifications, 
as well as contemporary coding patterns and best practices.

Key features introduced in ES6 and considered part of modern JavaScript include:

1. **Arrow Functions:** A concise syntax for writing functions, especially useful for 
short anonymous functions and functions with a simple body.

2. **Destructuring Assignment:** A syntax that allows unpacking values from arrays or 
properties from objects into distinct variables, making code more concise.

3. **Template Literals:** A more expressive way to concatenate strings and include expressions 
inside strings using backticks (`).

4. **let and const:** `let` and `const` introduced block-scoping, replacing the sometimes 
confusing behavior of `var`. `let` allows variable reassignment, while `const` declares constants.

5. **Classes and Inheritance:** The introduction of class syntax, making it easier to 
create and extend object-oriented code, simplifying the prototype chain.

6. **Modules (import/export):** A standardized way to organize code into reusable and 
maintainable modules, promoting a more modular approach to building applications.

7. **Promises:** A built-in mechanism for handling asynchronous operations, 
providing a more structured and readable way to deal with asynchronous code than callback functions.

8. **Default Parameters:** Allows function parameters to have default values, 
reducing the need for boilerplate code.

9. **Rest and Spread Operators:** The `...` syntax for both rest and spread operations, 
providing a concise way to handle variable arguments in functions or spread elements in arrays.

10. **Enhanced Object Literals:** Shorthand syntax for defining methods and properties in object literals, 
making object creation more concise.

11. **Symbol:** A new primitive data type, providing a way to create unique identifiers, 
which is useful for creating private object properties and avoiding naming collisions.

These features, along with subsequent additions in newer ECMAScript specifications 
(ES7, ES8, ES9, and so on), collectively define what is considered modern JavaScript. 
Developers often use these features to write more efficient, readable, and maintainable code. 
It's essential for JavaScript developers to stay up-to-date with modern practices to leverage 
the full capabilities of the language.
   */

// Spread Syntax Example
// It is used to expand elements of an iterable (like an array) or properties of an object.
const array1 = [1, 2, 3];
const array2 = [...array1, 4, 5, 6]; // Spread elements of array1 into array2
console.log(array2); // Output: [1, 2, 3, 4, 5, 6]

const obj1 = { key1: 'value1', key2: 'value2' };
const obj2 = { ...obj1, key3: 'value3' }; // Spread properties of obj1 into obj2
console.log(obj2); // Output: { key1: 'value1', key2: 'value2', key3: 'value3' }

// Rest Syntax Example
// It is used to collect the remaining elements of an array or properties of an object into a single variable.
const [first1, second1, ...rest] = [1, 2, 3, 4, 5];
console.log(first1); // Output: 1
console.log(second1); // Output: 2
console.log(rest); // Output: [3, 4, 5]

const { key1, ...restObj } = { key1: 'value1', key2: 'value2', key3: 'value3' };
console.log(key1); // Output: 'value1'
console.log(restObj); // Output: { key2: 'value2', key3: 'value3' }


// Traditional function
function add(a, b) {
   return a + b;
}


function Multi(a,b){return a*b;}

// Anonymous Function
<button
  onClick={() => {
    console.log("Hi");
  }}
>
  Click me
</button>;

// Arrow function
const addArrow = (a, b) => a + b;
const MultiArrow = (a,b) => a*b;

// Case 1: Single parameter
const square = x => x * x;

// Case 2: No parameters
const greet = () => console.log('Hello!');

// Case 3: Returning an object (maybe more than one)
const createPerson = (name, age) => ({ name, age });

// Case 4: Using with array functions
const numbers = [1, 2, 3];
const squaredNumbers = numbers.map(x => x * x); 
/*
 The map function is used to iterate over each element 
 of the numbers array and apply a function to each element, 
 creating a new array based on the results.
*/

// one more Eg:
const MyComponent = () => {return <div></div>;};

// Array destructuring
const numbers1 = [1, 2, 3];
const [first, second, third] = numbers1;
const [a,b,c] = numbers1;

// Object destructuring
const person = { name: 'John', age: 30 };
const { name, age } = person;

// Case 1: Swapping variables
let a1 = 1, b1 = 2;
[a1, b1] = [b1, a1];

// Case 2: Nested destructuring
const user = {
    name: 'Alice',
    info: {
        age: 25,
        country: 'Wonderland'
    }
};
const { name1, info: { age1, country } } = user;

// Case 3: Default values
const settings = { color: 'blue' };
const { theme = 'default', color } = settings;

// Template Literals
const name3 = 'World';
const greeting = `Hello, ${name3}!`;
const bye = `Bye Bye, ${name3}`;

// Case 1: Multiline strings
const multilineString = `
    This is a
    multiline string.
`;

// Case 2: Expressions inside templates
const a2 = 5, b2 = 10;
const result = `The sum of ${a2} and ${b2} is ${a2 + b2}.`;

// Case 3: Tagged templates
function myTag(strings, ...values) {
    // Your custom logic here
    return `${strings[0]}${values.join('')}${strings[1]}`;
}

const taggedResult = myTag`Hello, ${name1}!`;

function greetf(name4, age2) {
    return `Hello ${name4} in this ${age2} year`;
}

console.log(greetf('Siddhant Bali', 2023));


// Using var
var x = 10;
var x1 =69;

// Using let (block-scoped)
// let is just var but block-scoped version ;0
// block-scoped means if they are under { } so ,their existence will be under that only
let y = 20;

// Using const (block-scoped, and cannot be reassigned)
const z = 30;

// Case 1: Reassigning with let
let counter = 0;
counter = 1;

// Case 2: Const with objects and arrays 
//(reference cannot be changed, but contents can)
const numbers2 = [1, 2, 3];
numbers2.push(4);

// Case 3: Temporal dead zone
//console.log(a3); // ReferenceError: Cannot access 'a' before initialization
let a3 = 5;

/*
Certainly! Here's a summary of the information about `var`, `let`, and `const`:

- **`var`:**
  - **Scope:** Function-scoped or globally scoped.
  - **Hoisting:** Hoisted to the top of the scope, allowing use before declaration.
  - **Reassignment:** Can be reassigned and updated.

- **`let`:**
  - **Scope:** Block-scoped (limited to the block where it is defined).
  - **Hoisting:** Hoisted to the top of the block but not initialized, 
  so cannot be used before declaration.
  - **Reassignment:** Can be reassigned and updated.

- **`const`:**
  - **Scope:** Block-scoped.
  - **Hoisting:** Hoisted to the top of the block but not initialized.
  - **Reassignment:** Cannot be reassigned after the initial assignment, 
  making it a constant value.

**Recommendations:**
- Use `var` for older code or if function-scoping is specifically required.
- Prefer `let` for variables that may need to be reassigned within a block.
- Use `const` for constants and values that should not be reassigned after 
the initial assignment, providing a more robust and predictable code structure.

*/

// Creating a class
class Animal {
    constructor(name) {
        this.name = name;
    }

    speak() {
        console.log(`${this.name} makes a sound.`);
    }

    run(){console.log(`${this.name} run like a ${this.name}`);}

}
// ` vs '
/*
In JavaScript, the backtick (`) and single quote (') are both used to define strings, 
but they have different purposes.
Single quotes are traditionally used to define strings in JavaScript. 
However, if you want to include a single quote within a string defined with single quotes, 
you need to escape it with a backslash:

The backtick, introduced in ECMAScript 6 (ES6), is used for template literals. 
Template literals allow for embedded expressions and multiline strings:
You can also include variables and expressions directly within a template literal:
This is useful for creating more complex strings in a concise and readable way.*/

// Extending a class
class Dog extends Animal {
    speak() {
        console.log(`${this.name} barks.`);
    }
}

const myDog = new Dog('Buddy');
myDog.speak();

// Case 1: Static methods
class MathOperations {
    static add(x, y) {
        return x + y;
    }
}

const sum1 = MathOperations.add(3, 4);

// Case 2: Getters and setters
class Circle {
    constructor(radius) {
        this.radius = radius;
    }

    get diameter() {
        return this.radius * 2;
    }

    set diameter(value) {
        this.radius = value / 2;
    }
}

const myCircle = new Circle(5);
console.log(myCircle.diameter); // Getter
myCircle.diameter = 12; // Setter
