# A Quantitative Aptitude
## A1 Numbers
### Numbers Notes

---

### Overview

Numbers are the basic units of mathematics. The following notes cover types of numbers, important properties, divisibility rules, remainder rules, division theorems, and cyclicity patterns. All content is extracted and cleaned from the provided source, with no loss of information.

---

### Types of Numbers

#### Integers

Numbers whose fractional part is 0.
Examples:
-3, -2, 1, 0, 10, 100

#### Natural Numbers

Counting numbers.
Examples:
1, 2, 3, 4, 5, 6, ...
All integers greater than 0.

#### Whole Numbers

All natural numbers plus 0.

#### Prime Numbers

Numbers having only two distinct factors:
1 and the number itself.
Examples:
2, 3, 53, 67, 191

#### Composite Numbers

Numbers greater than 1 that are not prime.
Examples:
4, 60, 91, 100

---

### Important Points on Prime Numbers

* 0 and 1 are neither prime nor composite.
* 2 is the only even prime number.
* There are 25 prime numbers less than 100:

2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

#### Checking if a Number p is Prime

1. Find smallest natural number n such that n² >= p.
2. Check if p is divisible by any prime number ≤ n.
3. If not divisible by any such prime, p is prime; otherwise not.

#### Co-primes

Two numbers a and b are co-prime if HCF(a, b) = 1.

#### Number of Divisors of n

If
n = p1^e1 × p2^e2 × ... × pk^ek
then
number of divisors = (e1 + 1)(e2 + 1)...(ek + 1)

Example:
200 = 2^3 × 5^2
Number of divisors = (3 + 1)(2 + 1) = 12

---

### Divisibility Rules

#### Summary Table

| Number | Rule                                                                              | Example                       |
| ------ | --------------------------------------------------------------------------------- | ----------------------------- |
| 2      | Last digit is even                                                                | 124 → last digit 4, divisible |
| 3      | Sum of digits divisible by 3                                                      | 12321 → 1+2+3+2+1=9           |
| 4      | Last two digits divisible by 4                                                    | 1232 → 32 divisible           |
| 5      | Last digit is 0 or 5                                                              | 85 → last digit 5             |
| 6      | Divisible by both 2 and 3                                                         | 114 → 4 is even, 1+1+4=6      |
| 7      | Remove last digit, double it, subtract                                            | Example below                 |
| 8      | Last three digits divisible by 8                                                  | 1232 → 232 divisible          |
| 9      | Sum of digits divisible by 9                                                      | 12321 → 9                     |
| 11     | Difference between sum of digits at odd and even positions is 0 or multiple of 11 | 121 → (1+1)-2=0               |

#### Detailed Example: Divisibility by 7

Number: 196
Steps:

1. Remove last digit: 19
2. Double last digit: 6×2 = 12
3. Subtract: 19 - 12 = 7
4. 7 is divisible by 7 → 196 divisible by 7

---

### Other Useful Rules

* Repeating a three-digit number twice creates a six-digit number divisible by 7, 11, and 13.
* A number of the form 2^N has exactly N+1 divisors.
  Example:
  4 = 2² → divisors = 3 (1,2,4)

#### Co-prime Divisibility Rule

If p and q are co-prime and n is divisible by both p and q, then n is divisible by p×q.

Example:
48 divisible by 3 and 8 → also divisible by 24.

If p and q are not co-prime, the above does not necessarily hold.
Example:
144 divisible by 8 and 12, but not divisible by 96.

---

### Remainder Rules

| Divisor | Rule                                                | Example                  |
| ------- | --------------------------------------------------- | ------------------------ |
| 2       | Last digit odd → remainder 1; even → 0              | 37 → remainder 1         |
| 3       | Sum digits, divide sum by 3                         | 23 → 2+3=5 → remainder 2 |
| 4       | Use last two digits                                 | 123 → 23 mod 4 = 3       |
| 5       | Last digit mod 5                                    | 32 → remainder = 2       |
| 6       | Apply rules for 2 and 3                             | 35 → remainder 5         |
| 7       | Break into groups of 3; use modulo; alternating sum | Example below            |
| 8       | Last three digits                                   | 1476 → 476 mod 8 = 4     |
| 9       | Sum digits                                          | 1234 → 10 mod 9 = 1      |

