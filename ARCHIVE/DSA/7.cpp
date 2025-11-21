// Only Runner code is Buggy
#include <iostream>
#include <vector>
#include <string>
#include <sstream> // For stringstream in encode
#include <algorithm> // For find in decode (though s.find is part of <string>)

using namespace std;

// // WRONG Solution 1
// class Solution {
// public:
//     string encode(vector<string>& strs) {
//         string s = ""; // initialise too to avoid garbage
//         for ( auto element : strs ){
//             s+=element;
//             s+="#";
//         }
//         return s;
//     }
//     vector<string> decode(string s) {
//         vector<string> strs = {}; // initialise too to avoid garbage
//         string buffer = "";
//         for ( auto letter : s ){
//             if (letter == '#'){ strs.push_back(buffer); buffer="";}
//             else {buffer += letter;}
//         }
//         return strs;
//     }
// };

// // Solution 2
// class Solution {
// public:
//     string encode(vector<string>& strs) {
//         string s = ""; // initialise too to avoid garbage
//         for ( auto element : strs ){
//             s+=element;
//             s+="#0#";
//         }
//         return s;
//     }
//     vector<string> decode(string s) {
//         vector<string> strs = {}; // initialise too to avoid garbage
//         string buffer = "";
//         for ( int i = 0; i < s.size(); i++ ){
//             if ( i+2<s.size()
//                 && ( s[i] == '#' && s[i+1] == '0' && s[i+2] == '#' )
//             ){ strs.push_back(buffer); buffer=""; 
//                  i+=2;;// nice move by me :)
//                  }
//             else {buffer += s[i];}
//         }
//         return strs;
//     }
// };
//  // - Passed but, Potential Problem 
//  //   - fails at case where input is having same unique seperator by chance
// // Time & Space Complexity
// // Time complexity: O(m) for each encode() and decode() function calls.
// // Space complexity: O(m+n) for each encode() and decode() function calls.
// // Where m is the sum of lengths of all the strings and n is the number of strings.

// // Illegal Solution 3
// class Solution {
// public:
//     vector<int> freq = {};

//     string encode(vector<string>& strs) {
//         string s = ""; // initialise too to avoid garbage
//         for ( auto element : strs ){
//             s+=element;
//             freq.push_back(element.size());
//         }
//         return s;
//     }

//     vector<string> decode(string s) {
//         vector<string> strs = {}; // initialise too to avoid garbage
//         string buffer = "";
//         int index=0;
//         for ( auto times : freq){
//             for ( int i= 0; i< times; i++) {
//                 buffer+=s[index];
//                 index++;
//             }
//             strs.push_back(buffer);
//             buffer="";
//         }
//         return strs;

//     }
// };

// --- Helper function to print a vector of strings ---
void printVector(const vector<string>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

// --- Example Usage ---
int main() {
    Solution sol;

    // Example 1
    vector<string> input1 = {"neet", "code", "love", "you"};
    cout << "Input 1:    ";
    printVector(input1);
    string encoded1 = sol.encode(input1);
    cout << "Encoded 1:  \"" << encoded1 << "\"" << endl;
    vector<string> decoded1 = sol.decode(encoded1);
    cout << "Decoded 1:  ";
    printVector(decoded1);
    cout << "Match:      " << (input1 == decoded1 ? "true" : "false") << endl;

    cout << "--------------------" << endl;

    // Example 2
    vector<string> input2 = {"we", "say", ":", "yes"};
    cout << "Input 2:    ";
    printVector(input2);
    string encoded2 = sol.encode(input2);
    cout << "Encoded 2:  \"" << encoded2 << "\"" << endl;
    vector<string> decoded2 = sol.decode(encoded2);
    cout << "Decoded 2:  ";
    printVector(decoded2);
    cout << "Match:      " << (input2 == decoded2 ? "true" : "false") << endl;

    cout << "--------------------" << endl;

    // Example 3 (with empty string and delimiter)
    vector<string> input3 = {"hello#world", "", "123"};
    cout << "Input 3:    ";
    printVector(input3);
    string encoded3 = sol.encode(input3);
    cout << "Encoded 3:  \"" << encoded3 << "\"" << endl;
    vector<string> decoded3 = sol.decode(encoded3);
    cout << "Decoded 3:  ";
    printVector(decoded3);
    cout << "Match:      " << (input3 == decoded3 ? "true" : "false") << endl;

    return 0;
}