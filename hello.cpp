// Preprocessor Directive, used to include files
// <iostream> is a header file for taking input and output
#include <iostream>
using namespace std;

// The execution of code begins from main function (Mandatory for any C++ program), This function returns an integer
int main(){
    int a; // Variable Declaration
    a = 34; // Variable initialization

    cout<<"Hello world "<<a<<"\n";

    // Primitive Datatypes
    // int  - size is 4 bytes  -- 32bit
    // float  - size is 4 bytes  --32bit
    // char  - size is 1 byte
    // boolean  - size is 1 byte

    // Datatype modifiers
    // short int -- 2 bytes memory allocation -- range is 32k from positive to negative
    // long int -- 8 bytes memory allocation -- range is 9223372036854775808 from positive to negative, This is 64 bit integer 

    return 0;
    // exit status of a function 
}
