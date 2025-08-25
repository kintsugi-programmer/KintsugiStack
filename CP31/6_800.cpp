#include<bits/stdc++.h>
using namespace std;
string goodAPCheck(int x){
    vector<int> v1(x);
    for ( int i=0; i<x; i++) cin>>v1[i];
    vector<int> v2=v1;
    sort(v2.begin(),v2.end());

    vector<int> v3=v2;
    // remove duplicates
    v3.erase(unique(v3.begin(),v3.end()),v3.end());
    if (v3.size()>2 ) return "NO";
    
    if (count(v1.begin(), v1.end(),v2[0])==x) return "YES";
    if (x%2==0 && count(v1.begin(), v1.end(),v2[0])==count(v1.begin(), v1.end(),v2[x-1])) return "YES";
    if(x%2!=0 && (count(v1.begin(), v1.end(),v2[0])==count(v1.begin(), v1.end(),v2[x-1])+1 ||count(v1.begin(), v1.end(),v2[0])+1==count(v1.begin(), v1.end(),v2[x-1])  )) return "YES";
    if(x==2) return "YES";
    else return "NO";



}
int main(){

    long long t;
    cin>>t;
    while(t--) {
        int x = 0;
        cin>>x;
        cout<<goodAPCheck(x)<<"\n";
    }
    return 0;
}