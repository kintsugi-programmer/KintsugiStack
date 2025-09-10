#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--) {
        long long a, b;
        cin>>a>>b;

        long long result =-1;

vector<long long> arr1;
        for (long long i =1; i*i <= b && i <= 1000; i++) {
        if (b % i == 0) {
        arr1.push_back(i);
        if (i != b/i) {
        arr1.push_back(b/i);
        }
        }
        }

        for (long long i =0; i < arr1.size(); i++) {

        long long sum =a*arr1[i]+ b/arr1[i];

        if (sum % 2 == 0) {
        result =max(result, sum);
        }
        }

        cout << result << "\n";
    }

    return 0;
}