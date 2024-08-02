#include<iostream>
using namespace std;

int main(){

    int a = 12;

    // for declaring pointer 
    // pointerdatatype * pointername;

    int *ptr;


    // taking address of variable
    // & variableName

    // eg
    int *pointer = &a;
    cout<<*pointer<<endl;    //returns variable data
    cout<<pointer;           //returns address of variable

    
    return 0;
}