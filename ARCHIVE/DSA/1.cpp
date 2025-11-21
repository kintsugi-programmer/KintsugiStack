#include<bits/stdc++.h>
using namespace std;

// // Solution 1
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(2*n);
//         for (int i=0; i<n; i++){
//             ans[i]= nums[i];
//         }
//         for (int i=0; i<n; i++){
//             ans[n+i]= nums[i];
//         }
//         return ans;
//     }
// };
// // Time complexity: 
// // O(n)
// // Space complexity: 
// // O(n) for the output array.

// // Solution 2
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(2*n);
//         for (int i=0; i<n; i++){
//             ans[i]= nums[i];
//             ans[i+n]= ans[i];
//             // ans[i] = ans[i + n] = nums[i]; // we can write this too !!!
 
//         }
//         return ans;
//     }
// };
// // Time complexity: 
// // O(n)
// // Space complexity: 
// // O(n) for the output array.

// // Solution 3 
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n = nums.size();

//         for (int i=0; i<n; i++){
//             nums.push_back(nums[i]);
//         }

//         return nums;
//     }
// };
// // Time complexity: 
// // O(n)
// // Space complexity: 
// // O(n) for the output array.

// Solution 4 
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int times= 2;
        for (int j=1;j<times; j++)// j is 1 because ones occurence is already here
        {
            for (int i=0; i<n; i++){
                nums.push_back(nums[i]);
            }
        }

        return nums;
    }
};

// Time complexity: 
// O(n)
// Space complexity: 
// O(n) for the output array.

void printVector(const vector<int> &v) {
    for (int num : v) cout << num << " ";
    cout << endl;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 4, 1, 2};
    Solution sol;
    vector<int> result1 = sol.getConcatenation(nums1);
    cout << "Output 1: ";
    printVector(result1);
    
    // Example 2
    vector<int> nums2 = {22, 21, 20, 1};
    vector<int> result2 = sol.getConcatenation(nums2);
    cout << "Output 2: ";
    printVector(result2);

    return 0;
}