#### Example: Remainder when Dividing by 7

Number: 198

Compute using powers of 10 mod 7:
10² mod 7 = 2
10¹ mod 7 = 3
10⁰ mod 7 = 1

Calculation:
1*2 + 9*3 + 8*1 = 37
37 mod 7 = 2

Remainder = 2

---

### Division Theorem

Dividend = Divisor × Quotient + Remainder

Rules:

1. x^n - a^n is divisible by (x - a) for all n
   Example:
   n=2 → (x - a)(x + a)
   n=3 → (x - a)(x² + a² + xa)

2. x^n - a^n is divisible by (x + a) for even n
   Example:
   n=2 → divisible
   n=3 → not divisible

3. x^n + a^n is divisible by (x + a) for odd n
   Example:
   n=3 → (x + a)(x² + a² - xa)

---

### Cyclicity of Numbers

The cyclicity relates to repetition patterns in unit digits when numbers are raised to powers.

#### Digits with Fixed Unit Digits

Digits 0, 1, 5, 6 always produce the same unit digit.

Examples:
5² = 25 → unit digit 5
1⁶ = 1 → unit digit 1
0⁴ = 0 → unit digit 0
6³ = 216 → unit digit 6

#### Digits with Two-Cycle Patterns

Digits 4 and 9 repeat every 2 powers.

Examples:
4² = 16 → 6
4³ = 64 → 4
9² = 81 → 1
9³ = 729 → 9

#### Digits with Four-Cycle Patterns

| Digit | Cycle      |
| ----- | ---------- |
| 2     | 2, 4, 8, 6 |
| 3     | 3, 9, 7, 1 |
| 7     | 7, 9, 3, 1 |
| 8     | 8, 4, 2, 6 |

---
### Numbers – Solved Questions and Answers
---

### Overview

A number is a collection of digits arranged in a specific order. Numbers may be formed with or without repeating digits.
The following are solved questions related to number theory and aptitude.

---

### Question 1

**When a number is successively divided by 35, 45, and 55, we get 18, 28, and 38 as remainders respectively. What is the smallest such number?**

#### Solution

* Compute LCM of 35, 45, 55:
  LCM = 3465
* Find common remainder:
  35 - 18 = 17
  45 - 28 = 17
  55 - 38 = 17
  Common remainder = 17
* Required number = 3465 − 17 = **3448**

**Answer: 3448**

---

### Question 2

**How many four-digit numbers are divisible by 7?**

#### Solution

1. Smallest 4-digit number: 1000
   1000 ÷ 7 ≈ 142.857 → next integer 143 → first multiple = 143×7 = 1001
2. Largest 4-digit number: 9999
   9999 ÷ 7 ≈ 1428.428 → integer part 1428 → last multiple = 1428×7 = 9996

Sequence: 1001, 1008, 1015, …, 9996

* a1 = 1001
* an = 9996
* d = 7

Use formula:
an = a1 + (n−1)d
9996 = 1001 + (n−1)7
8995 = (n−1)7
n−1 = 8995 ÷ 7 = 1285
n = 1286

**Answer: 1286**

---

### Question 3

**Find maximum value of B in:**

```
  1 2 B
+ B 4 C
+ C 6 7
--------
  1 0 3 5
```

#### Solution

Left side is interpreted as:

```
  1 2 B
+ B 4 C
+ C 6 7
--------
 10 3 5
```

From the first column:
B + C = 8

Check possibility B + C = 18 → only if B = C = 9
Then: 129 + 949 + 967 = 2045 (not 1035)

Thus B + C = 8
To maximize B → set C = 0 → B = 8

Verify:

```
  1 2 8
+ 8 4 0
+ 0 6 7
--------
 10 3 5
```

Correct.

**Answer: B = 8**

---

### Question 4

**Which of the following are prime numbers?**
(i) 247
(ii) 397
(iii) 423

#### Solution

(i) 16² = 256 > 247 → check primes below 16: 2,3,5,7,11,13
247 is divisible by 13 → composite

