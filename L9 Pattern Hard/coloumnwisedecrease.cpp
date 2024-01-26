#include<iostream>
using namespace std;

int main(){
    int row,col,i,j;

    cout<<"Enter Row & Col : ";
    cin>>row>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }



    return 0;
}