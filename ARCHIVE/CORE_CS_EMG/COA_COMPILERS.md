# COA_COMPILERS_SDE

- Top Interview Questions

> “C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows away your whole leg.” — Bjarne Stroustrup

- Author: [Kintsugi-Programmer](https://github.com/kintsugi-programmer)

> Disclaimer: The content presented here is a curated blend of my personal learning journey, experiences, open-source documentation, and invaluable knowledge gained from diverse sources. I do not claim sole ownership over all the material; this is a community-driven effort to learn, share, and grow together.

## Table of Contents
- [COA\_COMPILERS\_SDE](#coa_compilers_sde)
  - [Table of Contents](#table-of-contents)
  - [Compilers](#compilers)
    - [1. What is a Compiler?](#1-what-is-a-compiler)
    - [2. What is Compiler Design?](#2-what-is-compiler-design)
    - [3. Parts of the Compilation](#3-parts-of-the-compilation)
    - [4. What is an Assembler?](#4-what-is-an-assembler)
    - [5. Name Some Compiler Construction Tools](#5-name-some-compiler-construction-tools)
    - [6. What is Lexical Analysis?](#6-what-is-lexical-analysis)
    - [7. What is a Linker in Compiler Design?](#7-what-is-a-linker-in-compiler-design)
    - [8. What is Garbage Collection?](#8-what-is-garbage-collection)
    - [9. Name Various Storage Allocation Strategies](#9-name-various-storage-allocation-strategies)
    - [10. What is Loop Unrolling?](#10-what-is-loop-unrolling)
    - [11.  What is Tail Recursion, and How is it Optimized in Compilers?](#11--what-is-tail-recursion-and-how-is-it-optimized-in-compilers)
    - [12.  Difference Between a Compiler and an Interpreter](#12--difference-between-a-compiler-and-an-interpreter)
    - [13. Difference Between a Front-End and Back-End Compiler](#13-difference-between-a-front-end-and-back-end-compiler)
    - [14. Explain the Backend Phases of a Compiler](#14-explain-the-backend-phases-of-a-compiler)
    - [15.  What is Just-In-Time (JIT) Compiler?](#15--what-is-just-in-time-jit-compiler)
    - [16.  Name All Error Recovery Strategies](#16--name-all-error-recovery-strategies)
    - [18.  What is an Operator Precedence Parser?](#18--what-is-an-operator-precedence-parser)
    - [19.  Define Ambiguous Grammar](#19--define-ambiguous-grammar)
    - [19.  What is Profile-Guided Optimization?](#19--what-is-profile-guided-optimization)
    - [20.  What is a Compiler Front-End, and What Are Its Key Components?](#20--what-is-a-compiler-front-end-and-what-are-its-key-components)
  - [COA](#coa)
    - [1. **What is Computer Architecture?**](#1-what-is-computer-architecture)
    - [2. **What are the Three Categories of Computer Architecture?**](#2-what-are-the-three-categories-of-computer-architecture)
    - [3. **What are Some Components of a Microprocessor?**](#3-what-are-some-components-of-a-microprocessor)
    - [4. **What is MESI?**](#4-what-is-mesi)
    - [5. **What are the Different Hazards?**](#5-what-are-the-different-hazards)
    - [6. **What is Pipelining?**](#6-what-is-pipelining)
    - [7. **What is a Cache?**](#7-what-is-a-cache)
    - [8. **What is a Snooping Protocol?**](#8-what-is-a-snooping-protocol)
    - [9. **What are the Different Types of Interrupts in a Microprocessor System?**](#9-what-are-the-different-types-of-interrupts-in-a-microprocessor-system)
    - [10. **What is the Easiest Way to Determine Cache Locations in Which to Store Memory Blocks?**](#10-what-is-the-easiest-way-to-determine-cache-locations-in-which-to-store-memory-blocks)
    - [11. **What is Virtual Memory on a Computer?**](#11-what-is-virtual-memory-on-a-computer)
    - [12. **Can You State Some Common Rules of Assembly Language?**](#12-can-you-state-some-common-rules-of-assembly-language)
    - [13. **What is a RAID System?**](#13-what-is-a-raid-system)
    - [14. **What are the Two Hardware Methods to Establish a Priority? Explain Each Method.**](#14-what-are-the-two-hardware-methods-to-establish-a-priority-explain-each-method)
    - [15. **What are Flip-Flops?**](#15-what-are-flip-flops)
    - [16. **What’s the Difference Between Interrupt Service Routine and Subroutine?**](#16-whats-the-difference-between-interrupt-service-routine-and-subroutine)
    - [17. **What are the Different Types of Fields That Are Part of an Instruction?**](#17-what-are-the-different-types-of-fields-that-are-part-of-an-instruction)
    - [18. **What are the Steps Involved in an Instruction Cycle?**](#18-what-are-the-steps-involved-in-an-instruction-cycle)
    - [19. **What are the Five Stages in a DLX Pipeline?**](#19-what-are-the-five-stages-in-a-dlx-pipeline)
    - [20. **What are the Types of Micro-Operations?**](#20-what-are-the-types-of-micro-operations)
    - [21. **What is the Write-Through Method?**](#21-what-is-the-write-through-method)
    - [22. **What is Associate Mapping?**](#22-what-is-associate-mapping)
    - [23. **What Does Wait State Mean?**](#23-what-does-wait-state-mean)
    - [24. **What is a DMA?**](#24-what-is-a-dma)
    - [25. **What is Horizontal Microcode?**](#25-what-is-horizontal-microcode)

## Compilers

### 1. What is a Compiler?

A compiler is a software program that translates code written in a high-level programming language (e.g., C, C++, Java) into another form, typically low-level machine code or an intermediate language. The translated code should be functionally equivalent to the original, meaning that when executed, it should perform the same operations. The process of compilation consists of multiple stages like lexical analysis, syntax analysis, semantic analysis, optimization, and code generation.

Key Points:
- Converts source code to machine code.
- Detects and reports errors during the compilation process.
- Produces an executable if no errors are found.

### 2. What is Compiler Design?

Compiler Design focuses on the theory and practice of building compilers that can transform code from one language to another. This includes handling the complex process of converting high-level programming languages into machine code, while also ensuring error detection and optimization. The design includes both the front-end (which handles language parsing and analysis) and back-end (which handles optimization and code generation).

Key Points:
- Involves phases like lexical, syntax, and semantic analysis.
- Incorporates error detection and recovery mechanisms.
- Includes optimizations for better code performance and efficiency.

### 3. Parts of the Compilation

The process of compilation is divided into several stages, each playing a critical role in transforming source code into executable machine code.

- **Lexical Analysis:**
  The source code is broken down into tokens (smallest units like keywords, operators, and identifiers).
- **Syntax Analysis:**
  The grammar of the code is checked, ensuring that the token sequence follows the rules of the language. An abstract syntax tree (AST) is generated.
- **Semantic Analysis:**
  This phase ensures that the code is logically correct by performing type checking, scope analysis, and identifying errors like undeclared variables.
- **Code Optimization:**
  The generated code is improved for better performance, reducing file size, increasing execution speed, and lowering resource consumption.
- **Code Generation:**
  Converts the optimized intermediate representation into machine code that the target processor can execute.

### 4. What is an Assembler?

An assembler is a program that translates assembly language into machine code. Assembly language is a low-level programming language that is easier for humans to write and understand than raw machine code but is still closely tied to the underlying hardware architecture.

Key Points:
- Converts symbolic instructions (like MOV, ADD) into machine-readable binary.
- The resulting machine code can be directly executed by the CPU.

### 5. Name Some Compiler Construction Tools

Compiler construction is aided by several specialized tools that automate different phases of the compilation process:

- **Parser Generators:** Generate parsers for syntax analysis (e.g., YACC, Bison).
- **Scanner Generators:** Generate lexical analyzers (e.g., Lex).
- **Syntax-Directed Translation Engines:** Automate the creation of intermediate code from parse trees.
- **Automatic Code Generators:** Help in generating machine code from intermediate representations.
- **Data-Flow Engines:** Perform analysis on data flow to optimize the code.

### 6. What is Lexical Analysis?

Lexical Analysis is the first phase of the compilation process, where the source code is read and divided into tokens—the basic units like keywords, operators, and identifiers. The lexical analyzer (also called a scanner) is responsible for this transformation.

Key Points:
- Converts source code into a stream of tokens.
- Helps the parser identify the structure of the code.
- Removes unnecessary elements like comments and whitespace.

### 7. What is a Linker in Compiler Design?

A linker is a system utility that takes one or more object files generated by the compiler and combines them into a single executable file. It also resolves any external references to libraries or other code modules, ensuring that the final program can run correctly.

Key Points:
- Combines object files into a single executable.
- Resolves references between multiple object modules.
- Links external libraries with the final program.

### 8. What is Garbage Collection?

Garbage Collection is the process of automatically reclaiming memory that a program no longer needs. In compilers, garbage collection helps prevent memory leaks and other issues related to dynamic memory management.

Key Points:
- Automatically frees memory that is no longer in use.
- Essential for managing memory in languages with dynamic allocation.
- Helps prevent memory leaks and other memory-related errors.

### 9. Name Various Storage Allocation Strategies

There are three main storage allocation strategies that compilers can use to manage memory:

- **Static Allocation:** Memory is allocated at compile-time and cannot be changed during program execution.
- **Stack Allocation:** Memory is managed using a stack, typically for function calls and local variables.
- **Heap Allocation:** Memory is allocated dynamically at runtime, usually for objects that need to persist across function calls.

### 10. What is Loop Unrolling?

Loop Unrolling is an optimization technique where the body of a loop is repeated multiple times within a single iteration to reduce the overhead of the loop control mechanism. This can enhance performance by decreasing the number of loop control instructions.

Key Points:
- Reduces the overhead of loop control (like incrementing a counter).
- Enhances performance by decreasing the number of iterations.
- Commonly used in performance-critical applications.

### 11.  What is Tail Recursion, and How is it Optimized in Compilers?

Tail Recursion occurs when a function’s last action is a recursive call to itself. Compilers can optimize tail recursion using a technique called tail call optimization, which replaces the recursive call with a jump to the function’s beginning, thus reducing memory usage and improving execution speed.

Key Points:
- Tail recursion happens when a function’s last operation is a recursive call.
- Tail call optimization replaces the recursion with iteration to improve efficiency.
- Reduces memory usage by avoiding deep recursion stacks.

### 12.  Difference Between a Compiler and an Interpreter

| Compiler | Interpreter |
|----------|-------------|
| Translates the entire program at once. | Translates and executes code line by line. |
| Produces an executable file. | No executable file is produced. |
| Faster execution after compilation. | Slower execution due to line-by-line interpretation. |

### 13. Difference Between a Front-End and Back-End Compiler

**Front-End:** The front-end of the compiler is responsible for lexical analysis, syntax analysis, and semantic analysis. It produces an intermediate representation of the source code.

**Back-End:** The back-end of the compiler takes the intermediate representation and translates it into machine code. It performs optimizations to improve performance before generating the final executable.

### 14. Explain the Backend Phases of a Compiler

The backend of a compiler transforms the intermediate representation (e.g., abstract syntax tree or three-address code) into machine code. The backend focuses on optimization, improving code execution speed, reducing memory usage, and generating efficient machine code.

Key Backend Phases:
- **Intermediate Code Optimization:** Improves the intermediate code by eliminating unnecessary operations.
- **Machine Code Generation:** Converts the optimized code into machine instructions that the CPU can execute.
- **Register Allocation:** Maps variables and temporary values to CPU registers for faster access.

### 15.  What is Just-In-Time (JIT) Compiler?

A Just-In-Time (JIT) compiler is a dynamic compiler that translates intermediate code (like Java bytecode) into machine code during program execution. This allows optimizations to be performed at runtime, improving the performance of the code as it runs.

Key Points:
- Converts intermediate code into machine code at runtime.
- Allows processor-specific optimizations like instruction pipelining.
- Commonly used in languages like Java and C#.

### 16.  Name All Error Recovery Strategies

There are several error recovery strategies used in compilers to handle syntax and semantic errors during compilation:

- **Panic Mode Recovery:** The parser discards input until it finds a synchronizing token, allowing it to resume parsing.
- **Statement Mode Recovery:** Attempts to repair the smallest part of the code to continue parsing.
- **Error Productions:** Adds error rules to the grammar to continue parsing even after errors.
- **Global Correction:** Tries to globally fix the input by making a minimal number of changes.
- **Symbol Table:** Used for semantic errors, where type conversions are automatically performed if operands are incompatible.

### 18.  What is an Operator Precedence Parser?

An Operator Precedence Parser is a type of bottom-up parser used to parse expressions that contain operators. It resolves the precedence of operators (e.g., * has higher precedence than +) and produces an intermediate representation by pushing and popping operators and operands from a stack.

Key Points:
- Used for bottom-up parsing of expressions.
- Maintains a stack of operators and operands.
- Resolves operator precedence to produce a correct intermediate representation.

### 19.  Define Ambiguous Grammar

A grammar is said to be ambiguous if there is more than one valid parse tree for a single input string. In other words, the same string can be derived in multiple ways using different derivation paths.

Key Points:
- Ambiguous grammar has multiple parse trees for the same sentence.
- Both leftmost and rightmost derivations can yield different parse trees.
- Compilers avoid ambiguous grammars as they can lead to inconsistencies.

### 19.  What is Profile-Guided Optimization?

Profile-Guided Optimization (PGO) is a compiler optimization technique that uses runtime profiling data to make optimization decisions. By analyzing which parts of the program are executed most frequently, the compiler can focus optimizations on those areas, improving overall performance.

Key Points:
- Uses runtime data to optimize frequently executed code.
- Focuses on areas that have the most performance impact.
- Helps improve program execution speed by tailoring optimizations based on actual usage.

### 20.  What is a Compiler Front-End, and What Are Its Key Components?

The compiler front-end is responsible for analyzing the source code and transforming it into an intermediate representation. The key components of the front-end include:

- **Lexer (Lexical Analyzer):** Breaks the source code into tokens.
- **Parser:** Builds the abstract syntax tree (AST) based on the grammar rules.
- **Semantic Analyzer:** Checks for semantic consistency (e.g., type checking, scope rules).
- **Type Checker:** Ensures that variables are used with correct types.

## COA

### 1. **What is Computer Architecture?**  

Computer Architecture refers to the conceptual design and fundamental operational structure of a computer system. It describes how the components of a computer system, such as the CPU, memory, and input/output devices, are organized and how they interact to execute instructions and perform computations. This includes details like instruction set architecture (ISA), data processing techniques, and performance enhancements like pipelining and caching.

Example: Modern architectures like x86, ARM, and RISC-V define how processors execute instructions, manage memory, and handle peripheral devices.

### 2. **What are the Three Categories of Computer Architecture?**  

- **Instruction Set Architecture (ISA):** Defines the machine language that a computer can understand, including the instruction set, word size, memory addressing modes, and processor registers.  
Example: x86, ARM, RISC-V instruction sets.  
- **Microarchitecture:** Describes the implementation of the ISA in hardware, focusing on the processor design, such as how instructions are executed (e.g., pipelining, superscalar execution).  
Example: Intel’s Core i7 microarchitecture implements the x86 ISA with advanced features like branch prediction and out-of-order execution.  
- **System Design:** Deals with the computer system as a whole, including the integration of the processor, memory hierarchy, I/O devices, and interconnections.  
Example: How RAM, cache, and hard disks interact with the CPU.

### 3. **What are Some Components of a Microprocessor?** 
 
- **Arithmetic Logic Unit (ALU):** Performs arithmetic and logical operations.  
- **Control Unit:** Directs the operation of the processor, telling it how to respond to program instructions.  
- **Registers:** Small, fast storage locations inside the CPU used to store data temporarily.  
- **Cache:** Small-sized volatile memory used for storing frequently accessed data to speed up operations.  
- **Program Counter (PC):** Holds the address of the next instruction to be executed.  
- **Instruction Decoder:** Decodes the instructions fetched from memory into control signals.  
Example: In the Intel Core processors, the microprocessor includes multiple ALUs, registers, and multiple levels of cache for fast data retrieval.

### 4. **What is MESI?**  

MESI (Modified, Exclusive, Shared, Invalid) is a cache coherence protocol used in multiprocessor systems to ensure that multiple caches maintain consistency. Each block in the cache can be in one of four states:  
- **Modified:** The block has been modified in cache and is not in sync with memory.  
- **Exclusive:** The block is in the cache and matches the value in memory but is not shared with other caches.  
- **Shared:** The block may be shared with other caches and matches the value in memory.  
- **Invalid:** The block is invalid and does not contain meaningful data.  
Example: If a cache line is in the Modified state in one processor’s cache, it ensures that no other processor's cache has the most up-to-date value.

### 5. **What are the Different Hazards?** 
 
Hazards are situations that prevent the next instruction in a pipeline from executing during its designated clock cycle. The main types of hazards are:  
- **Data Hazards:** Occur when instructions depend on the results of previous instructions still in the pipeline.  
Example: Instruction 2 uses the result of Instruction 1, which is still being computed.  
- **Control Hazards:** Arise from branch instructions that affect the flow of execution.  
Example: A mispredicted branch in a pipeline can lead to pipeline stalls.  
- **Structural Hazards:** Occur when hardware resources required by an instruction are already in use by another instruction.  
Example: Two instructions competing for the same memory port.

### 6. **What is Pipelining?**  

Pipelining is a technique used in CPU design to increase instruction throughput by dividing the instruction execution process into separate stages. Each stage completes a part of the instruction, allowing multiple instructions to be processed simultaneously at different stages.

**Stages in a Simple Pipeline:**  
- **Fetch:** Retrieve the instruction from memory.  
- **Decode:** Interpret the instruction and gather operands.  
- **Execute:** Perform the operation specified by the instruction.  
- **Memory:** Access memory if needed (load/store).  
- **Writeback:** Store the result in a register.  

Example: A 5-stage pipeline can execute one instruction per cycle after the pipeline is filled, even though each instruction individually takes multiple cycles to complete.

### 7. **What is a Cache?**  

A cache is a smaller, faster type of memory located closer to the CPU that stores copies of frequently accessed data from main memory. Caches help reduce the time needed to access memory by storing data that the CPU expects to use again.

**Types of Cache:**  
- **L1 Cache:** Closest to the CPU, very small but extremely fast.  
- **L2 Cache:** Larger than L1, but slower.  
- **L3 Cache:** Shared across cores, larger but slower compared to L1 and L2.  

Example: When a processor needs data, it first checks the L1 cache, then the L2, and finally the main memory if it isn’t found in the caches.

### 8. **What is a Snooping Protocol?**  

A snooping protocol is a cache coherence mechanism in multiprocessor systems where each cache monitors the data access patterns on the system’s bus. If a processor attempts to modify a memory location, other caches with a copy of that memory location are notified and can invalidate or update their cache accordingly.

Example: MESI protocol uses snooping to ensure that caches in different processors are consistent with the shared memory.

### 9. **What are the Different Types of Interrupts in a Microprocessor System?**  

Interrupts are signals that indicate an event requiring the CPU’s attention. There are several types:  
- **Hardware Interrupts:** Triggered by external devices like keyboards, mice, or network cards.  
- **Software Interrupts:** Generated by programs to request services from the operating system.  
- **Maskable Interrupts:** Can be disabled or “masked” by the processor.  
- **Non-maskable Interrupts (NMI):** Cannot be disabled and are used for critical events like hardware failures.

### 10. **What is the Easiest Way to Determine Cache Locations in Which to Store Memory Blocks?**  

The easiest way to determine cache locations for storing memory blocks is through cache mapping techniques:  
- **Direct Mapping:** Each block of memory maps to exactly one cache location.  
- **Fully Associative Mapping:** A memory block can be placed in any cache line.  
- **Set-Associative Mapping:** Combines both, allowing a block to be placed in any one of several predefined cache locations (a set).

### 11. **What is Virtual Memory on a Computer?**  

Virtual memory is a memory management technique that allows a computer to compensate for shortages of physical memory by temporarily transferring data from RAM to disk storage. It gives the illusion of having a larger main memory by using disk space to store parts of programs and data.

Example: When running multiple applications, the system may swap parts of inactive applications to disk, freeing up RAM for active tasks.

### 12. **Can You State Some Common Rules of Assembly Language?**  

- Instructions must follow the specific syntax of the processor’s architecture.  
- Registers are used for most operations instead of direct memory access.  
- Labels are used to mark memory locations or jumps in the code.  
- Comments can be included, typically after a semicolon ( ; ).  
- Directives (e.g., .data, .text) are used to define data sections or code sections.

### 13. **What is a RAID System?**  

RAID (Redundant Array of Independent Disks) is a data storage technology that combines multiple hard drives into a single unit for redundancy, performance improvement, or both.  
- **RAID 0:** Striped array with no redundancy, improving performance.  
- **RAID 1:** Mirroring for redundancy.  
- **RAID 5:** Striping with parity for fault tolerance.  
- **RAID 6:** Like RAID 5, but with extra parity for greater fault tolerance.

### 14. **What are the Two Hardware Methods to Establish a Priority? Explain Each Method.**  

- **Daisy Chaining:** Devices are connected in a linear chain, with each device having control over the next one. The first device has the highest priority, and control passes down the chain.  
- **Parallel Priority Interrupt:** Each device is connected to a priority encoder that assigns priorities based on the highest-priority device that requests an interrupt. The priority encoder decides which interrupt is handled first.

### 15. **What are Flip-Flops?**  

Flip-flops are basic memory elements used to store binary data in digital circuits. A flip-flop has two states (0 and 1) and can maintain its state until it is triggered to change by a clock signal.  
- **SR Flip-Flop:** Stores a single bit, with set and reset inputs.  
- **D Flip-Flop:** Stores data on a clock edge.  
- **JK Flip-Flop:** A more versatile flip-flop that avoids invalid states.  
- **T Flip-Flop:** Toggles its state with every clock pulse.

### 16. **What’s the Difference Between Interrupt Service Routine and Subroutine?**  

- **Interrupt Service Routine (ISR):** A special function that is executed when an interrupt occurs. It is triggered by external or internal events, and the CPU automatically saves the current state before executing the ISR.  
- **Subroutine:** A user-defined function that is called within a program. Subroutines are invoked by the program itself, and the return address is stored in the stack.

### 17. **What are the Different Types of Fields That Are Part of an Instruction?**  

- **Opcode:** Specifies the operation to be performed.  
- **Operand:** Specifies the data or the address of the data on which the operation is to be performed.  
- **Mode:** Defines how the operands should be interpreted (e.g., immediate, direct, indirect addressing).  
- **Register:** Specifies which registers are involved in the instruction.

### 18. **What are the Steps Involved in an Instruction Cycle?**  

- **Fetch:** The CPU fetches the instruction from memory.  
- **Decode:** The instruction is decoded to understand the operation and operands.  
- **Execute:** The CPU executes the instruction.  
- **Writeback:** The result is written back to the appropriate location (register or memory).

### 19. **What are the Five Stages in a DLX Pipeline?**  

- **Instruction Fetch (IF):** Fetches the instruction from memory.  
- **Instruction Decode (ID):** Decodes the instruction and reads registers.  
- **Execute (EX):** Executes the operation.  
- **Memory Access (MEM):** Accesses memory if necessary.  
- **Write Back (WB):** Writes the result back to the register.

### 20. **What are the Types of Micro-Operations?** 
 
- **Register Transfer:** Moving data between registers.  
- **Arithmetic:** Performing operations like addition or subtraction.  
- **Logic:** Performing logical operations (AND, OR, NOT).  
- **Shift:** Shifting data left or right in a register.

### 21. **What is the Write-Through Method?**
  
The write-through method ensures that every write to the cache is immediately written to the main memory. This maintains consistency between cache and memory but may result in slower performance due to frequent memory writes.

### 22. **What is Associate Mapping?**  

Associative mapping allows a memory block to be stored in any cache line rather than a specific one. This provides flexibility and increases cache hit rates but requires more complex search mechanisms within the cache.

### 23. **What Does Wait State Mean?**  

A wait state is a delay inserted in the CPU’s execution cycle to allow slower devices (e.g., memory) to complete data transfers. It temporarily halts the CPU to synchronize with the slower components.

### 24. **What is a DMA?**

Direct Memory Access (DMA) is a method that allows peripherals to directly transfer data to or from memory without involving the CPU, freeing the CPU to perform other tasks during data transfer.

### 25. **What is Horizontal Microcode?** 
 
Horizontal microcode specifies control signals at a very fine granularity. It provides each control signal explicitly, allowing greater flexibility and parallelism in controlling the processor’s internal components, but it requires more bits per microinstruction compared to vertical microcode.

---
End-of-File

The [god-stack](https://github.com/kintsugi-programmer/god-stack) repository, authored by Kintsugi-Programmer, is less a comprehensive resource and more an Artifact of Continuous Research and Deep Inquiry into Computer Science and Software Engineering. It serves as a transparent ledger of the author's relentless pursuit of mastery, from the foundational algorithms to modern full-stack implementation.

> Made with 💚 [Kintsugi-Programmer](https://github.com/kintsugi-programmer)