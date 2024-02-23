#include <iostream>
using namespace std;
int main() {
    
    int num=1234,mod,cnt=0,mul=1,ans=0;
    int n=num;
    while(n){
        mod=n%10;
        mul*=10;
        cnt++;
        n/=10;
    }
    mul=mul/10;
    n=num;
    while(n){
        mod=n%10;
        ans+=mod*mul;
        mul/=10;
        n/=10;
    }
    cout<<"ANS : "<<ans;
    return 0;
}