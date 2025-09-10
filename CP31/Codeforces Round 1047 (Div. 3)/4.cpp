
#include <bits/stdc++.h>
using namespace std;

void minitest(vector<int> v1, int n) {
map<int, int> count;
for (int i =0; i < n; i++) {
    count[v1[i]]++;
}

vector<int> result(n);
int res =1;
bool cheacker =true;

for (auto& p : count) {
    
    
    int occur =p.first;
    int counter =p.second;
        if (occur > 1000) break;

    
    if (counter % occur != 0) {
        cheacker =false;
        break;
    }
    
    int groups =counter / occur;
    for (int g =0; g < groups; g++) {
        int pos =0;
        for (int i =0; i < n && pos < occur; i++) {
            if (v1[i]==occur && result[i]==0) {
                result[i] =res;
                pos++;
            }
        }
        res++;
    }
}

if (!cheacker) {
    cout << -1 << "\n";
} else {
    for (int i =0; i < n; i++) {
        cout << result[i];
        if (i != n-1) cout << " ";
    }
    cout << "\n";
}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n);
        for (int i=0; i < n; i++) {
            cin >> v1[i];
        }
        minitest(v1,n );
      
    }

    return 0;
}
