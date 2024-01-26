#include<iostream>
using namespace std;
 int main(){
    int row,col;
    cout<<"Enter Number : ";
    cin>>row>>col;

    cout<<endl<<"Output : \n";
    for(int i = 1;i<=row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
 }