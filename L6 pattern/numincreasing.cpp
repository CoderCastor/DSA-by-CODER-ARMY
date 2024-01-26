#include<iostream>
using namespace std;
 
 //approch 1 (third variable)
 /*
 int main(){
    int row,col;
    int a = 1;
    cout<<"Enter Number : ";
    cin>>row>>col;

    cout<<endl<<"Output : \n";

    for(int i = 1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<a<<"\t";
            a++;
        }
        
        cout<<endl;
    }
    return 0;
 }
 */

//approch 2 (NO extra variable-formula base)
int main(){

    int row,col;
    cout<<"Enter Number : ";
    cin>>row>>col;

    cout<<endl<<"Output : \n";

    for(int i = 1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<(i-1)*col+j<<"\t";
        }
        cout<<endl;    
    }
    return 0;
 }
 