(ii) 20² = 400 > 397 → check primes below 20
397 is not divisible by any → prime

(iii) 21² = 441 > 423 → check primes below 21
423 divisible by 3 → composite

**Answer: Only 397 is prime**

---

### Question 5

**Find the unit’s digit of (17)^153 × (31)^62.**

#### Solution

Unit’s digit depends on 7^153 and 1^62.
Cycle of 7: 7, 9, 3, 1 → cycle length 4

153 ÷ 4 → remainder 1
So 7^153 has unit digit = 7

31^62 → ends in 1 → unit digit = 1

Multiply: 7 × 1 = 7

**Answer: 7**

---

### Question 6

**Find the unit’s digit of (17)^153 + (31)^62.**

Same logic as above.
7^153 → unit digit = 7
31^62 → unit digit = 1

Add: 7 + 1 = 8

**Answer: 8**

---

### Question 7

**Find total number of prime factors in (14)^11 × (7)^2 × (11)^3.**

#### Solution

Expand:
14 = 2 × 7

(14)^11 × (7)^2 × (11)^3
= (2×7)^11 × 7^2 × 11^3
= 2^11 × 7^11 × 7^2 × 11^3
= 2^11 × 7^13 × 11^3

Total prime factors = 11 + 13 + 3 = **27**

**Answer: 27**

---

### Question 8

**Which digits should replace * and # in 12386*# so that it is divisible by 8 and 5?**

#### Solution

