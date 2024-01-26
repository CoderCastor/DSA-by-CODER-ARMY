#include<iostream>
using namespace std;

bool Prime(int x){
    if(x<2)
    return 0;
    for(int i=2;i<x;i++){
        if(x%i==0)
        return 0;
    }
    return 1;
}

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    //check numbers with function call
    return 0;
}