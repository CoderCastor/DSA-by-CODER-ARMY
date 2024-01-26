#include<iostream>
using namespace  std;

void binarySearch(int arr[],int N,int key){
    int start=0,end=N-1,mid,ans=N;
    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==key){
            ans=mid;
            break;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            ans=mid;
            end=mid-1;
        }
    }

    cout<<"Position : "<<ans+1;
}

int main(){
    int N,key;
    int arr[1000];
    cout<<"Enter the Numbers in array : ";
    cin>>N;
    cout<<"Enter Elements in Array : ";
    for(int i=0;i<N;i++)
    cin>>arr[i];
    cout<<"Enter Key for Search : ";
    cin>>key;

    binarySearch(arr,N,key);
       
    return 0;
}