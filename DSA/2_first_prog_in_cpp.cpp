
#include <iostream>
using namespace std;

int main() {
   // Variable declarations
    int age = 20;
    char grade = 'A';
    bool isPassed = true;
    float percentage = 85.5f;
    
    // Output
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;
    cout << "Percentage: " << percentage << endl;
    
    // Size information
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    // Age: 20
    // Grade: A
    // Passed: 1
    // Percentage: 85.5
    // Size of int: 4 bytes
    // Size of char: 1 bytes

    cout<<"Hello World"
        <<endl
        <<'h'
        <<"\n";
    int a=5;
    char ch ='a';
    bool b=1;
    bool b1=true;
    float f=1.32;
    double d=1.234234234;
    cout<<sizeof(a)
        <<endl;
    //hi
    cout<<(int)'a'<<endl;
    cout<<char(65)<<endl;
    int aa = 'a';
    cout<<aa<<endl;
    char chh = 99;
    unsigned z=1122;
     unsigned z11=-1122;//wrong way

    //comment
    /*
    comment
    
    comment*/
    int a1= 2/5;
    cout<<a1;

    int a22=2.0/5;
    double a2=2.0/5;

    int zz =2;
    int yy=3;
    bool z1 = (a==b), 
    z2= (a>b),
    z3= (a<b),
    z4= (a<=b),
    z5= (a>=b),
    z6= (a!=b)
    ;
cout<<endl;
    cout<< (true && false)<< (true || false)<< (!true);

    cout<<endl;
    cout<<(7&4)<<(7|4)<<(7^4)<<(~4)<<(5<<2)<<(16>>2);

    int x=10;
    float y=x;

    float x11=0.14;
    int y11= (int)x11;


    

    return 0;
}