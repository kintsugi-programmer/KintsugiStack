// Import named exports and default export
import { add, subtract, multiply ,mod } from './mathFunctions';
import divide from './mathFunctions'; // Default export does not need curly braces

// Alias import
import { add as sum } from './mathFunctions';

// Import everything
import * as math from './mathFunctions';

// Re-export from another module
export { add, subtract } from './mathFunctions';

// Using the imported functionalities
console.log(add(2, 3));        // Output: 5
console.log(subtract(5, 2));   // Output: 3
console.log(multiply(2, 4));   // Output: 8
console.log(divide(10, 2));    // Output: 5
console.log(sum(2, 3));         // Output: 5
console.log(math.multiply(3, 3)); // Output: 9
console.log(mod(5,2));

// Dynamic import
import('./mathFunctions').then(mathModule => {
  console.log(mathModule.add(4, 5)); // Output: 9
});

// Re-exported functionalities
console.log(add(7, 2));      // Output: 9
console.log(subtract(10, 5)); // Output: 5

// CommonJS
const { add } = require('./mathFunctions');
