#include<iostream>
using namespace std;

int main(){

    int row , col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;
    int i,j;
    cout<<"Output : \n";

    for( i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<"i";
        }
        cout<<endl;
    }
    return 0;
}