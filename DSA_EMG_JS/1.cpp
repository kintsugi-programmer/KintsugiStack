#include <iostream>
#include <string>
using namespace std;

string ArrayChallenge(string strArr[], int arrLength) {
    // Parse the array to find the tree structure and target values
    // The first element contains the tree array, second and third are the target values
    
    // Extract tree values from the first string (remove brackets and split by comma)
    string treeStr = strArr[0];
    treeStr = treeStr.substr(2, treeStr.length() - 4); // Remove ["...]
    
    // Parse tree values
    int tree[100]; // Assuming max 100 nodes
    int treeSize = 0;
    string temp = "";
    
    for (int i = 0; i < treeStr.length(); i++) {
        if (treeStr[i] == ',') {
            if (temp == "#") {
                tree[treeSize] = -1; // Use -1 for null nodes
            } else {
                tree[treeSize] = stoi(temp);
            }
            treeSize++;
            temp = "";
        } else if (treeStr[i] != ' ') {
            temp += treeStr[i];
        }
    }
    // Add last element
    if (temp == "#") {
        tree[treeSize] = -1;
    } else {
        tree[treeSize] = stoi(temp);
    }
    treeSize++;
    
    // Parse target values
    string val1Str = strArr[1];
    val1Str = val1Str.substr(1, val1Str.length() - 2); // Remove quotes
    int val1 = stoi(val1Str);
    
    string val2Str = strArr[2];
    val2Str = val2Str.substr(1, val2Str.length() - 2); // Remove quotes
    int val2 = stoi(val2Str);
    
    // Find positions of val1 and val2 in the tree
    int pos1 = -1, pos2 = -1;
    for (int i = 0; i < treeSize; i++) {
        if (tree[i] == val1) pos1 = i;
        if (tree[i] == val2) pos2 = i;
    }
    
    // Find LCA using the property that in array representation:
    // For node at index i: parent is at (i-1)/2, left child at 2*i+1, right child at 2*i+2
    
    // Get all ancestors of pos1
    bool ancestors1[100] = {false};
    int current = pos1;
    while (current >= 0) {
        ancestors1[current] = true;
        if (current == 0) break;
        current = (current - 1) / 2; // Move to parent
    }
    
    // Find first common ancestor starting from pos2
    current = pos2;
    while (current >= 0) {
        if (ancestors1[current]) {
            return to_string(tree[current]);
        }
        if (current == 0) break;
        current = (current - 1) / 2; // Move to parent
    }
    
    return "0"; // Should not reach here if tree is valid
}

// keep this function call here
int main(void) {
    string A[] = coderbyteInternalStdInFunction(stdin);
    int arrLength = sizeof(A) / sizeof(*A);
    cout << ArrayChallenge(A, arrLength);
    return 0;
}