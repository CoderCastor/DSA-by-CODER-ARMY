#include<iostream>
using namespace std;

int main(){

    int num,mul=1,ans=0,rem;
    cout<<"Enter Binary Number : ";
    cin>>num;

    while(num>0){
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<"Decimal Number : "<<ans;
    return 0;
}