#include<iostream>
using namespace std;

//Approch 1
/*
int main(){
    int row,col,i,j;
    cout<<"Enter Row & Col : ";
    cin>>row>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=1;j<=((row-(i-1))*2)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
*/

//Approch 2
int main(){
    int row,col,i,j;
    cout<<"Enter Row & Col : ";
    cin>>row>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(j=1;j<=(row*2)-(i*2-1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}