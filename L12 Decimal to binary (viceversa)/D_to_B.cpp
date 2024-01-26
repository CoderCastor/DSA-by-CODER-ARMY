#include<iostream>
using namespace std;

int main(){

    int num,rem,ans=0,mul=1;

    cout<<"Enter Your Number : ";
    cin>>num;

    while(num>0){
        //rem=num%2;
        //using bitwise operator
        rem = num&1;

        //using bitwise->
        //num/=2;
        num=num>>1;
        
        ans+=rem*mul;
        mul*=10;
    }
    cout<<"Binary Code : "<<ans;
    return 0;
}