#include<iostream>
using namespace std;

int incre(int *n){
    *n = *n+1;
}

//function for array with address
void doubleTheArray(int *p){ //we can write int p[]
    for(int i=0;i<5;i++)
    p[i]=2*p[i];
}

//swapping function pass by address/pointer
void swappingNumsWithAdd(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//swapping function pass by address/pointer
void swappingNumsWithRef(int &p1,int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}


int main(){
    int num = 10;
    cout<<"Value before : "<<num<<endl;
    incre(&num);
    cout<<"Value after : "<<num<<endl;


    //now with int array
    // remember--> int *p = int p[]
    int arr[5]= {1,2,3,4,5};
    doubleTheArray(arr);

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

    cout<<endl<<endl;

    //swapping code pass by address
    int first = 10,second=20;
    cout<<"Before swapping : "<<first<<" "<<second<<endl;
    swappingNumsWithAdd(&first,&second);
    cout<<"After swapping : "<<first<<" "<<second<<endl<<endl;

    //pass by reference 
    //reference variable can be created as int &a;
    first = 10;second=20;
    cout<<"Before swapping : "<<first<<" "<<second<<endl;
    swappingNumsWithRef(first,second);
    cout<<"After swapping : "<<first<<" "<<second<<endl<<endl;
    
    return 0;
}