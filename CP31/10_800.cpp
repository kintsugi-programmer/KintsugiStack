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