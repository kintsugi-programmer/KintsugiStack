# DSA
- https://github.com/kishanrajput23/Love-Babbar-CPP-DSA-Course/tree/main
- https://www.youtube.com/playlist?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA

## Table of Contents
- [DSA](#dsa)
  - [Table of Contents](#table-of-contents)
  - [DSA Lecture 1: Flowcharts, Pseudocode \& Programming Languages](#dsa-lecture-1-flowcharts-pseudocode--programming-languages)
    - [Table of Contents](#table-of-contents-1)
    - [Course Intent \& Problem Solving](#course-intent--problem-solving)
      - [Problem Solving Approach](#problem-solving-approach)
      - [Development Flow](#development-flow)
    - [Flowcharts](#flowcharts)
    - [Pseudocode](#pseudocode)
      - [What is Pseudocode?](#what-is-pseudocode)
      - [Example Pseudocodes](#example-pseudocodes)
        - [Sum of Two Numbers](#sum-of-two-numbers)
        - [Even/Odd Check](#evenodd-check)
        - [Sum 1 to N](#sum-1-to-n)
        - [Prime Number Check](#prime-number-check)
    - [Programming Languages](#programming-languages)
      - [What are Programming Languages?](#what-are-programming-languages)
      - [Why Do We Need Them?](#why-do-we-need-them)
      - [Language Translation Process](#language-translation-process)
      - [Key Points](#key-points)
      - [Language Rules](#language-rules)
    - [Practice Problems](#practice-problems)
      - [Homework Questions](#homework-questions)
        - [1. Triangle Validity Check](#1-triangle-validity-check)
        - [2. Print Odd Numbers 1 to N (Inclusive)](#2-print-odd-numbers-1-to-n-inclusive)
        - [3. Factorial of N](#3-factorial-of-n)
      - [Additional Practice](#additional-practice)
    - [Mod Operator](#mod-operator)
    - [Key Takeaways](#key-takeaways)
      - [Problem Solving Steps](#problem-solving-steps)
      - [Flowchart Components](#flowchart-components)
      - [Programming Fundamentals](#programming-fundamentals)
  - [DSA Lecture 2: First Program \& Data Types](#dsa-lecture-2-first-program--data-types)
    - [Complete Example Program](#complete-example-program)
    - [Table of Contents](#table-of-contents-2)
    - [Compilation Process](#compilation-process)
      - [How Programs Work](#how-programs-work)
      - [Compiler Functions](#compiler-functions)
    - [First Program - Hello World](#first-program---hello-world)
      - [Basic Structure](#basic-structure)
      - [Code Breakdown](#code-breakdown)
      - [Output Methods](#output-methods)
    - [Data Types \& Variables](#data-types--variables)
      - [Primary Data Types](#primary-data-types)
      - [Variable Declaration Examples](#variable-declaration-examples)
      - [Variable Naming Rules](#variable-naming-rules)
    - [Memory Storage](#memory-storage)
      - [Integer Storage (4 bytes = 32 bits)](#integer-storage-4-bytes--32-bits)
      - [Character Storage (ASCII)](#character-storage-ascii)
      - [Negative Number Storage (2's Complement)](#negative-number-storage-2s-complement)
      - [Signed vs Unsigned](#signed-vs-unsigned)
    - [Type Casting](#type-casting)
      - [Implicit Type Casting](#implicit-type-casting)
      - [Data Type Conversion Chart](#data-type-conversion-chart)
    - [Operators](#operators)
      - [Arithmetic Operators](#arithmetic-operators)
      - [Division Rules](#division-rules)
      - [Relational Operators](#relational-operators)
      - [Logical Operators](#logical-operators)
      - [Logical Operators Truth Table](#logical-operators-truth-table)
      - [Assignment Operator](#assignment-operator)
    - [Key Takeaways](#key-takeaways-1)
      - [Program Structure](#program-structure)
      - [Memory Management](#memory-management)
      - [Important Rules](#important-rules)

## DSA Lecture 1: Flowcharts, Pseudocode & Programming Languages  

### Table of Contents
- [Course Intent & Problem Solving](#course-intent--problem-solving)
- [Flowcharts](#flowcharts)
- [Pseudocode](#pseudocode)
- [Programming Languages](#programming-languages)
- [Practice Problems](#practice-problems)

---

### Course Intent & Problem Solving

#### Problem Solving Approach
```
1. UNDERSTAND THE PROBLEM
   ↓
2. IDENTIFY GIVEN VALUES
   ↓  
3. THINK ABOUT APPROACH
   ↓
4. WRITE THE CODE
```

#### Development Flow
```
Problem → Rough Solution → High Level Code → Machine Code → Executable
         (Flowchart/      (C++/Java/     (Binary)    (Run Program)
          Pseudocode)      Python)
```

---

### Flowcharts
- [Flowcharts Class Notes](1_Flowcharts.pdf)

### Pseudocode

#### What is Pseudocode?
- **Pseudo** = Rough, **Code** = Instructions
- Generic way of representing logic
- Language-independent approach
- Easy to understand English-like statements

#### Example Pseudocodes

##### Sum of Two Numbers
```
1. Read a, b
2. sum = a + b  
3. Print sum
```

##### Even/Odd Check
```
1. Read N
2. If N%2 == 0
   Then Print "EVEN"
   Else Print "ODD"
```

##### Sum 1 to N
```
1. Read N
2. sum = 0
3. num = 1
4. While num <= N
   - sum = sum + num
   - num = num + 1
5. Print sum
```

##### Prime Number Check
```
1. Read N
2. num = 2
3. While num < N
   - If N%num == 0
     Then Print "NOT PRIME" and Exit
   - num = num + 1
4. Print "PRIME"
```

---

### Programming Languages

#### What are Programming Languages?
Languages used to give instructions to computers, just like we use human languages to communicate.

#### Why Do We Need Them?
```
Human Instructions → Programming Language → Compiler → Machine Code
"Give me food"      "cout << message"     Binary    Computer Execute
```

#### Language Translation Process
```
┌─────────────┐   ┌─────────────┐   ┌─────────────┐
│ Source Code │ → │   Compiler  │ → │ Executable  │
│   (C++)     │   │   (gcc)     │   │   (.exe)    │
│ Human Read  │   │ Translator  │   │ Machine Run │
└─────────────┘   └─────────────┘   └─────────────┘
```

#### Key Points
- **Source Code**: Human-readable instructions
- **Compiler**: Translator (Hindi to French analogy)
- **Binary Code**: Machine language (0s and 1s)
- **Executable File**: Ready-to-run program

#### Language Rules
Every programming language has:
- **Syntax**: Grammar rules
- **Semantics**: Meaning of constructs
- **Keywords**: Reserved words
- **Operators**: Mathematical and logical symbols

---

### Practice Problems

#### Homework Questions

##### 1. Triangle Validity Check
**Problem**: Check if triangle with sides A, B, C is valid
**Logic**: A+B > C AND B+C > A AND C+A > B
```
Input: A, B, C
Conditions: All three inequalities must be true
Output: "VALID" or "INVALID"
```

##### 2. Print Odd Numbers 1 to N (Inclusive)
**Problem**: Print all odd numbers from 1 to N where N is included
```
Input: N = 5
Output: 1, 3, 5
Logic: Start with 1, increment by 2, condition num <= N
```

##### 3. Factorial of N
**Problem**: Calculate N! = N × (N-1) × (N-2) × ... × 1
```
Input: N = 5
Output: 120
Logic: fact = 1, multiply by each number from 1 to N
```

#### Additional Practice
Write pseudocode for all the flowchart examples covered in the lecture.

### Mod Operator
- gives remainder
- a%b = remainder of a/b
- `5%2=1`
- `8%2=0`
- `4%9=4`, when a>b, a%b=a
- if n%2 =0 , n is even, else n is odd
---

### Key Takeaways

#### Problem Solving Steps
1. **Understand** the problem statement
2. **Identify** given inputs and required outputs  
3. **Design** approach using flowchart/pseudocode
4. **Implement** in programming language

#### Flowchart Components
- **Oval**: Start/End points
- **Parallelogram**: Input/Output operations
- **Rectangle**: Processing/Calculations  
- **Diamond**: Decision making
- **Arrows**: Program flow direction

#### Programming Fundamentals
- Code needs compilation to run on computer
- Flowcharts help visualize logic before coding
- Pseudocode provides language-independent solutions
- Loops enable repetitive operations
- Conditions enable decision making

---

## DSA Lecture 2: First Program & Data Types
*Love Babbar - CodeHelp Series*
- [2_first_prof_in_cpp.pdf](2_first_prof_in_cpp.pdf) [IMP] [HowDatatypeStoredInMemory]
### Complete Example Program
```cpp

#include <iostream>
using namespace std;

int main() {
   // Variable declarations
    int age = 20;
    char grade = 'A';
    bool isPassed = true;
    float percentage = 85.5f;
    
    // Output
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;
    cout << "Percentage: " << percentage << endl;
    
    // Size information
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    // Age: 20
    // Grade: A
    // Passed: 1
    // Percentage: 85.5
    // Size of int: 4 bytes
    // Size of char: 1 bytes

    cout<<"Hello World"
        <<endl
        <<'h'
        <<"\n";
    int a=5;
    char ch ='a';
    bool b=1;
    bool b1=true;
    float f=1.32;
    double d=1.234234234;
    cout<<sizeof(a)
        <<endl;
    //hi
    cout<<(int)'a'<<endl;
    cout<<char(65)<<endl;
    int aa = 'a';
    cout<<aa<<endl;
    char chh = 99;
    unsigned z=1122;
     unsigned z11=-1122;//wrong way

    //comment
    /*
    comment
    
    comment*/
    int a1= 2/5;
    cout<<a1;

    int a22=2.0/5;
    double a2=2.0/5;

    int zz =2;
    int yy=3;
    bool z1 = (a==b), 
    z2= (a>b),
    z3= (a<b),
    z4= (a<=b),
    z5= (a>=b),
    z6= (a!=b)
    ;
cout<<endl;
    cout<< (true && false)<< (true || false)<< (!true);

    cout<<endl;
    cout<<(7&4)<<(7|4)<<(7^4)<<(~4)<<(5<<2)<<(16>>2);

    int x=10;
    float y=x;

    float x11=0.14;
    int y11= (int)x11;


    

    return 0;
}

```


### Table of Contents
- [Compilation Process](#compilation-process)
- [First Program - Hello World](#first-program---hello-world)
- [Data Types & Variables](#data-types--variables)
- [Memory Storage](#memory-storage)
- [Type Casting](#type-casting)
- [Operators](#operators)
- [Key Takeaways](#key-takeaways)

---

### Compilation Process

#### How Programs Work
```
Source Code → Compiler → Executable File → Output
    (.cpp)       (gcc)      (.exe/.out)    (result)
```

- C/ C++ is inbuilt in Linux, as Linux is made in C/ C++ !!!

#### Compiler Functions
1. **Translation**: Converts source code to machine code
2. **Error Detection**: Finds compile-time and runtime errors

---

### First Program - Hello World

#### Basic Structure
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "NAMASTEY DUNIYA" << endl;
    return 0;
}
```

- IDE
  - Integrated Development Environment
  - Let's You code, debug, execute 
  - gives you a lab to experiment
  - eg: VSC(Local IDE), Replit(Remote IDE)
- `;` end of statement, EOL
- `<<` means enterline, syntax of cout function
- `return 0;` :  end/exit
- `"abcd"` : string & syntax
- library : collection of pre-built code essentials to directy plug and play
- `endl` : newline + flush operation, slower than `\n`
- `iostream` : library contains all input output codes
- `\n` : newline character, faster

#### Code Breakdown
```cpp
#include <iostream>  ← Include file for input/output functions
using namespace std; ← Use standard namespace
int main() {         ← START block (entry point)
    // code here     ← Program logic
}                    ← Boundary markers
```

#### Output Methods
```cpp
// Method 1: Using endl
cout << "Hello World" << endl;

// Method 2: Using \n
cout << "Hello World\n";

// Method 3: Combined
cout << "Hello World" << endl << "Next Line" << endl;
```

**Output:**
```
Hello World
Next Line
```

---

### Data Types & Variables
- `dataType VarName = Value; `
- `int` = 4bytes, 2bytes etc. DEPENDS ON COMPUTER
- once you defined a Variable with one datatype, YOU CAN'T REDEFINE IN CODE, USE A DIFFERENT VAR !!!
- `char a = '123';` [NO], Can't store more than 1 char
- `char a  = "b";` [NO], use single-quotes`'`, not `"` double-quotes
- even `bool b = true;` then when cout, it gives `1`

#### Primary Data Types
```
┌─────────────┬──────────┬─────────────┬─────────────┐
│ Data Type   │   Size   │    Range    │   Example   │
├─────────────┼──────────┼─────────────┼─────────────┤
│ int         │ 4 bytes  │ -2³¹ to 2³¹ │ int a = 5   │
│ char        │ 1 byte   │ 0 to 255    │ char c='a'  │
│ bool        │ 1 byte   │ true/false  │ bool b=true │
│ float       │ 4 bytes  │ 6-7 digits  │ float f=1.2 │
│ double      │ 8 bytes  │ 15 digits   │ double d=1.2│
└─────────────┴──────────┴─────────────┴─────────────┘
```

#### Variable Declaration Examples
```cpp
// Integer
int a = 123;
unsigned int ua = 456;  // Only positive values

// Character
char ch = 'a';          // Single quotes for char

// Boolean
bool flag = true;       // or false, 1, 0
bool isValid = 1;

// Floating point
float price = 99.99f;
double precision = 3.14159265;

// Finding size
cout << sizeof(a) << endl;  // Output: 4
```

#### Variable Naming Rules
```
✅ Valid Names:        ❌ Invalid Names:
   abc1                   1abc (starts with number)
   _variable              var-name (hyphen not allowed)
   myVariable             my variable (spaces not allowed)
   MAX_SIZE               #count (special chars not allowed)
```

---

### Memory Storage
- [2_first_prof_in_cpp.pdf](2_first_prof_in_cpp.pdf) [IMP] [HowDatatypeStoredInMemory]

#### Integer Storage (4 bytes = 32 bits)
```
int a = 8;

Binary of 8: 1000
Memory Layout (32 bits):
┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│0│1│0│0│0│
└─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
  ←────────────────── 28 zeros ──────────────────→ ←─ 1000 ─→
```

#### Character Storage (ASCII)
```cpp
char ch = 'a';
```
```
'a' → ASCII value 97 → Binary 01100001
Memory Layout (8 bits):
┌─┬─┬─┬─┬─┬─┬─┬─┐
│0│1│1│0│0│0│0│1│
└─┴─┴─┴─┴─┴─┴─┴─┘
```

#### Negative Number Storage (2's Complement)
```
For -5:
Step 1: Binary of 5 = 101
Step 2: Pad to 32 bits = 00000000000000000000000000000101
Step 3: 1's Complement = 11111111111111111111111111111010
Step 4: 2's Complement = 11111111111111111111111111111011
        (Add 1 to 1's complement)

First bit = 1 (indicates negative)
```

#### Signed vs Unsigned
```
Signed int:     -2³¹ to (2³¹ - 1)
Unsigned int:   0 to (2³² - 1)

┌─────────────┬─────────────┬─────────────┐
│    Type     │  Min Value  │  Max Value  │
├─────────────┼─────────────┼─────────────┤
│ signed int  │ -2,147,483,648 │ 2,147,483,647 │
│ unsigned int│      0      │ 4,294,967,295 │
└─────────────┴─────────────┴─────────────┘
```

---

### Type Casting

#### Implicit Type Casting
```cpp
// Character to Integer
int a = 'a';        // a = 97 (ASCII of 'a')
cout << a;          // Output: 97

// Integer to Character  
char ch = 98;       // ch = 'b' (ASCII 98)
cout << ch;         // Output: b

// Overflow Example
char ch1 = 123456;  // Only last 8 bits stored
cout << ch1;        // Output: @ (ASCII 64)
```

#### Data Type Conversion Chart
```
char → int → float → double
 ↑                     ↓
 └─── Explicit Cast ───┘
```

---

### Operators

#### Arithmetic Operators
```cpp
int a = 10, b = 3;

cout << a + b;    // Addition: 13
cout << a - b;    // Subtraction: 7  
cout << a * b;    // Multiplication: 30
cout << a / b;    // Division: 3 (integer division)
cout << a % b;    // Modulus: 1
```

#### Division Rules
```cpp
// Integer / Integer = Integer
int result1 = 2 / 5;        // result1 = 0

// Float / Integer = Float (if stored in float)
float result2 = 2.0 / 5;    // result2 = 0.4
float result3 = 2 / 5;      // result3 = 0 (still integer division)
```

#### Relational Operators
```cpp
int a = 5, b = 3;

cout << (a == b);    // Equal to: 0 (false)
cout << (a > b);     // Greater than: 1 (true)
cout << (a < b);     // Less than: 0 (false)
cout << (a >= b);    // Greater equal: 1 (true)
cout << (a <= b);    // Less equal: 0 (false)
cout << (a != b);    // Not equal: 1 (true)
```

#### Logical Operators
```cpp
bool condition1 = true, condition2 = false;

// AND (&&) - All conditions must be true
cout << (condition1 && condition2);  // 0 (false)

// OR (||) - At least one condition must be true  
cout << (condition1 || condition2);  // 1 (true)

// NOT (!) - Reverses the condition
cout << (!condition1);               // 0 (false)
cout << (!condition2);               // 1 (true)
```

#### Logical Operators Truth Table
```
┌─────┬─────┬─────────┬────────┬─────┐
│  A  │  B  │  A && B │ A || B │ !A  │
├─────┼─────┼─────────┼────────┼─────┤
│  T  │  T  │    T    │   T    │  F  │
│  T  │  F  │    F    │   T    │  F  │
│  F  │  T  │    F    │   T    │  T  │
│  F  │  F  │    F    │   F    │  T  │
└─────┴─────┴─────────┴────────┴─────┘
```

#### Assignment Operator
```cpp
int a = 5;      // Assigns value 5 to variable a
a = 10;         // Updates value of a to 10
```

---

### Key Takeaways

#### Program Structure
1. **#include <iostream>** - For input/output operations
2. **using namespace std** - Use standard namespace
3. **int main()** - Entry point of program
4. **cout** - For output, **endl** - For newline
5. **Semicolon ( ; )** - Statement terminator

#### Memory Management
- **int**: 4 bytes, stores integers
- **char**: 1 byte, stores single character (ASCII)
- **bool**: 1 byte, stores true/false
- **float**: 4 bytes, decimal numbers
- **double**: 8 bytes, high precision decimals

#### Important Rules
- Variable names can't start with numbers
- Integer division gives integer result
- Negative numbers stored using 2's complement
- Type casting happens automatically in mixed operations

---

