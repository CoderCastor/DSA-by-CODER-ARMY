#include<iostream>
using namespace std;

int main(){

    int arr[1000],size,i,j;

    cout<<"Enter Size Of Array : ";
    cin>>size;
    cout<<"Enter elements of Array : ";
    for(i=0;i<size;i++)
    cin>>arr[i];

    // Approch 1
    // for(i=0;i<size;i++){
    //     for(j=0;j<size-1;j++){
    //         if(arr[j]>arr[j+1])
    //         swap(arr[j],arr[j+1]);
    //     }
    // }

    //Aproch 2
    for(i=size-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(arr[j]>arr[j+1]);
            swap(arr[j],arr[j+1]);
        }
    }

    for(j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}


