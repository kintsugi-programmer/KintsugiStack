#include<bits/stdc++.h>
using namespace std;
// // Solution 1
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map< string, vector<string> > tempo;

//         for ( int i=0 ; i<strs.size() ; i++){
//             // one string iteration "string1" strs[i]
//             string s = strs[i]; 
//             sort(s.begin(),s.end()); // s is sorted strs[i]
            
//             // Add the original string to the vector associated with the sorted key.
//             // If the key doesn't exist, C++ creates it automatically!
//             tempo[s].push_back(strs[i]);
//         //     if ( tempo.find(s) != tempo.end ) // if s exist in tempo
//         //     {
//         //         // append strs[i] in tempo[s] tempo[s].push_back(strs[i])
//         //         tempo[s].push_back(strs[i]);
//         //     }
//         //     else 
//         //     {
//         //         // make new str,{} in tempo
//         //         tempo[s].push_back(strs[i]);
//         //     }
//         }
//         vector<vector<string>> fin;
//         for ( auto const& pairs: tempo){ // eg: pair { "abc", {array of anagrams} } 
//             fin.push_back(pairs.second);
//         }
//         return fin;
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(m∗nlogn)
// // Space complexity: 
// // O(m∗n)
// // Where 
// // m is the number of strings and 
// // n is the length of the longest string.

// Solution 2
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string, vector<string> > tempo;
        for ( const string& s : strs)
        {
            // Create a character count array for each string
            // An array of 26 integers, one for each letter 'a' through 'z'.
            vector<int> freq(26,0);
            for (char c: s)
            {
                freq[c-'a']++;
            }
            // Build a unique key string from the count array.
            // For "eat": count['a'-'a']=1, count['e'-'a']=1, count['t'-'a']=1
            // Key might look like: "1.0.0.0.1.....1...."
            string _ID = "";
            for ( int i =0; i<26; i++)
            {
                _ID+= to_string(freq[i]);
                _ID+="."; // as a seperator
            }
            tempo[_ID].push_back(s);
        }
        vector< vector<string>> fin={};
        for (auto const& [key,val]: tempo)
        {
            fin.push_back(val);
        }
        return fin;
    }
};
// Time & Space Complexity
// Time complexity: 
// O(m∗n)
// Space complexity:
// O(m) extra space.
// O(m∗n) space for the output list.
// Where 
// m is the number of strings and 
// n is the length of the longest string.

// Helper function to print the result in a readable format
void printResult(const std::vector<std::vector<std::string>>& result) {
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << "\"" << result[i][j] << "\"";
            if (j < result[i].size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution sol;

    // Example 1
    std::cout << "Example 1:" << std::endl;
    std::vector<std::string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> result1 = sol.groupAnagrams(strs1);
    printResult(result1); // Expected: [["bat"],["nat","tan"],["ate","eat","tea"]] (order may vary)

    std::cout << "\nExample 2:" << std::endl;
    // Example 2
    std::vector<std::string> strs2 = {""};
    std::vector<std::vector<std::string>> result2 = sol.groupAnagrams(strs2);
    printResult(result2); // Expected: [[""]]

    std::cout << "\nExample 3:" << std::endl;
    // Example 3
    std::vector<std::string> strs3 = {"a"};
    std::vector<std::vector<std::string>> result3 = sol.groupAnagrams(strs3);
    printResult(result3); // Expected: [["a"]]

    return 0;
}