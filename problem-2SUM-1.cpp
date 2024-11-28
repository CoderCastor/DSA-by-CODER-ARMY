#include<bits/stdc++.h>
#include<list>
using namespace std;

vector<int> bruteForce(vector<int>arr,int target){
    int n = arr.size();

    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int sum = arr[i] + arr[j];
            if(target == sum){
                return {i,j};
            }
        }

    }
    return {};
}

vector<int> betterApproach(vector<int>arr,int target){
    list<int,int>mp;
    
}

int main (){

    vector<int>arr = {2,7,8,4};
    int target = 9;

    vector<int>ans = bruteForce(arr,target);

    cout<<ans[0]<<" "<<ans[1];



    return 0;
}