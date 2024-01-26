#include<iostream>

using namespace std;
int search(int arr[],int key){
    int ans=-1,i;
    for(i=0;i<8;i++){
        if(key==arr[i]){
            ans=i;
            return ans;
            break;
        }
        
    }
    return ans;
}
int main(){
    int arr[]={23,42,5,32,55,3,2,123};
    cout<<search(arr,5);
    return 0;
}