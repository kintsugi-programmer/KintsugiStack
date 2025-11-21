#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for (int i=0; i<n; i++) cin>>arr[i];
        if (arr[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
        
    } 
 
    return 0;
}
// TC O(n)
// SC O(n) 