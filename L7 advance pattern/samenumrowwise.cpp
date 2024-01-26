#include<iostream>
using namespace std;

int main(){

    int row , col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;

    cout<<"Output : \n";

    for(int i=1;i<=row;i++)
    {       
        for(int j=1;j<=i;j++)
        {    
            cout<<i<<" ";    
        }
        cout<<endl;
    }
    return 0;
}