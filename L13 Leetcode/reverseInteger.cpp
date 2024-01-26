#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter Number : ";
    cin>>x;
    int rem,ans=0;
    while(x!=0){
        rem=x%10;
        x=x/10;
        ans=x*10+rem;
    }
    cout<<"Reverse Integer : "<<ans;
    return 0;
}