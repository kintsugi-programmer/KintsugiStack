#include<bits/stdc++.h>
using namespace std;

// // Solution 1
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if (s.size() != t.size()) { return false; }
//         for(int i=0; i<s.size(); i++){
//             if (s[i]!=t[i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(nlogn+mlogm)
// // Space complexity: 
// // O(1) or 
// // O(n+m) depending on the sorting algorithm.
// // Where n is the length of string s and m is the length of string t.

// // Solution 2
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if (s.size() != t.size()) { return false; }
//         return (s==t) ; 
//     }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(nlogn+mlogm)
// // Space complexity: 
// // O(1) or 
// // O(n+m) depending on the sorting algorithm.
// // Where n is the length of string s and m is the length of string t.

// // Solution 3
// class Solution{
//     public:
//         bool isAnagram(string s, string t){
//             if (s.size() != t.size()) { return false; }
//             unordered_map<char, int> freq_map;
//             for (int i=0; i<s.size(); i++){
//                 freq_map[s[i]]++;
//             }
//             for (int i=0; i<s.size(); i++){
//                 freq_map[t[i]]--;
//             }
//             for (int i=0; i<s.size(); i++){
//                 if(freq_map[s[i]]>0) {
//                     return false;
//                 }
//             }
//             return true;
//         }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(n+m)
// // Space complexity: 
// // O(1) or O(k) since we have at most 26 different characters.
// // The space is proportional to the number of unique characters, let's call it k
// // Where n is the length of string s and m is the length of string t.

// // Solution 4
// class Solution{
//     public:
//         bool isAnagram(string s, string t){
//             if (s.size() != t.size()) { return false; }
//             vector<int> counts(26,0);
//             for (int i=0; i<s.size(); i++){
//                 counts[s[i]-97]++;
//             }
//             for (int i=0; i<s.size(); i++){
//                 counts[t[i]-97]--;
//             }
//             // or merge them
//             // for (int i = 0; i < s.length(); i++) {
//             //     count[s[i] - 'a']++;
//             //     count[t[i] - 'a']--;
//             // }
//             for (int i=0; i<s.size(); i++){
//                 if(counts[s[i]-97]>0) {
//                     return false;
//                 }
//             }
//             // or traverse like this
//             // for (int val : count) {
//             //     if (val != 0) {
//             //         return false;
//             //     }
//             // }
//             return true;
//         }
// };
// // Time & Space Complexity
// // Time complexity: 
// // O(n+m)
// // Space complexity: 
// // O(1) since we have at most 26 different characters.
// // Where n is the length of string s and m is the length of string t.

// Solution 5
class Solution{
    public:
        bool isAnagram(string s, string t){
            if (s.size() != t.size()) { return false; }
            unordered_map<char, int> freq_map;
            unordered_map<char, int> freq_map2;
            for (int i=0; i<s.size(); i++){
                freq_map[s[i]]++;
            }
            for (int i=0; i<s.size(); i++){
                freq_map2[t[i]]++;
            }
        
            return freq_map == freq_map2 ;
        }
};
// Time & Space Complexity
// Time complexity: 
// O(n+m)
// Space complexity: 
// O(1) since we have at most 26 different characters.
// Where n is the length of string s and m is the length of string t.



// Runner main function
int main() {
    // Create an instance of the Solution class
    Solution sol;

    // --- Test Case 1 ---
    string s1 = "racecar";
    string t1 = "carrace";
    // The boolalpha manipulator is used to print 'true' or 'false' instead of 1 or 0
    cout << "Input: s = \"" << s1 << "\", t = \"" << t1 << "\"" << endl;
    cout << "Output: " << boolalpha << sol.isAnagram(s1, t1) << endl;
    cout << "-------------------------" << endl;

    // --- Test Case 2 ---
    string s2 = "jar";
    string t2 = "jam";
    cout << "Input: s = \"" << s2 << "\", t = \"" << t2 << "\"" << endl;
    cout << "Output: " << boolalpha << sol.isAnagram(s2, t2) << endl;
    cout << "-------------------------" << endl;
    
    // --- Additional Test Case (True) ---
    string s3 = "listen";
    string t3 = "silent";
    cout << "Input: s = \"" << s3 << "\", t = \"" << t3 << "\"" << endl;
    cout << "Output: " << boolalpha << sol.isAnagram(s3, t3) << endl;
    cout << "-------------------------" << endl;

    // --- Additional Test Case (False, different lengths) ---
    string s4 = "apple";
    string t4 = "apply";
    cout << "Input: s = \"" << s4 << "\", t = \"" << t4 << "\"" << endl;
    cout << "Output: " << boolalpha << sol.isAnagram(s4, t4) << endl;

    return 0;
}