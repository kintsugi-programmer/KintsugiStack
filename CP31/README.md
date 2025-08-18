# CP31

## TipsCollectedFromExperiences
- when check TC& SC of program, don't consider TestCasesLoop&Spaces in counting
- 1sec = 10^8 Operations
- if 1sec = 1test 
  - operationsPerTestCase  = 10^8 / totalTestCases
  - if totalTestCases = 100
    - operationsPerTestCase = 10^6 operations 
    - O(n^3) is UpperLimit of the question's code
      - as O(n^3) = O(100^3) = 10^6 === operationsPerTestCase

## Table of Contents
- [CP31](#cp31)
  - [TipsCollectedFromExperiences](#tipscollectedfromexperiences)
  - [Table of Contents](#table-of-contents)
- [R800](#r800)
  - [1 Halloumi Boxes](#1-halloumi-boxes)
  - [2 Line Trip](#2-line-trip)
  - [3 Cover in Water](#3-cover-in-water)
  - [4 Game with Integers](#4-game-with-integers)


# R800
## 1 Halloumi Boxes
- https://codeforces.com/problemset/problem/1903/A
- Analysis
  - He wants to sort them in non-decreasing order based on their number
  - however, his machine works in a strange way. It can only reverse any subarray of boxes with length at most k
  - Find if it's possible to sort the boxes using any number of reverses.
  - So, if K>=2 ,Machine's sort is 100%possible at `any number of reverses` `ANY_TIMES`
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
        while(i<n){
            cin>>v[i];
            i++;
        }
        vector<int> v2=v;
        sort(v2.begin(), v2.end());
        if ((v2==v)or(k>=2)){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}
// tc O(nlogn)
// sc O(n)3
```

## 2 Line Trip
- https://codeforces.com/problemset/problem/1901/A
- Analysis
  - In this ques, we have to find the capacity of gas tank car should take it for journey
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
        vector<long long> v1(n+1,0);
        v1[0]=0;
        while(i<=n){
            cin>>v1[i];
            // cout<<v1[i];
            long long buff=smax;
            smax=max(buff,(v1[i]-v1[i-1]));
            i++;
        }
        long long smax2=(x-v1[n])*2;
        cout<< max(smax,smax2)<<endl;
        // cout<< smax<<" "<<v1[n-1]<<" "<<smax2<<endl;
 
    }return 0;
}
```

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