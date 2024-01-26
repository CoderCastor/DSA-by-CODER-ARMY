#include<iostream>
using namespace std;

int main(){
    int ans= INT32_MAX;
    int arr[]={34,2,66,4,33,875};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size ; i++){
        if(ans>arr[i])
        ans=arr[i];
    }
    cout<<"Minimum Element : "<<ans<<endl;


    int ans1= INT32_MIN;
    for(int j = 0; j<size ; j++){
        if(ans1<arr[j])
        ans1=arr[j];
    }
    cout<<"Maximum Element : "<<ans1;
    return 0;
}