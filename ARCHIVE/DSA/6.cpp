#include<bits/stdc++.h>
using namespace std;

// Solution 1
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> tempo;
        // 1 Count the frequency of each number.
        for ( const int i : nums )
        {
            tempo[i]++;
        }
        // The two-step process is the standard, efficient pattern.
        // Use a map for what it's best at: fast lookups and counting.
        // Use a vector for what it's best at: storing data in a sequence that can be sorted.
        // 2 Create buckets. The index is the frequency.
        // The size is nums.size() + 1 because a number can appear at most nums.size() times.
        vector<vector<int>> tempo2(nums.size() + 1);
        // Connecting Frequency to Array Indexing To store the number 5 in our buckets vector, we need to place it at the index corresponding to its frequency. So, we need to access buckets[4].
        // Because C++ vectors are 0-indexed, to have a valid index at 4, the vector must have a size of at least 5 (to contain indices 0, 1, 2, 3, and 4).
        // Therefore, if the maximum possible frequency is nums.size(), the required size for the buckets vector is nums.size() + 1.
        for ( const auto& [key,value] : tempo) // key,value are num, freq res.
        {
            tempo2[value].push_back(key);
        }
        // NO sort(tempo2.rbegin(),tempo2.rend());
        // You can't sort the buckets vector itself, because the frequency information is stored in its indices, not in the values it holds. Sorting it would scramble this crucial relationship.
        // You can't sort the buckets vector itself, because the frequency information is stored in its indices, not in the values it holds. Sorting it would scramble this crucial relationship.
        // The Role of the buckets Vector
        //     Think of the buckets vector like a series of filing cabinet drawers. The number on each drawer is the frequency (the index), and inside the drawer are the numbers that appeared that many times.
        //     eg: buckets[5] = a list of all numbers that appeared exactly 5 times.
        //     eg: buckets[4] = a list of all numbers that appeared exactly 4 times.
        vector<int> fin; 
        // 3 Iterate backwards from the highest possible frequency.
        // Add elements to the result until we have k elements.
        int actual_size_bucket = tempo2.size() -1;
        for ( int i = actual_size_bucket ; i >=0 && fin.size()<k ; --i )
        {
            for ( int num: tempo2[i]){
                fin.push_back(num);
                if ( fin.size() == k){
                    break;
                }
            }
        }
        return fin;      
    }
};
// Time & Space Complexity
// Time complexity: 
// O(n)
// Space complexity: 
// O(n)

// // Solution 2
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> freqMap;
//         for ( const int i : nums )
//         {
//             freqMap[i]++;
//         }
//         vector<pair<int,int>> freqVect;
//         for ( const auto& [k,v]: freqMap){
//             freqVect.push_back({v,k});
//         }
//         sort(freqVect.rbegin(),freqVect.rend());
//         vector<int> fin; 
//         int idx=0;
//         while(k--)
//         {
//             fin.push_back(freqVect[idx].second);
//             idx++;
//         }
//         return fin;      
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(nlogn)
// // Space complexity: 
// // O(n)

// // Solution 3
// // Defines the 'Solution' class, which holds our function
// class Solution {public: 
// // Declares the function 'topKFrequent' which takes a vector of integers 'nums'
// // and an integer 'k', and returns a vector of integers.
//      vector<int> topKFrequent(vector<int>& nums, int k) {
// // 1. --- Frequency Counting ---

// // Create an unordered_map (hash map) to store the frequency of each number.
// // The 'key' will be the number from 'nums', and the 'value' will be its count.
//     unordered_map<int,int> count;
// // Loop through each number ('num') in the input vector 'nums'.
// // Increment the count for the current 'num' in the map.
// // If 'num' is not in the map yet, it's automatically added with a count of 1.
//     for (int num: nums) {count[num]++;}

// // 2. --- Min-Heap for Top K ---

// // Create a min-heap (priority_queue). This is the clever part!
// // It stores pairs: {frequency, number}.
// // 'greater<...>' makes it a min-heap, meaning the pair with the *smallest* // frequency will always be at the top.
//     priority_queue<pair<int,int> , vector<pair<int,int>> ,greater<pair<int,int>>> hp; // heap
// // Loop through each 'entry' (a {number, frequency} pair) in our 'count' map.
// // Note: 'entry.first' is the number, 'entry.second' is its frequency.
//     for ( auto& i : count){

// // Push the {frequency, number} pair onto the min-heap.
// // We put frequency *first* so the heap sorts by frequency.
//         hp.push( {i.second,i.first} ) ;


// // This is the key optimization:
// // If the heap's size exceeds 'k', we remove the smallest element.
// // Since it's a min-heap, 'heap.pop()' removes the element with the 
// // *lowest frequency* currently in the heap.
//         if ( hp.size() > k) {hp.pop();}
//     }   


// // After the loop, the heap contains exactly the 'k' elements 
// // with the highest frequencies.

// // 3. --- Final Result ---

// // Create a vector 'res' to store our final result.
//     vector<int> fin; 

// // Loop 'k' times to extract all elements from the heap.
// // (Alternatively, you could use 'while (!heap.empty())')
//     for( int i = 0; i<k ; i++){

// // Get the top element from the heap (which is a {frequency, number} pair).
// // 'heap.top().second' accesses the 'number' part of the pair.
//         fin.push_back(hp.top().second); 
//         // NO fin.push_back(hp.top().second());
//         // NO fin.push_back(hp.top.second());
//         // NO fin.push_back(hp.top.second);

// // Remove the top element from the heap to access the next one.
//         hp.pop();
//     }

// // Return the 'res' vector containing the top k frequent numbers.
// // Note: The order in 'res' isn't guaranteed (e.g., it might be 
// // from k-th most frequent to 1st most frequent), but the problem 
// // usually allows any order.
//     return fin;
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(nlogk)
// // Space complexity: 
// // O(n+k)
// // Where 
// // n is the length of the array and 
// // k is the number of top frequent elements.

// Helper function to print a vector in the format [elem1, elem2, ...]
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i == vec.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

// Main function to run and test the solution
int main() {
    // Create an instance of the Solution class
    Solution sol;

    cout << "--- Testing Top K Frequent Elements ---" << endl << endl;

    // --- Example 1 ---
    cout << "Example 1:" << endl;
    vector<int> nums1 = {1, 2, 2, 3, 3, 3};
    int k1 = 2;
    cout << "Input: nums = ";
    printVector(nums1);
    cout << "k = " << k1 << endl;
    
    // Call the function with the first example
    vector<int> result1 = sol.topKFrequent(nums1, k1);
    
    // Print the output
    cout << "Output: ";
    printVector(result1);
    cout << "Expected: [2, 3] or [3, 2]" << endl;
    cout << "------------------------------------" << endl;

    // --- Example 2 ---
    cout << "Example 2:" << endl;
    vector<int> nums2 = {7, 7};
    int k2 = 1;
    cout << "Input: nums = ";
    printVector(nums2);
    cout << "k = " << k2 << endl;

    // Call the function with the second example
    vector<int> result2 = sol.topKFrequent(nums2, k2);

    // Print the output
    cout << "Output: ";
    printVector(result2);
    cout << "Expected: [7]" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}