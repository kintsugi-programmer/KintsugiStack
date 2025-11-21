#include<bits/stdc++.h>
using namespace std;
int main(){

    // t
    // mini tests
    int t;
    cin>> t;
    while (t--){
        long long n;
        cin>>n;
        vector<long long> a(n,0);
        // vector input
        for (long long i=0; i<n; i++) {cin>>a[i];} //n
        
        // freq map
        map<long long, long long> freq_map;
        for (long long i =0; i<n; i++){//n
            freq_map[a[i]]++;//logn
        }
        //nlogn
        

        if (freq_map.size()>=3) cout<<"No"<<endl;
        else {

            // begin- first element
            // rbegin- last element

            long long freq1 = freq_map.begin()->second;
            long long freq2 = freq_map.rbegin()->second;

            //odd size array
            if (freq1==freq2) cout<<"Yes"<<endl;
            else if ( n%2 ==1 && abs(freq1-freq2)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

// TC O(nlog2n) = O(100*log2(100)) = O(100*7) = O(700)
// SC O(n+n)= O(2n) = O(200)

// this problem is imp to teach map,begin,rbegin iterators