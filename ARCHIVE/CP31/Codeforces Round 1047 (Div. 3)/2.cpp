#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
while (b!=0){
    int temp=b;
    b=a%b;
    a=temp;
}
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        for (int i=0;  i<n; i++){
            cin>>v1[i];
        }

        vector<vector<int>> groups(3);
        for (int i=1; i <= n; i++) {
            groups[i % 3].push_back(i);
        }

        for (int i=0; i < n; i++) {
            int r=v1[i] % 3;
            int need=(3-r) % 3;  
            
            cout << groups[need].back() << " ";
            groups[need].pop_back();
        }
        cout << "\n";
    }
     return 0;
}