For divisibility by 5 → last digit (#) must be 0 or 5.
Number ending in 5 cannot be divisible by 8 → # = 0

Now last 3 digits = 6*0
This is divisible by 8 when * is 0, 4, or 8.

**Answer: * = 0 or 4 or 8, # = 0**

---

### Question 9

**Least number to subtract from 9999 to make it divisible by 19.**

9999 ÷ 19 → remainder = 5
Subtract remainder → 5

**Answer: 5**

---

### Question 10

**Least number to add to 9999 to make it divisible by 19.**

Remainder = 5
Add = 19 − 5 = 14

**Answer: 14**

---

### Question 11

**A number gives remainder 47 when divided by 340. What is remainder when divided by 17?**

Number = 340a + 47
= 17(20a) + 17(2) + 13
= 17(20a + 2) + 13

Remainder = 13

**Answer: 13**

---

### Question 12

**Find remainder when 3^21 is divided by 5.**

3⁴ = 81 → unit digit = 1
3²⁰ → unit digit = 1
3²¹ = 1×3 → unit digit = 3
3 mod 5 = 3

**Answer: 3**

---

## A2 Work
---

### Work, Wages and Time

Work refers to the physical or mental effort exerted by an individual to produce goods or provide services in exchange for wages or other benefits.

Wage is the monetary payment an employee receives for their labor, typically calculated on an hourly, daily, or piece-rate basis.

Time refers to the duration or period required to complete a specific task or amount of work.

This document provides comprehensive explanations, formulas, and examples.

---

### Fundamental Concepts and Formulas

#### Basic Work–Time Relation

* If a person can do a piece of work in n days, the work done in one day is 1/n.
* If a person does 1/n of the work in one day, the person will require n days to finish the full work.

#### Work Equivalence

Work can be expressed as:

```
Work done = Rate of work × Time
```

If total work remains constant:

```
R1 × T1 = R2 × T2
```

#### Rate of Work in Terms of Workers and Days

```
Rate of Work = Number of Workers × Number of Days
```

Thus:

```
M1 × D1 × T1 = M2 × D2 × T2
```

Where:

* M = Number of workers
* D = Number of days
* R = Rate of work

---

### Efficiency-Based Work Formula

Used when comparing work and efficiency:

```
M × T × D × H × E / W  =  M2 × D2 × H2 × E2 / W2
```

Where:

* M = Number of workers
* D = Number of days
* H = Number of working hours per day
* E = Efficiency of workers
* W = Units of work completed

Total work:

```
Total work = Number of Days × Efficiency
```

#### Observations

* Increasing workers (M) increases total work proportionally.
* Increasing number of days (D) increases total work proportionally.
* Increasing hours per day (H) increases work output.
* Increasing efficiency (E) increases output.

---

### Example

**A painter and a helper**

A painter can complete a job in 6 days alone. A helper is twice as efficient.

**Calculations:**

* Painter's rate:

  ```
  1/6 of the job per day
  ```

* Helper's rate:

  ```
  2 × (1/6) = 1/3 per day
  ```

* Combined rate:

  ```
  1/6 + 1/3 = 1/2 per day
  ```

* Time required when working together:

  ```
  T = 1 / (1/2) = 2 days
  ```

**Conclusion:**

They finish the job in 2 days.

---

### Shortcut Tricks for Work Problems

These tricks help with:

* Finding efficiency of a person
* Calculating time taken by an individual
* Calculating time taken by a group
* Work done by one person in a given time
* Work done by a group in a given time

---

### Shortcut: Time Taken by Two Individuals (A and B)

#### Given:

* A takes 20 days
* B takes 30 days

#### Efficiency:

* Efficiency is taken as work/day.
* A's efficiency: 3 units/day
* B's efficiency: 2 units/day

#### Total Work:

```
LCM(20, 30) = 60 units
```

#### Combined Work Time:

```
Time = Total Work / (Efficiency of A + Efficiency of B)
Time = 60 / (3 + 2) = 12 days
```

---

### Shortcut: Combined Work Rate of A, B, C

#### Given Days and Efficiencies:

| Group | Days | Efficiency (units/day) |
| ----- | ---- | ---------------------- |
| A + B | 18   | 4                      |
| A + B | 24   | 3                      |
| A + B | 36   | 2                      |

#### Total Work:

```
LCM(18, 24, 36) = 72 units
```

#### Individual Contributions:

* A's efficiency:

  ```
  1.5 units/day  
  Time taken = 72 / 1.5 = 48 days
  ```

* B's efficiency:

  ```
  2.5 units/day  
  Time taken = 72 / 2.5 = 28.8 days
  ```

* C's efficiency:

  ```
  0.5 units/day  
  Time taken = 72 / 0.5 = 144 days
  ```

---
### Work and Wages – Solved Questions and Answers

Work refers to the amount of task or job done by an individual or group, measured in terms of time and efficiency.
Wage refers to the payment given to workers based on their work efficiency, time spent, or output produced.

The following solved questions help in learning and practicing Work and Wages concepts.

---

### Question 1

**To complete the work, Person A takes 10 days and Person B takes 15 days. If they work together, how much time will they take to complete the work?**

#### Solution

**Method 1:**
A's one-day work = 1/10
B's one-day work = 1/15
Total work done in one day = 1/10 + 1/15 = 1/6
Therefore, working together, they can complete the work in **6 days**.

**Method 2 (Short Method):**
Let total work = LCM(10, 15) = 30 units
A's efficiency = 30/10 = 3 units/day
B's efficiency = 30/15 = 2 units/day
Combined efficiency = 3 + 2 = 5 units/day
Time required = 30 / 5 = **6 days**

---

### Question 2

**A and B working together complete an assignment in 4 days. A alone takes 12 days. In how many days can B alone do the assignment?**

#### Solution

Total work = LCM(4, 12) = 12 units
A's efficiency = 12/12 = 1 unit/day
Combined efficiency (A+B) = 12/4 = 3 units/day
B's efficiency = 3 − 1 = 2 units/day
Time required by B = 12 / 2 = **6 days**

---

### Question 3

**A and B complete task in 18 days. B and C in 24 days. A and C in 36 days. Find the time taken by A, B, and C together and individually.**

#### Solution

Total work = LCM(18, 24, 36) = 72 units

Efficiencies:
A + B = 72/18 = 4 units/day
B + C = 72/24 = 3 units/day
A + C = 72/36 = 2 units/day

Summing all:

( A + B ) + ( B + C ) + ( A + C ) = 4 + 3 + 2 = 9
This equals 2 × (A + B + C)

So:
2 × (A + B + C) = 9
A + B + C = 4.5 units/day

Time required together = 72 / 4.5 = **16 days**

#### Individual Efficiencies

A = (A + B + C) − (B + C) = 4.5 − 3 = 1.5 units/day
B = 4.5 − 2 = 2.5 units/day
C = 4.5 − 4 = 0.5 units/day

#### Individual Times

A = 72 / 1.5 = **48 days**
B = 72 / 2.5 = **28.8 days**
C = 72 / 0.5 = **144 days**

---

### Question 4

**A and B complete work in 18 days. A is twice as efficient as B. Find their individual times.**

#### Solution

Let B’s efficiency = 1 unit/day
A’s efficiency = 2 units/day
Combined = 3 units/day

Total work = 18 × 3 = 54 units

A’s time = 54/2 = **27 days**
B’s time = 54/1 = **54 days**

---

### Question 5

**A can do work in 800 days. He works 100 days and leaves. B finishes remaining work in 350 days. If both worked together from the start, how long would they take?**

#### Solution

Let total work = 800 units
A’s efficiency = 1 unit/day
Work done by A in 100 days = 100 units
Remaining = 700 units

B completes 700 units in 350 days → B’s efficiency = 700/350 = 2 units/day

Combined efficiency = 1 + 2 = 3 units/day

Time together = 800 / 3 = **266.667 days**

---

### Question 6

**A room-painting job is shared by A, B, and C. Daily wage collectively = Rs. 800.
A alone: 6 days
B alone: 8 days
C alone: 24 days
Find individual daily wages.**

#### Solution

Total work = LCM(6, 8, 24) = 24 units

Efficiencies:
A = 24/6 = 4 units/day
B = 24/8 = 3 units/day
C = 24/24 = 1 unit/day

Efficiency ratio = wages ratio = 4 : 3 : 1

Total = 800

A = 400
B = 300
C = 100

---

### Question 7

**A completes work in 9 days, B in 12 days. They work alternately, B starting first.
If a partial day counts as a full day, find total time.**

#### Solution

Total work = LCM(9, 12) = 36 units
A = 4 units/day
B = 3 units/day

Every 2 days, work done = 4 + 3 = 7 units

In 10 days (5 cycles), work done = 35 units
Remaining = 1 unit

B does it in less than 1 day, but full day is counted.

Total time = 10 + 1 = **11 days**

---

### Question 8

**45 men dig a canal in 16 days. After 6 days, 30 more men join. How many more days needed?**

#### Solution

Efficiency per man = 1 unit/day (assumed)

Total work = 45 × 16 = 720 units
Work in first 6 days = 45 × 6 = 270 units
Remaining = 720 − 270 = 450 units

Now 75 men work → 75 units/day

Time required = 450 / 75 = **6 days**

#### Alternate Method (Efficiency Formula)

Using:

M1 D1 H1 E1 / W1 = M2 D2 H2 E2 / W2

(45 × 6 × 1) / 270 = (75 × D2 × 1) / 450
D2 = 6 days

---

### Question 9

**2 Men + 3 Women → work in 10 days
3 Men + 2 Women → work in 8 days
Find time for 2 Men + 1 Woman**

#### Solution

Use summation formula:

∑(Mi Ei) D1 = ∑(Mj Ej) D2

(2M + 3W) × 10 = (3M + 2W) × 8

Solving:
M : W = 7 : 2

Let M = 7k, W = 2k

Apply formula again:

(2M + 3W) × 10 = (2M + 1W) × D
(20k × 10) = (16k × D)
D = 12.5 days

---

### Question 10

**A alone takes 2 more days than A and B together.
B alone takes 18 more days than A and B together.
Find the time when working together.**

#### Solution

Let time together = n

A alone = n + 2
B alone = n + 18

Equation:

1/(n+2) + 1/(n+18) = 1/n

Simplifying:

(2n + 20)/[(n+2)(n+18)] = 1/n
2n² + 20n = n² + 20n + 36
n² = 36
n = 6

Time together = **6 days**

#### Short Method

Shortcut for 2 people:

n² = d1 × d2
d1 = 2
d2 = 18

n² = 2 × 18 = 36
n = 6

Time together = **6 days**

---

