#include<iostream>
using namespace std;

void binarySearch(int arr[],int N,int key){
    int start=0,end=N-1,mid;
    
    while(start<=end){
        //overflow
        // mid=(start+end)/2;

        //proper logic
        mid=start+(end-start)/2;

        if(arr[mid]==key)
        {
            cout<<"key is found at index : "<<mid<<endl;
            return;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<"Key is absent";
    
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