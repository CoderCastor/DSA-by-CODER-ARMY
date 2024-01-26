#include<iostream>
using namespace std;
 int main(){
    int row,col,pr;
    cout<<"Enter Number : ";
    
    cin>>row>>col;
    cout<<endl<<"Output : \n";
    for(int i = 1;i<=row;i++)
    {   
        pr=col;
        for(int j=1;pr>=j;pr--)
        {
            cout<<pr<<" ";
        }
        cout<<endl;
    }
    return 0;
 }