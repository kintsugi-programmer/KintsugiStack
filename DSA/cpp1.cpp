#include<bits/stdc++.h>
using namespace std;
bool custom_comp(pair<int,int> p1, pair<int,int> p2 ){
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    if (p1.second == p2.second) { if (p1.first > p2.first ) return true; 
    else return false; } // be clear of all cases else compliler will give warning/ error // 1.cpp:8:1: warning: control reaches end of non-void function [-Wreturn-type]
    else return false;
}; 
// Usage: sort( v.begin(), v.end() , custom_comp ) ;

int main(){
// C++ STL
// Containers
// Sequential Containers - Store Data Sequentially
// Vector
// Dynamic array
// used when size is unknown or changes
// #include<vector>
vector<int> v;// size 0, cap 0
cout<<v.size()<<endl;// size //NA TC
//0
cout<<v.capacity()<<endl;// capacity //NA TC
//0
v.push_back(0);//push_back// O(1) TC
v.emplace_back(1);//emplace_back//O(1) TC
cout<<v.capacity()<<endl;
//2
v.pop_back();//pop_back//O(1) TC
cout<<v.capacity()<<endl;
//2
cout<<v.size()<<endl;
//1
v.push_back(1);
v.push_back(2);
cout<<v.front()<<endl;// front//O(1) TC
// 0
cout<<v.back()<<endl;// back//O(1) TC
// 2
// Dynamic Growth and Capacity
vector<int> v1 = {1,2,3};
cout<<v1.size()<<"\t"<<v1.capacity()<<endl;
// 3    3
v1.pop_back();
v1.pop_back();
cout<<v1.size()<<"\t"<<v1.capacity()<<endl;
// 1    3
// even we remove the elements, still capacity remains same
v1.push_back(1); // simple append, size<=capacity
v1.push_back(1); // simple append. size=capacity
v1.push_back(1); // size exceeds capacity,new capacity needed, new mem allocation , copy old with new element in this new mem
cout<<v1.size()<<"\t"<<v1.capacity()<<endl;
// 4    6
// just to add one more element, new memory took of double of size, old copied and new element got appended
v1.pop_back();
cout<<v1[2]<<"\t"<<v1.at(2)<<endl;
// 1    1
// Initialization ways
vector<int> v2 = {1,2,2};
vector<int> v3(3,-1); // {-1,-1,-1}
vector<int> v4(v3); // {-1,-1,-1}

// vector::insert()
// Big O(N) TC
// let v = {1,2,2}
v = {1,2,2};
// Insert a single value: v.insert(iterator_position, value)
// Insert multiple copies of a value: v.insert(iterator_position, count, value)
// Insert a range of values: v.insert(iterator_position, range_begin, range_end

v.insert(v.begin(),5); // at begin
// v is now {5, 1, 2, 2}
// We inserted 5 at the beginning.
v.insert(v.begin()+2,9); // at other index
// v is now {5, 1, 9, 2, 2}
// We inserted 9 at index 2 (before the 3rd element).

v.insert(v.end(),3,10); // at end + multiple copies of value
// v is now {5, 1, 9, 2, 2, 10, 10, 10}

vector<int> other = {10,20};
v.insert(v.begin()+1,other.begin(),other.end());
// v is now {5, 10, 20, 1, 9, 2, 2, 10, 10, 10}

// vector::erase()
// Big O(N) TC
// Erase a single element: v.erase(iterator_position) // Crucially, it returns an iterator to the element after the one erased.
// Erase a range of elements: v.erase(range_begin, range_end) // The range is [begin, end). It erases up to but not including end.

v.erase(v.begin());
// v is now { 10, 20, 1, 9, 2, 2, 10, 10, 10}

v.erase(v.begin()+1,v.end());
// v is now { 10 }

// clear() :  Deletes all elements in the vector, resulting in an empty vector. After clear(), the size becomes zero, but the internal capacity remains the same.
// empty() : Checks if the vector is empty, returning a boolean value (1 for true, 0 for false).
cout<<v.empty()<<endl; //0
v.clear();
cout<<v.empty()<<endl;//1

// traverse
for ( auto i : v2 ){
    cout<<i<<"\t";
}cout<<endl;
// 1       2       2

// Example: std::vector
std::vector<int> vec = {10, 20, 30};

// vec.begin() -> points to 10
// vec.end()   -> points to memory *after* 30

// it = vec.rbegin()
//   - base iterator is vec.end()
//   - *it returns *(vec.end() - 1), which is 30
// ++it
//   - base iterator becomes (vec.end() - 1), which points to 30
//   - *it returns *( (vec.end() - 1) - 1 ), which is 20
// ++it
//   - base iterator becomes (vec.end() - 2), which points to 20
//   - *it returns *( (vec.end() - 2) - 1 ), which is 10
// ++it
//   - base iterator becomes (vec.end() - 3), which is vec.begin()
//   - it now equals vec.rend(). Loop terminates.

// rbegin(), rend()

// List
// Sequential container like vectors
// implemented as doubly linked lists
// Random Access is NOT Possible (e.g., d[2])
// #include<list>
list<int> l;
l = {1,2};
l.push_back(3);
l.emplace_back(4);
l.push_front(0);
l.emplace_front(-1);
l.pop_back();
l.pop_front();

// traverse
for ( auto i : l ) {
    cout<<i<<"\t";
}cout<<endl;
// 0       1       2       3           

l.erase(l.begin());
cout<<l.size()<<endl; // size()
// 3
cout<<l.front()<<endl; // front()
// 1
cout<<l.back()<<endl; // back()
// 3
l.clear();// clear()
cout<<l.empty()<<endl; // empty()
// 1
l.insert(l.begin(),0); // same as push_front, emplace_front
cout<<l.front()<<endl;
// 0
l.insert(l.end(),4); // same as push_back, emplace_back
cout<<l.back()<<endl; 
// 4
// Insert a single value: v.insert(iterator_position, value)
// Insert multiple copies of a value: v.insert(iterator_position, count, value)
// Insert a range of values: v.insert(iterator_position, range_begin, range_end
// Erase a single element: v.erase(iterator_position) // Crucially, it returns an iterator to the element after the one erased.
// Erase a range of elements: v.erase(range_begin, range_end) // The range is [begin, end). It erases up to but not including end.
// rbegin(), rend()

// Deque (Double Ended Queue)
// Deque != Dequeue
// Implemented as Dynamic Arrays
// Random Access is Possible (e.g., d[2])
// #include<deque>
deque<int> d;
d = {1,2,3,4,5};
for ( auto val : d ) { cout<<val<< "\t"; }
// 1       2       3       4       5        
cout<<endl;
cout<<d.front()<<endl; // front()
// 1
cout<<d.back()<<endl; // back()
// 5
d.push_back(0);
d.emplace_back(0);
d.push_front(0);
d.emplace_front(0);
d.pop_back();
d.pop_front();
d.insert(d.begin(),-1);
d.insert(d.end(), -1);
d.erase(d.begin(),d.begin()+2);
d.erase(d.end(),d.end()-2);
for ( int i=0; i<d.size(); i++) // size()
{cout<<d[i]<< "\t";} // Random Access d[i] // can't done by Lists
cout<<endl; 
// Insert a single value: v.insert(iterator_position, value)
// Insert multiple copies of a value: v.insert(iterator_position, count, value)
// Insert a range of values: v.insert(iterator_position, range_begin, range_end
// Erase a single element: v.erase(iterator_position) // Crucially, it returns an iterator to the element after the one erased.
// Erase a range of elements: v.erase(range_begin, range_end) // The range is [begin, end). It erases up to but not including end.
d.clear();// clear()
cout<<d.empty()<<endl;// empty()
// rbegin(), rend()

// Pairs
// Utility Structure
// part of the C++ Utility Library.
//  A Pair is used to group any two values (Value 1 and Value 2) together. The data types of these two values can be different or the same.
// #include <utility> // <-- This is the one you need
pair<int,int> p = {1,5}; // NO MORE THAN 2 upper objects
pair<string,int> p1 = {"bali",100};
cout<<p1.first<<"\t";// .first
cout<<p1.second<<endl;// .second
// .first & .second is only access methods it can have'\
// bali    100
// Complex Pair Structures: Pair of Pairs
pair<int, pair<string,int> > p2 = { 100, {"bali" ,100}};
cout<<p2.first<<"\t";//100
// cout<<p2.second; // NOOOOO
cout<<p2.second.first<<"\t";
cout<<p2.second.second<<endl;
// 100     bali    100

// Complex Pair Structures: Vector of Pairs
vector<pair<string,int> > p3 = {{"bali" ,100}, {"bhaskar",98}, {"bhati",99}};
for (auto i : p3) {cout<<i.first<<i.second<<endl;}
// bali100
// bhaskar98
// bhati99
for ( pair<string,int> pp : p3 ) { cout<<pp.first<<pp.second<<endl; } 
// MAKE SURE TEMP PAIR VAR TOO HAVE SAMEDATATYPE AS IN VECT
// bali100
// bhaskar98
// bhati99

// Push Back vs. Emplace Back (Revisited)
// Emplace Back : Object is created BY FUNC at the time of insertion (in-place).
// Push Back : Object is created BY US before the function call.
// difference b/w push_back and emplace_back 
// push_back simpler
// emplace_back faster
p3.push_back({"Rijusmit",99});
p3.emplace_back("Kintsugi-Programmer",100);

// Containers: Non-Sequential (Container Adapters)
// Stack and Queues are used is short calculations of numebers orgs(order) , due to O(1) operations of push ,pop, top/front
// Priority Queue are specialized data structure & helps in sorting elements

// Stack
// Time Complexity (Stack Operations): push, top, and pop operations all have a time complexity of Big O(1).
// Containers: Non-Sequential (Container Adapters)
// LIFO DS
// #include<stack>
stack<int> s;
s.push(1); // push() // TC Big O(1)
s.push(2);
s.push(3);
s.emplace(-1); // emplace()
s.pop(); // pop() // last=top removed // TC Big O(1)
cout<<s.top()<<endl; // top() // TC Big O(1)
// 3
cout<<s.empty()<<endl; // empty()
// 0
cout<<s.size()<<endl; // size()
// 3
stack<int> s1; 
s1.swap(s); // swap()
cout<<s.size()<<endl;
// 0
cout<<s1.size()<<endl; 
// 3
s1.swap(s); 
// dequeueing way traversal 
while( ! s.empty() ) { cout<<s.top()<<" "; s.pop() ; }
cout<<endl;
// 3 2 1
// order of insert in stack != order of taking out of stack
// order of insert in stack , order of taking out of stack are reverse of each other
// Stack and Queues are used is short calculations of numebers orgs(order) , due to O(1) operations of push ,pop, top/front

// Queue
// Time Complexity (Queue Operations): push, front, and pop operations all have a time complexity of Big O(1)
// FIFO DS
// #include<queue>
queue<int> q;
q.push(-1);
q.push(1);
q.emplace(2); // emplace()
q.push(3); // push() // pushed at rear/back // TC Big O(1)
cout<<q.front()<<endl; // front() // TC Big O(1)
q.pop(); // pop() // first removed // TC Big O(1)
cout<<q.front()<<endl;// NO top(), in Queue, it's front()
cout<<q.empty()<<endl; // empty()
// 0
cout<<q.size()<<endl; // size()
// 3
queue<int> q1;
q1.swap(q); // swap()
// dequeueing way traversal 
while ( ! q1.empty() ) { cout<< q1.front() << "\t";q1.pop(); }
cout<<endl;
// 1       2       3        
// order of insert in queue = order of taking out of queue
// Stack and Queues are used is short calculations of numebers orgs(order) , due to O(1) operations of push ,pop, top/front

// Priority Queue
// Priority Queue are specialized data structure & helps in sorting elements
// A Priority Queue internally uses a Max Heap or a Min Heap structure. A Max Heap or Min Heap is a complete binary tree.
// Max Heap: The largest element is always at the top of the tree(default).
// Min Heap: The minimum element is always at the top(default).
// By default, the highest priority element is the one with the largest value (i.e., it implements a Max Heap).
// Visualization and Priority: Priority Queue is often visualized like a stack, with a Top where the highest priority element is stored.
// #include <queue> 

// Max-Priority Queue
// The largest item (highest value) always has the highest priority and is at the front.
// (Items In) --> 5, 20, 8
//               [======]
//               [ (20) ] <-- Top (Max value)
//               [  (8) ]
//               [  (5) ]
//               [______]
priority_queue<int> pq; // Default Creation (Max Heap - Largest value has highest priority)
pq.push(1); // push() // TC Big O(log N)
pq.emplace(2); // emplace() 
cout<<pq.top()<<endl; // top() // TC Big O(1)
// 2
pq.pop(); // pop()
cout<<pq.size()<<endl; // size()
// 1
cout<<pq.empty()<<endl; // empty()
// 0

// Min-Priority Queue
// The smallest item (lowest value) always has the highest priority and is at the front.
// (Items In) --> 42, 10, 3
//               [======]
//               [  (3) ] <-- Top (Min value)
//               [ (42) ]
//               [ (10) ]
//               [______]
priority_queue<int , vector<int>, greater<int> > pq1; // Reverse Order Creation (Min Heap - Smallest value has highest priority)
// The greater<int> is a Functor (a function object) that acts as a Comparator, defining the logic for comparison (in this case, reversing the default Max Heap order).
pq1.push(1); // push() // TC Big O(log N)
pq1.emplace(2); // emplace()
cout<<pq1.top()<<endl; // top() // TC Big O(1)
// 1
pq1.pop(); // pop() // TC Big O(log N)
cout<<pq1.size()<<endl; // size()
// 1
cout<<pq1.empty()<<endl; // empty()
// 0

// Containers: Associative Containers
// - Tabular Organisation
// map
// multimap
// set
// multiset
// unordered set

// map
// Map is used to store Key-Value PAIRS.
// - Unique Keys
// - Duplicate values Allowed
// - Default Sorted Order Asc
// #include<map>
map<string,int> m;
m["apple"]=100; // insertion 
m["apple"]=100; // modification
m.emplace("banana",125); // insertion // emplace() // TC Big O(log N)
m.insert({"momo",1000});// insert() // TC Big O(log N) 

// traversal
// Fixed: The syntax is "for (auto p : m)"
// Using "const auto& p" is more efficient as it avoids copying.
for ( const auto& p : m) {
    cout
    << p.first
    << p.second
    << endl ;
}
// apple100
// banana125
cout<<m.count("banana")<<endl; // count() // TC Big O(log N) 
// 1
cout<<m["apple"]<<endl; // random access
// 100
m.erase("apple"); // erase() // TC Big O(log N) 
if ( m.find("camera") != m.end() ){ // find(), Searches for a key. Returns an iterator to the element if found. If not found, returns m.end().
    cout<<"found\n";
} else {
    cout<<"not found\n";
}
// not found
cout<<m.size()<<endl; // size()
// 2
cout<<m.empty()<<endl; // empty()
// 0 

// multimap
// - Duplicate Keys Allowed, thus Random Access is not allowed
// - Duplicate values Allowed
// - Default Sorted Order Asc
// #include<map>
multimap<string,int> m1;
// m1["TV"] = 100 // NO 
m1.emplace("TV",100000);
m1.erase("TV");// Erase Way 1 // it removes all instances
m1.insert({"TV",100000});
m1.erase(m1 .find("TV")); // Erase Way 2 // Find iterator for the first instance of "TV" and erase it
cout<< m1.count("guava") << endl; // count // TC O(1)
// 0
if ( m1.find("apple") != m1.end() ){ // find(), Searches for a key. Returns an iterator to the element if found. If not found, returns m.end().
    cout<<"found\n";
} else {
    cout<<"not found\n";
}
// not found
cout<<m1.size()<<endl; // size()
// 0
cout<<m1.empty()<<endl; // empty()
// 1
m1.insert({"TV",100000});
m1.insert({"TV",100001});
m1.insert({"TV",100002});
// traversal
// Fixed: The syntax is "for (auto p : m)"
// Using "const auto& p" is more efficient as it avoids copying.
for ( const auto& p : m1) {
    cout
    << p.first
    << p.second
    << endl ;
}
// TV100000
// TV100001
// TV100002

// unordered_map
// most imp.
// most freq.
// - Unique Keys
// - Duplicate values Allowed
// - Unordered, No Sorted Order
// - insert, erase, and count functions: Big O(1) (Constant time, amortized time/average time).
// Note: In very rare cases (due to hash collisions), time complexity can reach Big O(N), but for practical use and time complexity calculation, Big O(1) is assumed.
// #include<unordered_map>
unordered_map<string, int> um;
um["apple"] = 100; // insertion
um["apple"] = 100; // modification
um.emplace("banana",100); // insertion // emplace() // TC O(1)
um.insert({"guava",100}); // insertion // emplace() // TC O(1)
um.erase("guava"); // erase() // TC O(1)
cout<< um.count("guava") << endl; // count // TC O(1)
// 0
// traversal
// Fixed: The syntax is "for (auto p : m)"
// Using "const auto& p" is more efficient as it avoids copying.
for ( const auto& p : um) {
    cout
    << p.first
    << p.second
    << endl ;
}
// banana100
// apple100
if ( um.find("apple") != um.end() ){ // find(), Searches for a key. Returns an iterator to the element if found. If not found, returns m.end().
    cout<<"found\n";
} else {
    cout<<"not found\n";
}
// not found
cout<<um.size()<<endl; // size()
// 2
cout<<um.empty()<<endl; // empty()
// 0

// Set 
// Set is a container that stores unique values.
// - Unique Values
// - Default Sorted Order
// internally implemented using a Self Balancing Tree
// #include <set>
set<int> st;
st.insert(1); // insert() // Big O(log N) time complexity
st.insert(2);
st.insert(3);
st.insert(4); 
    st.insert(4); // Duplicates IGNORED
// upper_bound is NOT vice-versa of lower_bound, it's completely different stuff
cout << "lower bound = " << *(st.lower_bound(1)) << endl; // lower_bound() // should NOT be less than key
// lower bound = 1
cout << "upper bound = " << *(st.upper_bound(1)) << endl; // upper_bound() // greater than key
// upper bound = 2
// traverse
for(auto val : st) {
    cout << val << " ";
}cout << endl;
// access ? set not supposed to access element
cout<<*(st.find(3))<<endl;// access way , it gives iterator, and dereference to value itself
// 3
cout<<st.count(4)<<endl;// count() // Big O(log N) time complexity // 1 obv
st.erase(4);// erase() // Big O(log N) time complexity

// multiset
// - Duplicate Values Allows
// - Default Sorted Order ASC
multiset<int> ms;

// unordered_set
// - Unique Values
// - Random Order(Not Sorted)
// - insert, count, and erase generally Big O(1) (amortized time).( O(n) at v.rare cases)
unordered_set<int> us;
// Unordered Map and Unordered Set are Very Optimised DS and USed Frequently in DSA Prob. Solving

// Iterators -- actual memory locations

// Vector Iterators
vector<int> v5 = {11111,2,3};
cout<< *(v5.begin()) << endl;  // begin() // (*vector.begin()) dereferenced // begin() -> index=0 element
// 11111
cout<< *(v5.end()-1 ) << endl;  // end() // (*vector.end()) dereferenced // end() -> NOTindex=n-1lastelement, end()-1 does give index=n-1lastelement
// 3

// Looping Using Iterators
vector<int>::iterator it; // ::iterator
// The scope is specified using `::` (colon colon) to indicate that the iterator is associated with the `vector<int>` type.
for ( vector<int>::iterator it = v5.begin(); it!=v5.end(); it++) {cout<<(*it)<<"\t";}
cout<<endl;
// 11111      2       3       

// Reverse Iterators
// Reverse iterators allow traversing the container in a backward fashion
// -- in reverse iterators goes left to right, ++ goes right to left ( REVERSE OF NORMAL ITERATORS )
cout<< *(v5.rbegin() ) << endl;// rbegin() -> last element, index = n-1
// 3
cout<< *(v5.rend()-1 ) << endl;// rend() -> mem. loc. just before index = 0 / first element, rend()-1 gives First Element / index = 0
// 11111

// auto
// The `auto` keyword automatically deduces the type of the variable.
for ( auto it = v5.begin(); it!=v5.end(); it++ ){cout<<(*it)<<"\t";}
cout<<endl; // 11111      2       3
for ( auto it = v5.rbegin() ; it!=v5.rend(); it++ ){cout<<(*it)<<"\t";}
cout<<endl; // 3       2       11111 // Reverse Order

// Algorithms
// #include<algorithm>

// sort() 
// By default, sort() arranges data in ascending order.
int arr1[3] = {3,1,2 }; 
sort(arr1, arr1+3); // sort() array
vector<int> varr1 = {3,1,2};
sort(varr1.begin(), varr1.end()); // sort() vector
sort(varr1.begin(), varr1.end(), greater<int>() ); // sort() DESC order // greater<int>(), don't forget to put () at end of greater<int>
vector<pair<int,int> > vp = {{1,2},{0,1},{-1,3}};
sort(vp.begin(),vp.end()); // sort() vector of pairs // default ASC
    // Default sort for pairs:
    // 1. Sorts by the .first element
    // 2. If .first elements are equal, sorts by the .second element

// Custom Comparators
// Custom logic can be defined to sort complex data types, such as Pairs, based on specific criteria (e.g., sorting by the second value).
// Play of just indv. case true/false
sort(vp.begin(),vp.end(), custom_comp );
for(auto p : vp) {
    cout << p.first << " " << p.second << "\t";
}
cout<<endl;
// -1 3    1 2     0 1     
// reverse()
reverse(vp.begin(),vp.end()); // reverse the order of elements within a range.
reverse(vp.begin()+1,vp.begin()+2); // specific range

// next_permutation() & prev_permutation()
string ss = "ABC";
int fact = 1;
for ( int i = 1; i<=ss.size(); i++ ){ fact*=i; }
for ( int i =0; i<fact; i++)
{
cout<<ss<<"\t";
next_permutation(ss.begin(),ss.end()); // next_permutation()
}cout<<endl;
// ABC     ACB     BAC     BCA     CAB     CBA
for ( int i =0; i<fact; i++)
{
prev_permutation(ss.begin(),ss.end()); // prev_permutation()
cout<<ss<<"\t";
}cout<<endl;
// CBA     CAB     BCA     BAC     ACB     ABC

// Utility Functions
cout<<max(5,660)<<endl; // max()
// 5
cout<<min(5,-600)<<endl; // min()
// -600
int a=10,b=20;
swap(a,b); // swap()
cout<<a<<b<<endl;
// 2010
vector<int> v6 = {11111,-2,3};
cout<< *(max_element(v6.begin(),v6.end()))<<"\t"; // max_element()
cout<< *(min_element(v6.begin(),v6.end()))<<endl; // min_element()
// 11111   -2

// binary_search()
// Used to perform binary search on a sorted range.
// Functionality: Returns a boolean value (true or false) indicating whether the target element exists.
cout<<binary_search( v6.begin(), v6.end(), 3)<<endl; // 
//1
cout<<binary_search( v6.begin(), v6.end(), -3)<<endl;
//0

// __builtin_popcount()
// tells how much '1s' required at right hand side when number is represented in binary 
// This functionality is typically built into the GCC compiler.
// It is often used in competitive programming but is not compatible with all C++ standards, making it less useful in industry practice.
int nn = 7;
long int nn1 = 15;
long long int nn2 = 15;
cout<< __builtin_popcount(nn) << endl; //3 i.e. 7 woule be  000....111 in binary
cout<< __builtin_popcount(nn1) << endl; //4 i.e. 15 woule be  000....1111 in binary
cout<< __builtin_popcount(nn2) << endl; //4 , in another datatype

return 0;
}

