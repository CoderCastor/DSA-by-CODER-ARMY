#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Your Number : ";
    cin>>num;

    if(num<2){
        cout<<"This Number is Not Prime";
    }else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                cout<<"This Number is Not Prime";
                return 0;                
            }
            
        }
        cout<<"Congrats.. Number is Prime";
    }



    return 0;
}