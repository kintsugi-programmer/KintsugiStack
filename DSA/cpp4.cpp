#include<bits/stdc++.h>
// main.cpp is a very common syntax.In large software development,main.cpp is often the name given to the primary execution file
using namespace std;
int main(){
    // Comments
    // The compilation process involves the Code File (a basic text file) going through a Compiler (the C++ compiler) to produce an Executable.
    // 1. During compilation, the compiler extracts and gathers all keywords (like int, main, namespace) to build an Abstract Syntax Tree (AST).
    // 2. When a line is commented out, the compiler ignores that line totally.

    // ctrl + / VSC Shortcut
    /*
    Multiline comment
    */

    // Avoid comments that add no value, It is considered a bad practice in real-world software development to write unnecessary comments.
    // Comments should only be written where complexity has been introduced.


    // Data
    // Store: Storing data. DS
    // Process: Manipulating data. A
    // Display/Read: Showing the result to the user (the ultimate goal of data).

    // Variables
    // When you declare a variable, you are asking the RAM (Random Access Memory) for a small box and giving that box a name (an identifier)
    // Declaration 
    int score                      ;     // Extra white spaces (e.g., excessive line breaks or tabs) do not affect the compiler. The compiler has no concern with white spaces
    // Initialization/Usage
    score = 100;
    // Combined Declaration and Initialization 
    int balance =1;
    // Modification
    balance = 999999;  // Change is complete and totally allowed

    // Identifiers (Variable Naming Rules)
    // NO Keywords
    // YES baliKing // camelCase
    // YES bali_king // snake_case
    // NO 1bali // no start with int
    // NO bali king // no spaces
    // YES _baliKey // typical norm to show sensitive info

    // Contants
    // if you mark any variable const, the compiler made it a non-modifiable L-value.
    // If you try to change the value of a constant, the compiler generates an error.
    const int rollno1 = 122;
    // rollno1 = 0; // NO, ERROR
    // // error: assignment of read-only variable ‘rollno1’

    // Left-Hand Side value 
    // where variable is at left
    // persistent
    int x = 10; // LHS => x
    // Right-Hand Side value
    // var also at right
    // inpersistent
    int y = x*x ; // RHS => x*x
    
    // NO int y = (x**2); 
    // C++ does not use ** for exponentiation (calculating powers).
    // use std::pow(number, 2)

    return 0;
}
