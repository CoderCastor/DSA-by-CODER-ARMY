#include<iostream>
using namespace std;
void swap(int arr[],int size){
    int i=0,j=size-1,temp=0;
    for(i;i<j;i++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    cout<<endl;
}

void print(int arr[],int size){
    int j;
    for(j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){

    int arr[]={23,42,5,64,7,77};
    print(arr,6);
    swap(arr,6);
    print(arr,6);
    return 0;
}
