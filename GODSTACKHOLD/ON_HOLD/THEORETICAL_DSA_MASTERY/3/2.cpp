#include<bits/stdc++.h>
using namespace std;

// Structure Defination eg: Polygon ( just Chull )
struct polygon {
    int length; // also it's redundant as triangle.edges.size(); gives the same stuff
    vector<int> edges; //int edges[]; is wrong, int edges[length]; is wrong
    vector<int> angles;
}; 

// struct eg: Rectangle
struct rect
{
    /* data */
    int l; // -> 2
    int b; // -> 2
    // total = -> 4
    // also Structure definition is just a template - no memory is allocated
} r1, r2={1,2};


// struct eg: complex no.
struct cp{
    float r;
    float i;
} c1={1.5,0.3};

// struct eg: student info system
struct student{
    int rollNo;
    char name[25];
    // this is not string, but character array, 
        // basically You can't use direct assignment like s1.dept = "CSD"; because in C and C++, arrays are not assignable.
        // strcpy(s1.name, "Siddhant Bali"); // Correct
    char dept[50];
    char address[50];
};


// strcut eg: playing cards
struct card{
    int face; // 1-13 { 1: Ace, 2: 2, 3: 3, ... , 10: 10, 11: Jack, 12: Queen, 13: King}
    int shape; // 0-3 {0: Club, 1: Spade, 2: Diamond, 3:Heart }
    int colour; // 0: Black, 1: Red  
    // & also Diamond/Heart are red, Club/Spade are Black
    // Construction of Deck of cards
        // Thus constructing it NOT be loop of face*shape*colour
        // then even NOT do face*shape & inside it colour 0, 1 2 times add
        // logic of making it for colour is: if shape==0 or shape==1 => colour is 0  &  if shape==2 or shape==3 => colour is 1
};

// structure padding
// inefficient
struct eg{
    char a; // 1(should be) => 1(real life) 
    // (+3 offset for int to attach stable) 
    int b; // 4(should be) => 4(real life)
    char c; // 1(should be) => 1(real life) 
    // (+3 offset to end array stable) 
    // Total = 6 Bytes(should be) => 12 Bytes(real life)
} eg1={1,2,3};

// efficient
struct eg2{
    int b; // 4(should be) => 4(real life)
    char a; // 1(should be) => 1(real life) 
    char c; // 1(should be) => 1(real life) 
    // (+2 offset to end array stable) 
    // Total = 6 Bytes(should be) => 8 Bytes(real life)
    // * An `int` (4 bytes) `wants to start at an address divisible by 4` (like address 0, 4, 8, ...).
    // * A `char` (1 byte) can start at any address.
} eg21={1,2,3};



int main(){
    struct polygon triangle; // also // The 'struct' keyword is not needed here in C+
    // polygon triangle;
    triangle.length = 3;
    triangle.edges = {5,5,5};
    triangle.angles = {60,60,60};

    struct rect r;
    rect r3,r4;
    rect r5={1,22};
    r1 = {11,11};
    r1.l = 12;
    cout<<r1.l<<"\t"<<r1.b<<endl; // no direct cout<<r1;
    // 12      11
    cout<<r2.l<<"\t"<<r2.b<<endl;
    // 1       2
    cout<<"area of r2 = "<<(r2.l) * (r2.b)<< endl;
    // 2
    // because 1*2 = 2

    // Dot operator has highest precedence in C,  Used for both reading and writing member values

    cout<<c1.r<<"\t"<<c1.i<<endl;
    // 1.5     0.3
    printf(" Complex Number :%.2f\t%.2f\n",c1.r,c1.i);
    // 1.50    0.30
    printf("%.3f\t%.2f\n",c1.r,c1.i);
    // 1.500   0.30

    // student struct
    student s1;
    s1.rollNo = 2022496;
    // NO this // s1.dept = "CSD"; // expression must be a modifiable value C/C++(137)
    strcpy(s1.name, "Siddhant Bali"); // Correct
    strcpy(s1.address, "India");
    strcpy(s1.dept, "Computer Science and Design");

    // Array of Structures
    card cards[52];
    int idx= 0;
    
    for (int shape=0; shape< 4; shape++){
        for (int face=1; face< 14; face++){
            if (shape<2) { cards[idx] = {face,shape,0}; }
            if (shape>=2) { cards[idx] = {face,shape,1}; }
            idx++;
        }
    }
    
    idx=0;

    for (int shape=0; shape< 4; shape++){
        for (int face=1; face< 14; face++){
            cout<<idx+1<<":\t"<<cards[idx].face<<"\t"<<cards[idx].shape<<"\t"<<cards[idx].colour<<endl;
            idx++;
        }
    }
    idx=0;
    // 1:      1       0       0
    // 2:      2       0       0
    // 3:      3       0       0
    // 4:      4       0       0
    // 5:      5       0       0
    // 6:      6       0       0
    // 7:      7       0       0
    // 8:      8       0       0
    // 9:      9       0       0
    // 10:     10      0       0
    // 11:     11      0       0
    // 12:     12      0       0
    // 13:     13      0       0
    // 14:     1       1       0
    // 15:     2       1       0
    // 16:     3       1       0
    // 17:     4       1       0
    // 18:     5       1       0
    // 19:     6       1       0
    // 20:     7       1       0
    // 21:     8       1       0
    // 22:     9       1       0
    // 23:     10      1       0
    // 24:     11      1       0
    // 25:     12      1       0
    // 26:     13      1       0
    // 27:     1       2       1
    // 28:     2       2       1
    // 29:     3       2       1
    // 30:     4       2       1
    // 31:     5       2       1
    // 32:     6       2       1
    // 33:     7       2       1
    // 34:     8       2       1
    // 35:     9       2       1
    // 36:     10      2       1
    // 37:     11      2       1
    // 38:     12      2       1
    // 39:     13      2       1
    // 40:     1       3       1
    // 41:     2       3       1
    // 42:     3       3       1
    // 43:     4       3       1
    // 44:     5       3       1
    // 45:     6       3       1
    // 46:     7       3       1
    // 47:     8       3       1
    // 48:     9       3       1
    // 49:     10      3       1
    // 50:     11      3       1
    // 51:     12      3       1
    // 52:     13      3       1

    // structure padding
    cout<<"Sum "<<sizeof(eg1.a) + sizeof(eg1.b) + sizeof(eg1.c)<<endl; 
    // Sum 6
    // 1 + 4 + 1
    // sizeof() operator returns the size of a variable or data type in bytes.
    // sizeof(eg1.a) = sizeof(char) = 1
    cout<<"Sum "<<sizeof(eg1)<<endl; 
    // Sum 12
    // 4 + 4 + 4
    // (1+3) + 4 + (1+3) 
    // sizeof(eg1) = size of eg1 custom datatype/datastructure, this struct is data type too
    cout<<"Sum "<<sizeof(eg21)<<endl; 
    // Sum 8
    // 4 + 2 + 2

    printf("%d\n",sizeof(eg21) ); // working, but NOT recommended
    // 2.cpp:202:14: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
    // 202 |     printf("%d\n",sizeof(eg21) );
    //     |             ~^    ~~~~~~~~~~~~
    //     |              |    |
    //     |              int  long unsigned int
    //     |             %ld
    // 8
    printf("%lu\n",sizeof(eg21) ); // %lu is long unsigned int
    // 8 
    return 0;
}