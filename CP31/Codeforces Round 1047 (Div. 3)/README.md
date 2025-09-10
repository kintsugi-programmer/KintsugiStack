## A. Collatz Conjecture
- Analysis
  - int x
  - procedure k times
    - if x%2==0 
      - x/=2
    - else 
      - x= 3*x+1
  - eg: initial=21, proc= 5
    - 21=x
    - 64
    - 32
    - 18
    - 4=x
  - forgot initial 
  - given k,xfinal find xinitial
  - eg: k=1,xfinal=4
    - 1
    - 4
  - eg: k=1,xfinal=5
    - 10
    - 5
  - eg: k=5, xfinal=4
    - xinitial 21
    - 1st 64
    - 2nd 32
    - 3rd 16
    - 4th 8
    - 5th 4
  - but all can be even stuff ??,then there would be pnc of odd ???
  - ANSWER CAN BE ANY

## B. Fun Permutation
- Analysis
  - given permutation p, size n
    - array , n distint int 1 to n , any order,
    - [1,2,3] CORRECT
    - [1,2,2] INCORRECT
    - [1,3,4] INCORRECT
  - to find
    - permutaion q, size n
    - gcd(pi+qi , pi+1 + qi+1) >=3 for all 1<=i< n,sum of adj pos is atleast 3
    - always possible
  - input
    - t
    - n
    - po p1 ... pn
  - ANSWER CAN BE ANY
  - eg: 1, 3, 2
    - 2, 3, 1
    - gcd 1+2, 3,3 = 3
    - gcd 3+3, 2+1 = 3
    - true
  - Approach
    - Euclidean Algorithm
      - gcd(a,b) = gcd( b, a%b)
      - keep replacing a,b to b, a%b until b=0
      - at that point, a is the GCD
      - `gcd(a, b)` or 
        ```cpp
        #include <bits/stdc++.h>
        using namespace std;

        int gcd(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;  // remainder
                a = temp;
            }
            return a;
        }

        int main() {
            int a, b;
            cin >> a >> b;
            cout << gcd(a, b) << "\n";
        }

        ```
    - final array
      - permutation q
      - size n
      - we know element
      - just find order 
      - If we choose q = [1,2,...,n] (the identity permutation), the condition might fail.
      - But if we rotate this sequence by 1, then it always works.