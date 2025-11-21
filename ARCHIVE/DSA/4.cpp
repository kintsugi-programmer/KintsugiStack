#include<bits/stdc++.h>
using namespace std;

// // Solution 1
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for ( int i=0; i<nums.size(); i++){
//             for ( int j=i+1; j<nums.size(); j++){
//                 if (nums[i]+nums[j] == target) { return {i,j} ; }
//             }
//         }
//         return {};
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
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> momos;
//         for ( int i = 0; i<nums.size(); i++ ) { momos[nums[i]]=i; }     
//         for ( int i = 0; i<nums.size(); i++ )
//         {
//             if ( momos.find(target-nums[i]) != momos.end() // or momos.count(target-nums[i])
//             && momos[target-nums[i]]!= i // to avoid the case of j = i
//             )
//             {
//                 return  { i,momos[target-nums[i]]}; 
//             }
//             // or 
//             // int diff = target - nums[i];
//             // if (momos.count(diff) && momos[diff] != i) {
//             //     return {i, momos[diff]};
//             // }
//         }   
//         return {};
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
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> momos;
//         for ( int j = 0; j<nums.size(); j++ ){
//             if ( momos.find(target-nums[j]) != momos.end() )
//             {
//                 return  {momos[target-nums[j]] ,j}; // not { j,momos[target-nums[j]]}; 
//             }
//             momos[nums[j]]=j; // not momos[nums[j]]++ as it dont make sense
//             // insertion should be second
//             // else Let's say nums = [3, 2, 4] and target = 6
//                 // On the first loop (i=0, nums[0]=3), it calculates the complement: 6 - 3 = 3.     
//                 // Because you just added nums[0] to the map, the code finds 3 in the map and incorrectly matches the element with itself, returning {momos[3], 0} which is {0, 0}. This violates the i != j rule.
//         }       
//         return {};
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(n)
// // Space complexity: 
// // O(n)

// Solution 4
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< pair<int,int> > pv;
        for (int i=0; i< nums.size(); i++){
            pv.push_back( {nums[i],i} );
        }
        sort(pv.begin(), pv.end());
        int i =0;
        int j = nums.size() -1;
        while (i<j){
            if ( pv[i].first + pv[j].first == target )
            {
                return  { min(pv[i].second , pv[j].second) , max(pv[i].second , pv[j].second) } ;
                // NOT return ( { min(pv[i].second , pv[j].second) , max(pv[i].second , pv[j].second) } );
                // The syntax ( { ... } ) is not the standard way to return a newly created vector. The compiler misinterprets it and complains that it can't convert the result to a std::vector<int>
            } 
            else if ( pv[i].first + pv[j].first < target ) { i++; }
            else if ( pv[i].first + pv[j].first > target ) { j--; }

        }
        
        return {};
    }
};
// Time & Space Complexity
// Time complexity: 
// O(nlogn)
// Space complexity: 
// O(n)

// Helper function to print a vector for easy testing
void printVector(const std::string& label, const std::vector<int>& vec) {
    std::cout << label;
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i == vec.size() - 1 ? "" : ", ");
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution sol;

    // Example 1
    std::vector<int> nums1 = {3, 4, 5, 6};
    int target1 = 7;
    std::vector<int> result1 = sol.twoSum(nums1, target1);
    printVector("Output: ", result1); // Expected: [0, 1]

    // Example 2
    std::vector<int> nums2 = {4, 5, 6};
    int target2 = 10;
    std::vector<int> result2 = sol.twoSum(nums2, target2);
    printVector("Output: ", result2); // Expected: [0, 2]

    // Example 3
    std::vector<int> nums3 = {5, 5};
    int target3 = 10;
    std::vector<int> result3 = sol.twoSum(nums3, target3);
    printVector("Output: ", result3); // Expected: [0, 1]

    return 0;
}