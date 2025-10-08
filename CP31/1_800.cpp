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