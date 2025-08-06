// Arrays
// Linear Data Structure
// stores data in contiguous memory
// allow random access via index

#include<stdio.h>
int isCommon(int a[], int b[], int na, int nb); // Declaration

int main(){
    // 1d Arrays
    // initiation and declaration
    int a[10] = {0,10,0,0,0,0,0,0,0,0};

    // print one value of array
    printf("%d\n",a[1]); //10
    // here we didn't write &a[1] because array a and its access through index itself is a pointer

    // print address of array
    printf("%p\n",a); //0x7fff40de8740
    // print address

    // array traversal
    int A[4] = {100, 101, 102, 103};
    for (int i = 0; i < 4; i++) {
        printf("A[%d] = %d\n", i, A[i]);
        /*
        A[0] = 100
        A[1] = 101
        A[2] = 102
        A[3] = 103*/
    }

    // Location/ Memory address of element in array
    // Location = Base + ( Index * Size of each element of array ) - Starting Index
    // Don't Remember these, Derive this
    int base = (int)A; // address of A typcast into integer
    printf("%d\n",base); //1088325424
    // Starting index is 0
    int startingIndex = 0;

    int length_of_array = (sizeof(A)/sizeof(A[0]));
    int size_of_each_element = sizeof(A[0]);
    for (int index=0; index<length_of_array;index++){
        int Location = base + (index*size_of_each_element) - startingIndex;
        printf("A[%d] Location = %d\n",A[index],Location);
        // A[100] Location = 1088325424
        // A[101] Location = 1088325428
        // A[102] Location = 1088325432
        // A[103] Location = 1088325436
        // notice the gap in b/w locations = 4 = size of each element in array = size of integer

    }
    // now we saw stuff in decimal but inside the computer , computer stores everything in binary and do binary arithmatics , not decimal normal arithmatics

    // 2D Arrays 
    int A3[2][3] =
    {
        {00,01,02},
        {10,11,12}
    };

    // Access
    printf("%d\n",A3[1][2]); //12

    // Row-Major Order Traversal
    int i2,j2;
    for (i2=0;i2<2;i2++){
        for (j2=0;j2<3;j2++){
            printf("A3[%d][%d]=%d\n",i2,j2,A3[i2][j2]);
            // A3[0][0]=0
            // A3[0][1]=1
            // A3[0][2]=2
            // A3[1][0]=10
            // A3[1][1]=11
            // A3[1][2]=12
        }
    }

    // 2D Arrays Conceptual Representation != Physical Representation, i.e. how they are stored in memory 
    // They can't just put in memory as it is as it would lead to loss of random access as it breaks rule of contiguous arrangement of elements
    // We have to convert 2D => 1D( with some convention for us to access )

    // Row-Major Order (used in C, C++, Python, etc.) Data Organisation 
    // [ROW1,ROW2,ROW3,...,ROWN]
    // Loc(A[i][j]) = base + (((i-startingIndex)*cols)+ j-startingIndex)*sizeOfEachElement


    // Column-Major Order (used in Fortran, MATLAB, R, etc.)
    // [COL1,COL2,COL3,...,COLN]
    // Loc(A[i][j]) = base + (((j-startingIndex)*rows)+ i-startingIndex)*sizeOfEachElement

    
    // Sample Exp simulate 2D array using 1D array:
    int rows = 3, cols = 4;
    int A4[12] = {0, 1, 2, 3,      10, 11, 12, 13,         20, 21, 22, 23};
    // Accessing A[2][3]=23
    int i = 2, j = 3;
    int Loc = A4[((i)*cols)+j];
    printf("A4[%d][%d]=%d\n",i,j,Loc); //A4[2][3]=23

    // Binary Representaion notes in nb
    // as in ROW MAJOR ORDER DATA ORGANISATION, 
    // accessing element is easy and page page faults as majorly whole row is inserted in page, 
    // vice versa in case of COL ORDER DATA ORGANISATION
    int CommonEg = isCommon(a,A4,10,12);
    printf("%d\n",CommonEg);
    return 0;

}

int isCommon(int a[],int b[],int na,int nb){
    int i,j;
    for (i=0;i<na;i++){
        for (j=0;j<nb;j++){
            if (a[i]==b[j]){return 1;}
        }
    }return 0;


}