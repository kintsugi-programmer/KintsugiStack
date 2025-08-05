// Named exports
export const add = (a, b) => a + b;
export const subtract = (a, b) => a - b;
export const multiply = (a, b) => a * b;
export const mod = (a,b)=> a%b ;

// Default export
// Default export does not need curly braces
const divide = (a, b) => a / b;
export default divide;

/*
the import/export syntax is used to create modular 
code by allowing you to split your code into separate files 
and reuse them as needed.
*/