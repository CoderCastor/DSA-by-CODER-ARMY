#include<iostream>
using namespace std;

int main(){

    int a = 12;

    // for declaring pointer 
    // pointerdatatype * pointername;


    //pointer data type declaration is imp cause if tells
    // how many bytes is need to reed from memory for collecting
    //value inside a variable
    //like for int it reads 4 memory byte blocks and char just one!

    int *ptr;


    // taking address of variable
    // & variableName

    // eg
    int *pointer = &a;
    cout<<*pointer<<endl;    //returns variable data
    cout<<pointer<<endl;           //returns address of variable

    
    //we can use sizeof function for getting size of any variable
    //sizeof(pointer)

    cout<<"SIZE OF POINTER: "<<sizeof(*pointer)<<endl;
    cout<<"SIZE OF POINTER: "<<sizeof(pointer)<<endl;
    cout<<"SIZE OF POINTER: "<<sizeof(a);

    return 0;
}