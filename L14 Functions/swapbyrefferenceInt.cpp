#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cout<<"Enter A & B : ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Number A : "<<a<<endl;
    cout<<"Number B : "<<b;
    return 0;
}