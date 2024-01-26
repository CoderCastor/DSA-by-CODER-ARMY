#include<iostream>
using namespace std;

int main()
{   
    int num, i = 1, product=1;
    cout<<"Enter Number : ";
    cin>>num;
    for(i;i<=num;i++){
        product = product * i;
    }
    cout<<"FACTORIAL of "<<num<<" is : "<<product;
    return 0;
}