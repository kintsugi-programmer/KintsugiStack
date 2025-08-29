# CP31
- https://codeforces.com/profile/kintsugi-programmer
- https://www.tle-eliminators.com/cp-sheet


## Table of Contents
- [CP31](#cp31)
  - [Table of Contents](#table-of-contents)
- [R800](#r800)
  - [1 Halloumi Boxes](#1-halloumi-boxes)
  - [2 Line Trip](#2-line-trip)
  - [3 Cover in Water](#3-cover-in-water)
  - [4 Game with Integers](#4-game-with-integers)
  - [5 Jagged Swaps](#5-jagged-swaps)
  - [6 Doremy's Paint 3](#6-doremys-paint-3)
  - [7 Don't Try to Count](#7-dont-try-to-count)
  - [8 How Much Does Daytona Cost?](#8-how-much-does-daytona-cost)
  - [10 Target Practice](#10-target-practice)
- [TipsCollectedFromExperiences](#tipscollectedfromexperiences)
- [Ambitious Kid](#ambitious-kid)
- [Target Practice](#target-practice)


# R800

## 1 Halloumi Boxes
- https://codeforces.com/problemset/problem/1903/A
- Analysis
  - n boxes/array a1 a2 ... an
  - a = {a0, a1, a2 ... an-1}
  - subarray = segment taken out of array not manipulated ,no change in order 
    - eg: {a0, a1}, {a1,a2,a3}, etc
  - He wants to sort them in non-decreasing order based on their number
  - non-decreasing = increasing
  - s is atmost k , means : s<=k
  - however, his machine works in a strange way. It can only reverse any subarray of boxes with length `at most k` 
  - subarrsize<=k
  - Find if it's possible to sort the boxes using any number of reverses.
  - So, if K>=2 ,Machine's sort is 100%possible at `any number of reverses` `ANY_TIMES`
    - if k=2 atleast => i have power to shift any element anywhere 
  - eg: 
    - 6421
      - 6421 rev 2 nos sub array my initial thought
      - 6412 rev 2 nos sub array
      - 6142 rev 2 nos sub array
      - 1642 rev 2 nos sub array
      - 1624 rev 2 nos sub array
      - 1264 rev 2 nos sub array
      - 1246 rev 2 nos sub array
      - sorting done :0
    - 6421 
      - 1246 rev 4 nos sub array optimal from tuts
  - atq : according to question
  - tl per test = 1sec atq
    - 1sec = 10^8 Operations = per test operations
    - 1 <=k <= n (minitests)<= 100 acc.to ques (atq)
    - consider n=100 upperbound
    - tl per mini test = 1sec /100
    - per mini test operations = 10^8 / 100 = 10^6
    - if tc per mini test = O(n^3)
      - so n=100, then operation = O(n^3) = O(100^6) = per mini test operations
      - so O(n^3) is the upper bound
      - even sol. can have O(n^2), O(n), O(nlogn) etc. anything below O(n^3), but not above O(n^3)
    - Expected TC = O(n^3)
  - ml per test = 256mB atq
  - at k=1, no sorting is possible
    - because the foundation of reverse is actually swap any atleast 2 stuff
    - if stuff is only one then it wont make sense to reverse as we lost power to shift any element
- Approach
  - Passing Condition where return YES
    - K>=2
    - or given array is already sorted
  - else, return False

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    // at extreme proof case use :
    // long long t;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int i=0;
        //input
        while(i<n){
            cin>>v[i]; // n order
            i++;
        }
        vector<int> v2=v; // copy // n order
        sort(v2.begin(), v2.end());  // nlogn order
        if ((v2==v)or(k>=2)){ // to check whether initial array is sorted or not // n order
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}
// tc O(nlogn) // highest order here
// at n = 100 , tc = 100log100 = 100*7 = 700
// 2^7 ~ 100
// log2(n) = ln n / ln 2
// sc O(n)
```

## 2 Line Trip
- https://codeforces.com/problemset/problem/1901/A
- Analysis
  - location&road on number line
    - 0 , a1 , a2 , ... , x
    - Round Trip i.e. total path => 0, a1, ... an, x, an, ..., a1,0
    - a1,a2 ... Gas station for Tanki Full/ Refill
    - 0 start point
    - if stop at non-station location due to gas empty = gameover
    - no refuel at dest x
  - In this ques, we have to find the capacity of gas tank car should take it for journey, efficiently without stopping
  - tl per test = 2secs
    - 2secs = 2*(10^8) operations
    - t=1000 atq
    - time/testcase = O(2* 10^5)
    - n=50 max atq
    - then at O(n^3) = O(125000) = O(1.25 * 10^5) <= O(2* 10^5)
    - TC for minitest = Expected TC = O(n^3) upper bound
  - tlpt = time limit per test
  - mlpt = 256mB
  - in test case 1
    - n=3
    - x=7
    - a{1,2,5}
    - `0-1-2-5-7-5-2-1-0`
    - output = 4
    - gaschanges=
      - 4 start
      - 3 at 1
      - 4 refill
      - 3 at 2
      - 4 refill
      - 1 at 5 
      - 4 refill
      - 2 at 7 
      - NO Refill at dest x
      - 0 at 5 ,biggest gas consumption, 5->7->5 , 4 units distance
      - 4 refill
      - 1 at 2 
      - 4 refill
      - 3 at 1
      - 4 refill
      - 3 end, fully reached ,gas still remaining 
    - biggest gas consumption, 5->7->5 , 4 units distance
    - thus min threshold gas capacity is 4 units ,as below it , car would stop at 5->7->5
  - now the max capacity of gas tank in any journey = max distance of any 2 gas stations throughout journey
  - througout journey means a round trip 
    - so, after lastGasStation, car will go to x(dest), and find lastGasStation first in return journey
    - so, that distance is (lastGasStation - x)*2
- Approach
  - C1= cal. firstGasStation-0
  - C2= max(allDistances(cal. dist b/w eachGasStation))
  - C3= cal. (lastGasStation - x)*2
  - return max(C1,C2,C3)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long i=1;
        long long smax=0;
        vector<long long> v1(n+1,0); //initialize safety //O(n)
        v1[0]=0;
        while(i<=n){// O(n)
            cin>>v1[i];
            // cout<<v1[i];
            long long buff=smax;
            smax=max(buff,(v1[i]-v1[i-1]));
            i++;
        }
        long long smax2=(x-v1[n])*2; // O(1)
        cout<< max(smax,smax2)<<endl;
        // cout<< smax<<" "<<v1[n-1]<<" "<<smax2<<endl;
 
    }return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

//  max(a, b); O(1) // just checks (a < b)
//  min(a, b); O(1) // just checks (a < b)
// max_element(v.begin(), v.end()) O(n)
// min_element(v.begin(), v.end()) O(n)
```
- my code is more optimised than tut ;0

## 3 Cover in Water
- https://codeforces.com/problemset/problem/1900/A
- Analysis
  - Filip has a row of cells, some of which are blocked, and some are empty. 
  - He wants all empty cells to have water in them. 
  - He has two actions at his disposal 
    - 1. place water in an empty cell. `FINITE_TIMES`
    - 2. remove water from a cell and place it in any other empty cell. `ANY_TIMES`
  - autoOperation
    - if at some moment cell i (2≤i≤n−1) is empty and both cells i−1 and i+1 contains water, then it becomes filled with water. `ANY_TIMES`
  - C1: if no. of Consecutive dots(emptyBoxes) >= 3
    - then we only need 1 operation only 2TIMES as we could fill at corner of 3 boxes and middle box will autoOperationAutoFillWater and we can transfer that water to other cells `ANY_TIMES` 2 operation, and regenerate autoOperationAutoFillWater
  - C2: else we need to fill all boxes by 1 operation only as here autoOperationAutoFillWater fails
- Approach
  - count no. of dots(emptyBoxes)
  - count no. of Consecutive dots(emptyBoxes)
  - if no. of Consecutive dots(emptyBoxes) >= 3
    - return 2
  - else 
    - return no. of dots(emptyBoxes)
- AnotherApproach 
  - similar 
  - if `(s[i]=="." && i+1<n && s[i+1]=="." && i+2<n && s[i+2]=="." `
    - return 2
  - else 
    - return no. of dots(emptyBoxes)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--)
    {

        long long n;
        cin>>n;

        string s;
        cin>>s;

        int sum=0;
        int i=0;
        int dot=0;

        while(i<s.size()){
            if (s[i]=='.'& sum!=3)
            {
                sum++;
                dot++;
            }
            else if (s[i]=='#' & sum!=3)
            {
                sum=0;
            }
            i++;
        }

        if (sum>=3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<dot<<endl;
        }
        
        
    }
    return 0;
    
}
```

## 4 Game with Integers
- https://codeforces.com/problemset/problem/1899/A
- Analysis
  - Vanya and Vova are playing a game. Players are given an integer n. On their turn, the player can add 1 to the current integer or subtract 1
  - The players take turns; Vanya starts. If after Vanya's move the integer is divisible by 3, then he wins. If 10 moves have passed and Vanya has not won, then Vova wins.
  - if both players play optimally
    - then in each of player turn he/she will try move to make other one lose
  - NOW
    - n%3 == 0
      - if True, divisible before vanya move
        - even vanya could +1/ -1
        - it will not be divisible by 3
        - & vova will cancel the effect -1/ +1 of vanya till 10rounds
        - ultimate vova win
      - if False, not divisible before vanya move
        - vanya could +1/ -1
        - it will be divisible by 3 after vanya move
        - & vova will do something
        - & vova will cancel the effect -1/ +1 of vova
        - and still it will be divisible by 3 after vanya move till 10rounds
        - ultimate vanya win
  - numbers
    - 0 DIV
    - 1 (-1=0)
    - 2 (+1=3)
    - 3 DIV
    - 4 (-1)
    - 5 (+1)
    - 6 DIV
    - 7
    - 8
    - 9 DIV
  - Eg: 6
    - => 7 => 8 => 9 => .... vanya win
    - => 7 => 6 => 7 => 6 ... vova win if played optimaly
- Approach
  - if n%3 == 0
    - vova win, return Second
  - else if n%3 != 0
    - vanya win, return Second
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t=0;
    cin>>t;
    while(t--){
        long long n=0;
        cin>>n;
        if (n%3==0){cout<<"Second\n";}
        else{cout<<"First\n";}
    }
    return 0;
}
 
```

## 5 Jagged Swaps
- https://codeforces.com/problemset/problem/1896/A
- Analysis
  - here, permutation is an array
    - of unique elements
    - if array of `n` integers, then integet exists of all 1,..to.,n
  - we want to check if we could sort the permutation with special operation `ANY_TIMES`
  - special operation
    - if `a[i-1] < a[i] > a[i+1]`
      - then swap a[i], a[i+1]
- Approach
  - if this is permution
    - if permutation is already sorted
      - return "YES"
    - else
      - try sort by special operation one time
      - if sorted 
        - return "YES"
      - else
        - return "NO"
  - else
    - return "NO"
    - TTYL
```cpp
```

## 6 Doremy's Paint 3
- https://codeforces.com/problemset/problem/1890/A
- Analysis
  - array is good for this ques as
  - there exists a k such that b1+b2=b2+b3=…=bn−1+bn=k
- Approach
  - and at case of array of 2, 1 elements
    - return "Yes"
  - else
    - int k = a[1]-a[0];
    - run a loop
    - if `( i>-1 && i+1<n && a[i]+a[i+1]==k)`
    - or reverse also k [TTYL]
      - return "Yes"
    - else
      - return "No"

## 7 Don't Try to Count
- https://codeforces.com/problemset/problem/1881/A
- Analysis
  - string x, len n
  - string s, len m
  - n*m <=25
    - 1, 25
    - 5, 5
    - 25, 1
  - operation `ANY_TIMES`
    - if x= "abc"
    - return x+x "abcabc"
  - Find 
    - min. no of operation by which 
    - s is substring of x
- Approach
  - input t testcases
  - each test cases
    - input n,m
    - Wrong, as babb,bbb ,its not -1
      - check if x is substring of s+s
        - if no
          - then x ,even mul by infinite can't be superset or in any combination of s
          - and we took s+s as maybe x="mara", s="rama"
          - return -1
        - if yes
          - then its posible
  - counter=0
  - while counter<=5
    - concatnate till s is substring of x
      - counter++
  - return counter

## 8 How Much Does Daytona Cost?
- https://codeforces.com/problemset/problem/1878/A
- Analysis
  - array a 
  - size n
  - int k
  - Find?
    - subsegment of a where k is most common element
  - One sec, 
    - if number exists
      - if array size is 2 or 1
      - or if anywhere a[i]=a[i+1]=k
      - or if its>2
        - if in array bw that 1st occur and last occur ,that number the most occur 
  - return yes if any satisfy, else no :0
- Approach
  - FREAKING, the the limits, loopholes are hidden
  - functions returns>if else with breaks
  - if number exists 
    - then its largest at subarray len = 1

## 10 Target Practice
- Analysis
  - given board 
  - 10x10
  - each ring deeper, more points, outermost is 1, innermost is 5
  - person shot "X" in grid of 10x10 "."
  - Find? 
    - Scores
  - technically
    ```
    0123456789

    1111111111 0
    1222222221 1
    1233333321 2
    1234444321 3
    1234554321 4
    1234554321 5
    1234444321 6
    1233333321 7
    1222222221 8
    1111111111 9

    0 1234 5678 9

    1 1111 1111 1 0

    1 2222 2222 1 1
    1 2333 3332 1 2
    1 2344 4432 1 3
    1 2345 5432 1 4

    1 2345 5432 1 5
    1 2344 4432 1 6
    1 2333 3332 1 7
    1 2222 2222 1 8

    1 1111 1111 1 9
    ```
  - condtion of scoring
    - 1
      - 0,0 to 9,0 L 00 10 20 30 40 50 60 70 80 90
      - 0,9 to 9,9 R 09 19 29 39 49 59 69 79 89 99
      - 
      - 0,0 to 0,9 T 00 01 02 03 04 05 06 07 08 09 
      - 9,0 to 9,9 B 90 91 92 93 94 95 96 97 98 99
      - relation
        - i =0 or 9
        - j =0 or 9
        - 1 = 0+1 == 10-9
    - 2
      - 1,1 to 8,1 L 11 21 31 41 51 61 71 81
      - 1,8 to 8,8 R 18 28 38 48 58 68 78 88
      - 
      - 1,1 to 1,8 T 11 12 13 14 15 16 17 18
      - 8,1 to 8,8 B 81 82 83 84 85 86 87 88
      - relation
        - i,j = 1 or 8
        - 1 = 1+1 == 10-8
    - 5
      - 4,4
      - 4,5
      - 5,4
      - 5,5
  - this not 2D Array
  - this is char incoming
- Approach



# TipsCollectedFromExperiences

- when check TC& SC of program, don't consider TestCasesLoop&Spaces in counting
- 1sec = 10^8 Operations
- if 1sec =  totalTests 
  - operationsPerTestCase  = 10^8 / totalTestCases
  - if totalTestCases = 100
    - operationsPerTestCase = 10^6 operations 
    - O(n^3) is UpperLimit of the question's code
      - as O(n^3) = O(100^3) = 10^6 === operationsPerTestCase
- always think of extra testcases
- and in cp submission , you can see testcases in ID :0
- FREAKING, the the limits, loopholes are hidden
- functions returns>if else with breaks
- put this at 1st line of main() code, to fix bug of compiler at running test cases, not interactive program
  ```cpp
  ios::sync_with_stdio(0);
  cin.tie(0);
  ```
- templates
  ```cpp
  // template miniTests int1 int2 vectorArrayInt1
  #include<bits/stdc++.h>
  using namespace std;
  void mainGame(int x1, int x2, vector<int> v1){
      // code here
      
  }

  void eachMiniTest(){ 
      int x1=0, x2=0;// factor1 factor2
      vector<int> v1;
      cin>>x1>>x2;
      for (int i=0; i<x1; i++ ) cin>>v1[i];
      mainGame(x1,x2,v1);

  }

  int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      long long t; //mini test cases
      cin>>t;
      while(t--){
          eachMiniTest();
      }

      return 0;
  }
  ```

  ```cpp
  // template miniTests int1 int2 string
  #include<bits/stdc++.h>
  using namespace std;
  void mainGame(int x1, int x2, string s){
      // code here

  }

  void eachMiniTest(){ 
      int x1=0, x2=0;// factor1 factor2
      string s;
      cin>>x1>>x2>>s;
      mainGame(x1,x2,s);

  }

  int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      long long t; //mini test cases
      cin>>t;
      while(t--){
          eachMiniTest();
      }

      return 0;
  }
  ```
- Vectors CPP STL
  ```cpp
  vector<int> v1(n); // create ,with n elements mandatory
  cin>>v1[0]; // insert
  vector<int> v2 = v1; // copy
  sort(v2.begin(),v2.end()); // sorting in stl, asc
  bool compare= (v1==v2); // compare
  ```
  ```cpp
  #include<vector>
  #include<iostream>
  #include<algorithm>
  ```
- use `long long` instead of `int` for bigger stuff
- max/min : `max(var1 ,var2)`, `min(var1, var2)`
  - make sure var1,var2 has SAME DATATYPE
  - inbuilt
- subarray = segment taken out of array not manipulated ,no change in order 
  - eg of a = {a0, a1, a2 ... an-1}, subarrs : {a0, a1}, {a1,a2,a3}, etc
- non-decreasing = increasing
- s is atmost k , means : s<=k
- atq : according to question
- How to Calculate Expected TC? eg: in 1R800
  - tl per test = 1sec atq
    - 1sec = 10^8 Operations = per test operations
    - 1 <=k <= n (minitests)<= 100 acc.to ques (atq)
    - consider n=100 upperbound
    - tl per mini test = 1sec /100
    - per mini test operations = 10^8 / 100 = 10^6
    - if tc per mini test = O(n^3)
      - so n=100, then operation = O(n^3) = O(100^6) = per mini test operations
      - so O(n^3) is the upper bound
      - even sol. can have O(n^2), O(n), O(nlogn) etc. anything below O(n^3), but not above O(n^3)
    - Expected TC = O(n^3)
- ```cpp
  // 1R800
  // at extreme proof case use :
  long long t;
  ```
- ```cpp 
  // 1R800
  // at n = 100 , tc = 100log100 = 100*7 = 700
  // 2^7 ~ 100
  // log2(n) = ln n / ln 2
  ```
- ```cpp
  // 1R800
  // input, n order
  cin>>v[i]; // n order

  // vector copy, n order
  vector<int> v2=v; // copy // n order

  // sort stl func, n order
  sort(v2.begin(), v2.end());  // nlogn order

  // vector compare, n order
  if (v2==v) // vector compare // n order
  ```
- tlpt = time limit per test
- 2secs = 2*(10^8) operations
- at 2R800 , tl per test = 2secs
  - 2secs = 2*(10^8) operations
  - t=1000 atq
  - time/testcase = O(2* 10^5)
  - n=50 max atq
  - then at O(n^3) = O(125000) = O(1.25 * 10^5) <= O(2* 10^5)
  - TC for minitest = Expected TC = O(n^3) upper bound
- ```cpp
  //  max(a, b); O(1) // just checks (a < b)
  //  min(a, b); O(1) // just checks (a < b)
  // max_element(v.begin(), v.end()) O(n)
  // min_element(v.begin(), v.end()) O(n)
  ```
-  `vector<long long> v1(10,0);` initialize safety vector


# Ambitious Kid
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v1(n,0);
    for (int i=0; i<n;i++){
        int i1 =0;
        cin>>i1;
        v1[i]=(i1>=0) ? i1: (i1*-1); // or v1[i] = abs(i1);
    }
    cout<<*min_element(v1.begin(),v1.end());// min_element & max_element return pointer
    // not sort then v1[1] as its nlogn
    return 0;
}
// TC O(n)
// SC O(n)
```

# Target Practice
```cpp
#include<bits/stdc++.h>
using namespace std;
// 1
/*
00 01 02 03 04 05 06 07 08 09
10 19
20 29
30 39
40 49 
50 59
60 69 
70 79 
80 89
90 91 92 93 94 95 96 97 98 99
*/
// 2
/*
11 12 13 14 15 16 17 18
21 28
31 38
41 48 
51 58
61 68 
71 78 
81 82 83 84 85 86 87 88 
*/

int calScore(int row, int col, char c){
    int bound1 =0;
    int bound2 =9;

    for ( int ring =1; ring<=5; ring++){
        if ( (row==bound1) || (row==bound2) ){ return ring;}
        else if ((col==bound1) || (col==bound2)) {return ring;}
        
        bound1++;bound2--;
    }
    return 0; // fallback
    
}
void miniTest(){
    int finalScore=0;
    for (int row=0; row<10; row++){
        for (int col=0; col<10; col++){
            char c;
            cin>>c;
            if (c=='X') finalScore+=calScore(row,col,c);
        }

    }
    cout<<finalScore<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);;
    int t;
    cin>>t;
    while(t--){
        miniTest();
    }
    return 0;
}
```