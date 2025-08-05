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
// sc O(n)