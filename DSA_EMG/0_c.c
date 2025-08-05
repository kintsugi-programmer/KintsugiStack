
// you can run c codes in c++
// comments
/* Multiline comments*/

// standard input output library 
#include<stdio.h>

int isCommon(int a[], int b[], int na, int nb); // Function Declaration Prototype
int isCommon(int a[],int b[],int na,int nb){ // Fuction ,only executed when called
    int i,j;
    for (i=0;i<na;i++){
        for (j=0;j<nb;j++){
            if (a[i]==b[j]){return 1;}
        }
    }return 0;


}
// main function ,where program execution starts , will stop at return 0, compiler will understand that its end of source code
int main(){

    // printf , prints stuff 
    int x = 10;
    printf("%d\n",x);// \n means new line/linebreak //10
    // now %d is format specifier for integer 
    // ie print the int format of value stored of var x

    // pointers are vars which store address
    int *ptr = &x; // *ptr is way to show value of pointer,not some normal variable, its pointer variable;
    printf("%p\n",ptr); // 0x7fffca3143ec address of value of var x in memory in hexadecimal
    printf("%p\n",&x);    // &x means address of variable x // 0x7fffca3143ec 
    // %p is format specifier of pointer var
    printf("%d\n",*ptr); // *ptr means value of ptr //10

    // pointer to arrays
    int arr[3] = {1,2,3};
    int *p = &arr[0]; // or arr, as array access are too pointers ( when arrays used in expressions, arr decays to a pointer to its first element)
    // &arr     // pointer to entire array (type: int (*)[3])
    // arr      // pointer to first element (type: int *)

    printf("%d\n",*p); //1
    p++; // value of ptr increased, it jumps to next element of array
    printf("%d\n",*p); //2
    *p = 100; // Modifying a via pointer
    printf("%d\n",*p); //100
    p--;

    // %lu : long unsigned int
    printf("size of array: %lu, size of one element of array: %lu\n",sizeof(arr), sizeof(arr[0]) ); //size of array: 12, size of one element of array: 4
    int length = sizeof(arr) / sizeof(arr[0]);// lenght of array
    printf("length of array: %d\n",length); // length of array: 3

    // access array through pointer
    for ( int i=0; i<length; i++){
        printf("%d\t",*(p+i)); // \t tab space, of 4 " "(spaces)
        // 1       100     3
    }
    printf("\n");

    // break , terminate its enclosing for loop
    // return , terminate its enclosing function
    // continue , skip its statements below it and go to increment/decreament in loop

    return 0; // this will stop the main func, compiler will understand that its end of source code

}