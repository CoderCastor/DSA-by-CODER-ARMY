#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int count = 0;
    while(num>=5){
        count+=num/5;
        num/=5;
    }
    cout<<"Number of zeros : "<<count;
}