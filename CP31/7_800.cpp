#include<bits/stdc++.h>
using namespace std;
int checkCount(string x,string s){
    int counter = 0;
    
    while (counter<=5){
        if ((x).find(s) != string::npos){
            return counter;
        }
        counter++;
        x=x+x;

        
    }
    return -1;

};

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n=0, m=0;
        string x="",s="";
        cin>>n>>m>>x>>s;
        
        // if ((s+s).find(x) == string::npos){
        //     cout<<-1<<"\n";
        // }
        // else{
            cout<<checkCount(x,s)<<"\n";
        // }


    }

    return 0;
}

// passed 58 tests containing test cases :)
// 109 ms	100 KB