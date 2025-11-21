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