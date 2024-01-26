#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;
        int i=1,sqr=0;
        while(i*i<=x){   
            sqr = i;
            i++;
        }
        cout<<"Square root : "<<sqr;
        return 0;
}


        