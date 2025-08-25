#include<bits/stdc++.h>
using namespace std;
 
string checkSort(vector<int> arr,vector<int> arr2, int n){     
    for ( int faltu=0; faltu<n; faltu++){
    for ( int idx=0; idx<n; idx++){
        if (
            arr[idx]<arr[idx+1] &&
            arr[idx+1]>arr[idx+2] &&
            idx+2<n
        ){
            int temp= arr[idx+1];
            arr[idx+1]= arr[idx+2];
            arr[idx+2]=temp;
 
        }
    }
    if(arr2==arr) { return "YES"; }
}
    return "NO";
}
 

// NO NEED 
string checkPert(int n){
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin>>arr[i];
    
    vector<int> arr2=arr;
    sort(arr2.begin(),arr2.end());
 
    for ( int idx=0; idx<n; idx++){if (arr2[idx]!=idx+1) {return "NO";}}
    if(arr2==arr) { return "YES"; } // already sorted
    return checkSort(arr,arr2, n);// we dont feed data types as arguements   
}
 
 
int main(){
 
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<checkPert(n)<<"\n";
        
    } 
 
    return 0;
}