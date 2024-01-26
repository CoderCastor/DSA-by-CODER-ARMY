#include<iostream>
using namespace std;

int main(){
    int row,col,i,j;
    cout<<"Enter Row & Col : ";
    cin>>row>>col;
    
    for(i=1;i<=row;i++)
    {   
        char a='A';
        for(j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<a++;
        }
        cout<<endl;
    }
    return 0;
}