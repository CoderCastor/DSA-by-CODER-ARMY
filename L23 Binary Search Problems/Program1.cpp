#include<iostream>
#include<vector>
using namespace std;

void binarySearch(int arr[],int N,int key){
    //first occurance
    int start=0,end=N-1,mid,first=-1,second=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }

    //part 2
    start=0,end=N-1,mid,second=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            second=mid;
            start=mid+1;
        }else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }

    cout<<"\nFirst at index : "<<first<<"\nSecond at index : "<<second; 
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