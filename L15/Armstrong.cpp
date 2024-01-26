#include<iostream>
#include<math.h>
using namespace std;

//Function for Counting
int countDigit(int num){
    int count=0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}

//Function to Check Num Armstrong
bool Armstrong(int num,int digit){
    int rem,ans=0,n=num;
    while(n){
        rem=n%10;
        n/=10;
        ans+=pow(rem,digit);
    }
    if(ans==num)
    return 1;
    else
    return 0;
}

int main(){
    int num;
    cout<<"Enter A Number : ";
    cin>>num;

    int a=countDigit(num);
    if(Armstrong(num,a))
    cout<<"------Number is Armstrong";
    else
    cout<<"------Number is not Armstrong";
    
    return 0;
}