#include<iostream>
using namespace std;
void swap(int arr[],int size){
    int i=0,j=size,temp;
    for(i;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void print(int arr[],int size){
    int j;
    while(j=0;i<size;j++){
        cout<<arr[j];
    }
}

int main(){

    int arr[]={23,42,5,64,7,77};
    print(arr,6);


    return 0;
}
