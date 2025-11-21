#include<bits/stdc++.h>
using namespace std;

// // Solution 1
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         int counter = 0;
//         for ( int i=0; i<n; i++){
//             for ( int j=0; j<n; j++){
//                 if (nums[i]==nums[j]){
//                     counter++;
//                     if (counter> 1){
//                         return true;
//                     }
//                 }
//             }
//             counter=0;
//         }
//         return false; 
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(n**2)
// // Space complexity: 
// // O(1)

// // Solution 2
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         unordered_set<int> hashSet;
//         for ( int i=0; i<n; i++){ // or // for (int num : nums) {
//             if (hashSet.find(nums[i])!=hashSet.end()){ // or // if (find.count(num)) {
//                 return true;
//             }
//             else {
//                 hashSet.insert(nums[i]);
//             }
//         }
//         return false;
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(n)
// // Space complexity: 
// // O(n)

// // Solution 3
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size(); // or just use the method in loop too
//         sort(nums.begin(), nums.end());
//         for ( int i=0; i<n-1; i++){ // we took n-1 as to not going to case (where i=n-1 index(last index), i+1=n index(exceeding limit)), and now at i= n-2 (2nd last element index), then i+1 = n-1(last element index) :)
//             if( nums[i]==nums[i+1]) return true;  
//         }
//         return false;
        
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(nlogn)
// // Space complexity: 
// // O(1) or O(n) depending on the sorting algorithm.


// Solution 4
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return (
            unordered_set<int>(nums.begin(), nums.end())
            .size()
            <
            nums.size()
        );
        
    }
};
// Time & Space Complexity
// Time complexity: 
// O(n)
// Space complexity: 
// O(n)

int main() {
    // Example test cases
    vector<vector<int>> testCases = {
        {1, 2, 3, 1},          // true
        {1, 2, 3, 4},          // false
        {1, 1, 1, 3, 3, 4, 3, 2, 4, 2} // true
    };

    Solution s;
    for (size_t i = 0; i < testCases.size(); ++i) {
        bool result = s.containsDuplicate(testCases[i]);
        cout << "Test Case " << i + 1 << ": " 
             << (result ? "true" : "false") << endl;
    }
    return 0;
}
