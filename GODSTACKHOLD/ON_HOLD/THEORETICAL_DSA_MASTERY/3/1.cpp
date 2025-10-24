#include<iostream>
int main(){
    int a[5];
    // declared but not initialized
    
    char b[7]={'1','a','3'};
    // declared but partially initialized

    std::cout<<sizeof(a)<<std::endl;
    // 20
    // 4(int size) 8 5(spaces) =20 (total size of array)
    std::cout<<sizeof(b)<<std::endl;
    // 7
    // 7 = 1*7

    for(int i=0; i<7; i++){
        printf("%c\n",b[i]); // %c
    }
    // 1
    // a
    // 3
    // 
    // 
    // 
    // 
    // last 4 values are empty chars, because those were declared but not initialised

    
    for(int i=0; i<7; i++){
        printf("%d\n",b[i]); // %d
    }
    // 49
    // 97
    // 51
    // 0
    // 0
    // 0
    // 0
    // char to int ASCII TypeCasting

    int c[] = {1,2,3,4,5,6,7,8,9,9};
    // here compiler will determine array size from number of initializers provided
    std::cout<<sizeof(c)<<std::endl;
    // 40

    std::cout<<&c[2]<<std::endl;
    // 0x7ffe2ca0f418
    // suppose
    std::cout<<&c[3]<<std::endl;
    // 0x7ffe2ca0f41c
    // 0x7ffe2ca0f41c - 0x7ffe2ca0f418 = 4 Bytes
    // This direct correlation between index and memory offset makes array access computationally efficient
    
    std::cout<<c[4]<<std::endl; // 5
    c[4]=55; // value changed
    std::cout<<c[4]<<std::endl; // 55
    
    int d = c[4]; // 
    // array traversal 1
    std::cout<<c[4]<<std::endl; // 55

    for(int i=0; i <  ( sizeof(c) / sizeof(c[0]) ); i++) { std::cout<<c[i]<<std::endl; }
    // 1
    // 2
    // 3
    // 4
    // 55
    // 6
    // 7
    // 8
    // 9
    // 9
    // array traversal 2

    for(int i=0; i <  ( sizeof(c) / sizeof(c[0]) ); i++) { printf("%d\n", c[i]); //A[i] is equivalent to *(A + i) in pointer arithmetic 
        }
    // 1
    // 2
    // 3
    // 4
    // 55
    // 6
    // 7
    // 8
    // 9
    // 9
    // array traversal 3

    for ( int i:c ){std::cout<<i<<std::endl;}
    // 1
    // 2
    // 3
    // 4
    // 55
    // 6
    // 7
    // 8
    // 9
    // 9
    // array traversal 4

    // array has fixed size
    // c[11]=11; // no, as it will not work or works anc corrupts other data and glitches
    return 0;
}