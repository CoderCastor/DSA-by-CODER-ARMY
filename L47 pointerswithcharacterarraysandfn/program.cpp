#include <iostream>
using namespace std;

int main()
{

    // int array behaves differently with there name address
    // it returns base address where the array get start
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr;

    // in another case character array behavior is diff
    // it prints all values int it eg--->
    cout << "\n\n";

    char charArray[5] = {'a', 'r', 'z', 'f', 'e'};
    cout << "char array : " << charArray << endl;

    // if we want to print address of char array then
    // use typecasting with void pointer (void*) eg-->
    cout << "Address of char array : " << (void *)charArray << endl;

    // lets make another pointer and use it for printing addresses of these variables
    char *Charptr = charArray;
    cout << "Address of char array with another ptr: " << (void *)Charptr << endl
         << endl;

    // likewise we can't print address of character variable directly
    // eg --->
    char name = 'a';
    cout << "Address of char name is : " << &name << endl; // it will give random values which not correct
    cout << "Address of char name is : " << (void *)&name; //right method use with another ptr

    cout<<"name address"<<static_cast<void*>(charArray)<<endl;  //working with char array only
    return 0;
}