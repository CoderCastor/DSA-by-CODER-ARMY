#include<iostream>
using namespace std;

char convert(char a){
    char ans= a - 'a' + 'A';
    return ans;
}

int main(){
    char a;
    cout<<"Enter small character : ";
    cin>>a;
    cout<<"Answer : "<<convert(a);
    return 0;
}