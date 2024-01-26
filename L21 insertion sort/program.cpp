#include<iostream>
using namespace std;

int main(){

    int arr[1000],size,i,j;

    cout<<"Enter Size Of Array : ";
    cin>>size;
    cout<<"Enter elements of Array : ";
    for(i=0;i<size;i++)
    cin>>arr[i];

    for(i=1;i<size;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }

    for(j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}

