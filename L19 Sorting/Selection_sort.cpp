#include<iostream>
using namespace std;

int main(){
    
    int arr[6]={23,43,255,3,4,7};

    int index,i,j;

    for(i=0;i<5;i++){
        index=i;
        for(j=i+1;j<6;j++){
            if(arr[index]>arr[j])
            index=j;
        }
        swap(arr[index],arr[i]);
    }

    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}