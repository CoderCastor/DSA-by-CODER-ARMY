#include<iostream>
using namespace std;
 int main(){
    int row,col;
    char a = 'a';
    cout<<"Enter Number : ";
    cin>>row>>col;

    cout<<endl<<"Output : \n";
    for(int i = 1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<a<<" ";
            a++;
        }
        a = 'a';
        cout<<endl;
    }
    return 0;
 }