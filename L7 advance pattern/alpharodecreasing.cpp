#include<iostream>
using namespace std;

int main(){

    int row , col;
    
    cout<<"Enter Row & Column : ";
    cin>>row>>col;

    cout<<"Output : \n";

    for(int i=1;i<=row;i++)
    {    
        char a='a';
        for(int j=i;j>=1;j--)
        {    
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}