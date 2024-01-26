#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter Row & Col : ";
    cin>>row>>col;
    //upper
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<=row*2-(2*i);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //Lower
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<=row*2-(2*i);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}