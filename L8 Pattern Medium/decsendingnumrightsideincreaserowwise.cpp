#include<iostream>
using namespace std;

int main(){
    int row,col,i,j;

    cout<<"Enter Row & Col : ";
    cin>>row>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";

        }
        for(j=i;1<=j;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}