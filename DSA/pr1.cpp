#include<bits/stdc++.h>
using namespace std;
int main(){    
    // Read Question Multiple times pls
    // Read Question Multiple times pls

    // #include<bits/stdc++.h> // STL Lib
    // using namespace std;

    // Vector Array
    // a way to store and access the list of elements.
    // dynamic array in C++ is std::vector
    // Why It's Useful: You don't need to know the exact number of elements you'll be storing ahead of time
    // #include <vector> // lib
    std::vector<int> arr1; // empty vector
    std::vector<int> arr2={1,2,3}; // initialised vector
    std::vector<int> arr3(5); // size =5, each element value=default value=0
    std::cout<<arr3[0]<<std::endl; //0 // Direct Access (0based)
    std::vector<int> arr4(5,90); // size =5, each element value=90
    std::cout<<arr4[0]<<std::endl; //90
    std::cout<<arr1.size()<<std::endl; //0 // Get Length
    arr4.push_back(5); // Append // btw each push in dynamic array is O(1)
    std::cout<<arr4[5]<<std::endl; //5
    for ( int i =0 ; i<arr2.size(); i++) { std::cout<<arr2[i]<<"    ";} // Vector array traversal
    std::cout<<std::endl;
    // std::vector it's just a dynamic array that you can access with integer indices (like tempo[0], tempo[1], etc.). It doesn't have a .find() method that takes a string, nor can you use a string inside the square brackets [].
    // The perfect tool for this is a std::unordered_map. It allows you to store key-value pairs, which is exactly what you need: the sorted string as the key and the list of anagrams as the value.

    // For Loop
    for ( int i=0; i<5; i++) std::cout<<i;
    // 01234

    // Hashset
    std::unordered_set<int> hashSet;
    hashSet.insert(1);
    std::cout<<(
        hashSet.find(1) 
        != 
        hashSet.end() // i.e if find give hashSet.end() ptr, then element doesnt exist
    )<<std::endl; // true as 1 exists in hashset 
    // 1
    // re-insert array elements in hashmap & checker while insertion: number not existed in hashmap tip
    //  // given: vector<int>& nums
    //     unordered_set<int> hashbrown; // re-insert array elements in hashmap
    //     for (int i=0; i<nums.size(); i++){ 
    //         if ( hashbrown.find(nums[i]) != hashbrown.end() ) // checker while insertion: number not existed in hashmap
    //         {
    //         }
    //     }
    // ( hashbrown.find(nums[i] ) only returns ptr, not index, tip

    // Sorting
    // #include <algorithm> // Required for std::sort

    // Sorting a string
    std::string word = "cab";
    std::sort(word.begin(), word.end());
    std::cout << "Sorted word: " << word << std::endl;
    // Sorted word: abc

    // std::sort with Reverse Iterators
    std::vector<int> data = {40, 10, 50, 20, 30};

    // 1. Sort in default ascending order
    std::sort(data.begin(), data.end());
    std::cout << "Ascending: ";
    for (int x : data) std::cout << x << " "; // Output: 10 20 30 40 50
    std::cout << std::endl;
    // Ascending: 10 20 30 40 50

    // 2. Sort in descending order using reverse iterators
    sort(data.rbegin(), data.rend());
    std::cout << "Descending: ";
    for (int x : data) std::cout << x << " "; // Output: 50 40 30 20 10
    std::cout << std::endl;    
    // Descending: 50 40 30 20 10

    // Sorting in Vector
    // (TC): O(nlogn) on average and in the worst case
    // (SC): O(logn)
    // std::sort sorts the vector in-place and does not return a sorted vector. Its return type is void
    std::vector<int> v1 = {1,4,2,0};
    std::cout<<"v1: "<<v1[0]<<" "<< v1[1] << " " << v1[2] << " " << v1[3] << std::endl;
    // v1: 1 4 2 0
    std::sort(v1.begin(), v1.end()); // asc default
    std::cout<<"v1(sorted): "<<v1[0]<<" "<< v1[1] << " " << v1[2] << " " << v1[3] << std::endl;
    // v1(sorted): 0 1 2 4
    std::sort(v1.begin(), v1.end(), std::greater<int>()); // dsc
    std::cout<<"v1(sorted dsc): "<<v1[0]<<" "<< v1[1] << " " << v1[2] << " " << v1[3] << std::endl;
    // v1(sorted dsc): 4 2 1 0
    // - Downside of This STL Sort
    //     - Differs from lang to lang
    //     - good sort algos do O(nlogn)
    //     - bad sort algos do O(n**2)
    //     - uncertain of SC
    //     - uncertain of TC
    //     - lenghty at cases where STL is not available

    // unordered sets in c++ contains unique elements
    // if we even insert duplicate, it will reject it
    // we can make unord set with method to copy full the vector array, rejecting the duplicates
    v1.push_back(1);
    v1.push_back(1);
    std::unordered_set<int> hashSet2(v1.begin(), v1.end()) ;// TC: O(n) avg tc, O(n**2) worst rare tc where glitches happen &SC: O(k) Avg, O(n) worst, k is number of unique elements
    std::cout<< hashSet2.size() << std::endl; // 4 // unique elements in unord set
    std::cout<< v1.size() << std::endl; // 6 // duplicates elements in vect arr

    string s = "aba" ;
    string t = "aab" ; 
    // string equality
    cout<< 
    ( s==t ) // SC: O(min(N,M)), TC: O(1)
    << endl; // 0
    // cout<<s==t<< endl; // NO, always use explicit brackets to avoid glitches
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<( s==t )<< endl; // 1

    // Storing Character Frequencies
    // Storing Character Frequencies Way 1: Dynamic Array/ Vector
    vector<int> counts(26,0); // Creates a vector of size 26, with all elements initialized to 0.
    // Since the problem states the strings only contain lowercase English letters, you don't need a flexible map. A simple array of size 26 is faster.
    // Here idx 0 -> 'a' -> 97
    // 25 -> 'z' -> 122
    char ch = 'a';
    counts[ch-97]++;
    counts[ch-97]++;
    cout<<counts[0]<<endl; //2

    // Hashmap/ Unordered Map
    // This is the most powerful tool. 
    // An unordered_map (or hash map) is like a super-fast dictionary. 
    // You give it a key and it stores an associated value. 
    // Its superpower is checking if a key exists or retrieving its value in an average of constant time, $O(1)$, which is incredibly fast.
    // Why It's Useful: It provides incredibly fast lookups, insertions, and deletions of elements. If you know the key, you can find its value almost instantly, no matter how many items are in the map. This is perfect for grouping items or counting frequencies.
    // For a problem where you're looking for target - nums[i], a hash map is perfect for instantly checking: "Have I seen the number I need before?"
    unordered_map<string,int> std_scores;
    std_scores["Bali"]=101;
    std_scores["Bali"]=100;
    cout<<std_scores["Bali"]<<endl;// 100


    std::vector<int> nums1 = {3, 4, 5, 6, 4, 5, 4};
    std::unordered_map<int,int> momos;

    // Application : freq count for array containing duplicates, and index find for array containing unique elements

    // Application : freq count for array containing duplicates
    for (int i: nums1)
    // special iterator
    // here i is not i , it's actually nums[i] of traditional for loop
    // faster
    // but can only use nums[i](value only), not i (index)
    
    {
        momos[i]++ ;// If num is not in the map, it's added. Then its count is incremented.
    }
    // Fast Lookups in hashmap
    int target =4;
    if ( momos.find(target) != momos.end()){
        std:: cout << target << "'s momo :"<< momos[target] << std::endl ;
    }
    // 4's momo :3

    // Application :index find for array containing unique elements
    std::unordered_map<int,int> momos2;
    for ( int i=0 ; i<nums1.size(); i++){ 
        momos2[nums1[i]]=i; // not momos2[nums[i]]++ as it dont make sense
        // or momos2.insert( { nums[i] , i } );
    }
    
    // Storing Character Frequencies Way 2: Hashmap/ Unordered Map
    unordered_map<char,int> freq_map;
    freq_map['a']++; 
    // If 'a' isn't in the map, it's added with value 1.
    // If it is, its value is incremented.
    // it has capability of direct comparison
        // freq_map == freq_map2 is valid
    string text = "hello world";
    unordered_map<char,int> char_freq;
    for ( char c: text){
        char_freq[c]++;
    }
    int charindex = 2;
    cout<< "Char "<<text[charindex]<<" comes "<<char_freq[text[charindex]]<<" times\n";
    // Char l comes 3 times


    // Character Arithmatics
    // char types are internally represented as numbers (like ASCII values). This allows you to perform math on them
    char c1 = 'a';
    char c2 = 'b';
    char c3 = 'c';
    int i1 = (c3 - c1); //2
    cout<<i1<<endl; //2
    // ASCII Values
    // 'a' = 97
    // 'b' = 98
    // 'y' = 121
    // 'z' = 122
    // 'A' = 65
    // 'B' = 66
    // 'Y' = 89
    // 'Z' = 90

    // Calculate the 0-based index for any character 
    char mychar = 'e';
    int index = mychar - 'a'; 
    std::cout << "The character '" << mychar << "' has an index of: " << index << std::endl;
    // The character 'e' has an index of: 4

    // General Looping tip
    // for (int i=0; i<s.size(); i++){
    //     counts[s[i]-97]++;
    // }
    // for (int i=0; i<s.size(); i++){
    //     counts[t[i]-97]--;
    // }
    // // you can just put them in one loop na
    // for (int i=0; i<s.size(); i++){
    //     counts[s[i]-97]++;
    //     counts[t[i]-97]--;
    // }
    // // You may forget this while focusing on knowledge

    // Read Question Multiple times pls
    // return {}; // No solution found, return an empty vector
    // else, this error comes: Line 10: Char 5: error: non-void function does not return a value in all control paths [-Werror,-Wreturn-type] 10 | }^1 error generated.

    // Pair
    // you need to link two pieces of information together. 
    // For example, what if you need to sort the numbers but not lose their original positions ?
    // A std::pair is perfect for this. It holds exactly two items, which you can access with .first and .second.
    // #include <utility> // lib
    std::pair<std::string, int> student1= {"Bali",101}; // {} way in cpp
    std::pair<std::string, int> student2{"Bhati",100}; // classic way
    auto student3 = std::make_pair("Bhaskar",100); // way of std::make_pair() helper function ,This is useful because the compiler can often figure out the types for you.
    student1.second=100;
    std::cout<<student1.first<<"\t"<<student1.second<<std::endl;// Bali    100

    // Vector of Pairs
    // value_index_pairs_vector 
    std::vector<std::pair<int,int>> pv ; // vector of value_index_pairs
    std::vector<int> nums = {15, 8, 22, 5}; // random vect array, given in problem
    for (int i=0; i <nums.size(); i++){ // Store each number with its original index
        pv.push_back( { nums[i] , i } ); 
        // push_back() method
        // , with to push pairs: push_back({})
        // & our case :  push_back({value,index})
    }
    std::sort(pv.begin(),pv.end()); // Sort the pairs. By default, it sorts by the first element (the value).
    for (int i=0; i<pv.size(); i++){
        std::cout<<pv[i].first<<"<-"<<pv[i].second<<std::endl;
    }
    // 5<-3
    // 8<-1
    // 15<-0
    // 22<-2

    // String
    // #include <string>
    // String Concatenation
    // std::to_string: A simple function that converts a number (like an int) into its string representation.
    // String Concatenation: The process of joining two or more strings together to form a new, single string. In C++, this is easily done with the + or += operator
    // Why They're Useful: You often need to build a string from different pieces of data, including numbers. std::to_string allows you to seamlessly integrate numbers into your strings.
    std::string greet = "Hello World";
    std::string name= "Bali";

    // 1. String Concatenation using '+'
    std::string message = greet + ", I am " + name + " !!!";
    cout<<message<<endl;
    // Hello World, I am Bali !!!

    // 2. Using std::to_string
    int version = 5;
    string appname = " KintsugiDev.Studio ver."+ to_string(version); // We must convert the number '5' to a string before we can join it
    cout<< appname << endl;
    //  KintsugiDev.Studio ver.5

    // 3. Building a key from parts using '+='
    std::string key = "";
    key+="user";
    key+=":";
    key+="Bali";
    key+=",";
    key+="id";
    key+=":";
    key+=to_string(2022496);
    cout<<key<<endl;
    // user:Bali,id:2022496

    // std::priority_queue (Heap)
    // priority_queue is a container that organizes elements based on priority. 
    // By default, it's a max-heap, meaning that whenever you look at the top() element, it's always the largest one in the container.
    // When you pop() an element, the largest one is removed.
    // Why It's Useful: It's perfect for problems where you need to keep track of the "top K" items without sorting the entire collection. For example, you can maintain a priority queue of size k. As you process new items, you can compare them to the smallest item in your "top K" set and replace it if the new item is larger. This is much more efficient than sorting everything.
    // #include <queue>
    // 1. Default priority_queue (Max-Heap)
    priority_queue<int> max_heap;
    max_heap.push(10);
    max_heap.push(20);
    max_heap.push(30);
    // The top element is always the largest.
    cout<< "Largest of max_heap :"<<max_heap.top()<<endl; //30
    // Largest of max_heap :30
    // 2. Min-Heap (keeps the smallest element at the top)
    // You must provide extra template arguments to change its behavior.
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(10);
    min_heap.push(20);
    min_heap.push(30);
    // Now, the top element is always the smallest.
    cout<< "Smallest of min_heap :"<<min_heap.top()<<endl; //10
    // Smallest of min_heap :10

    // std::vector<std::vector<int>> (Bucket/2D Vector)
    // What It Is: This is simply a vector where each element is another vector. You can visualize it as a 2D grid or a list of lists.
    // Why It's Useful: It's great for grouping items into "buckets." 
    //      For instance, you could have a main vector where the index represents a frequency. 
    //      The element at my_buckets[5] would then be a vector containing all the numbers that appeared 5 times. 
    //      This technique, often called Bucket Sort, is a powerful way to organize data by a specific property (like frequency).
    // Create a vector of 5 "buckets", where each bucket is an empty vector of ints.
    int num_buck =5 ;
    vector < vector<int> > buckets(num_buck);
    // Let's put numbers into buckets based on some property.
    // For example, put numbers 10 and 11 into bucket 2.
    buckets[2].push_back(10);
    buckets[2].push_back(11);
    // Put number 25 into bucket 4.
    buckets[4].push_back(25);
    // Now, let's see what's in bucket 2.
    std::cout<< "Items in bucket 2: ";
    for (int items: buckets[2]) // buckets[2], not buckets
    {
        std::cout << items << " "; // Output: 10 11
    }
    std::cout << std::endl;
    // Items in bucket 2: 10 11 

    // Range-Based for Loop
    // What It Is: A cleaner, more modern syntax for a for loop that iterates through all the elements of a container (like a vector or map) without needing to manage indices or iterators manually.
    // Why It's Useful: It makes code much easier to read and write, and it reduces the chance of off-by-one errors with indices. You just declare a variable that will take the value of each element in the container, one by one.
    vector<int> numbers = { 1,2,3 };
    cout<< "nos:";
    // => 'num' will take the value of each element in 'numbers'.
    for (int num: numbers){
        cout<<num<<" "; // 1 2 3 
    }
    cout<<endl;
    // nos:1 2 3 
    // => It works with maps, too. 'const auto&' is efficient here.
    unordered_map<char, int> meow = { {'a',3}, {'b',5 }}; // "c" NO CHAR, 'c' YES CHAR
    cout<< "nos:";
    for ( const auto& pair : meow) {cout<<"{"<<pair.first<<","<<pair.second<<"}";}  // 'pair' is a key-value pair.
    cout<<endl;
    // nos:{b,5}{a,3}

    vector<string> strs = {}; // initialise too to avoid garbage
    string s = ""; // initialise too to avoid garbage

    // To convert an int to a std::string, use 
    // std::string str = std::to_string(your_int);.

    // To convert a std::string to an int, use 
    // int num = std::stoi(your_str);.

    return 0;
}