#include<iostream>
// #include : Preprocessor Directive, used to include something
// <iostream> i/o operations lib, cin, cout, cerr, clog

// whitespaces/ extra lines dont matter in cpp
// compiler does syntax check & token parsing
// code colours in vsc = token based

using namespace std;
// import lib stuff way 1
// using the region/namespaces directly in code, no need to write region::func
// std region/namespace contains stuff , internal cpp code, like cin,cout etc
// helps to seperate intermixing of cpp internal region & our code project's region

// using std::cout;
// using std::endl; 
// // import lib stuff way 2
// // import specific element using using

namespace bali{
    void display(){
        cout<<"Simply Lovely"<<endl;
        // < , this operater takes value at right and passed on the left side, similar to + operator
        // endl represents line end, like pressing enter key
    }
}
// custom namespace
// if making custom namespace, avoid writing c++ internal keywords, or just use it as custom::func


int main()
// main func is the starting function of program as per decided by cpp standards
// func purpoes is to bring methods, meaningful work
// as cpp is static typed lang, not dynamic, we have to explicit declare every datatype during objects creation
// int is stated with main() func 
// if no return type , then state void datatype 
{ 
    bali::display();// useage of custom namespace
    // std::cout<<""; // import lib stuff way 3

    return 0;
    // cpp uses exit codes to define result of func execution
    // most common 0 : successful exit, and no need to return any spec data
    // 0 provides common predictibility in other environments
    // return 5;
    // // exit codes can be customised based on projects standards and env standards


}