#include<iostream>
using namespace std;

int main(){
    int row,col;
    
    cout<<"Enter Row and Columns : ";
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=col;j>=row-i+1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}