#include<iostream>
using namespace std;

//approch 1
/*
int main(){

    int row , col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;

    cout<<"Output : \n";

    for(int i=1;i<=row;i++)
    {    int c=i;    
        for(int j=1;j<=i;j++)
        {    
            cout<<c<<" ";
            c--;
                
        }
        cout<<endl;
    }
    return 0;
}*/

//aproch 2
int main(){

    int row , col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;

    cout<<"Output : \n";

    for(int i=1;i<=row;i++)
    {       
        for(int j=i;j>=1;j--)
        {    
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}