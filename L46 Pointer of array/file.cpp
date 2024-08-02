#include<iostream>
using namespace std;

int main(){


    // arr
    int arr[6] ={1,2,3,4,5,6};
    int * arrayPtr = arr;


    //print the address of the first element or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<arrayPtr<<endl;

    //print the address of second element or index 1
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    // print the value of 0 index
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<*arrayPtr<<endl;

    // lecture timestamp 22:56


    return 0;
}