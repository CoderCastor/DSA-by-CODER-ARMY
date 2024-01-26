#include<iostream>
using namespace std;

int main(){
    int num,rem,ans=0,x;
    cout<<"Enter Number : ";
    cin>>num;
    x=num;

    while(num){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    if(x==ans)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}