/*Dilpreet wants to paint his dog's home that has n boards with
different lengths. The length of ith board is given by arr[i] 
where arr[] is an array of n integers. He hired k painters for
this work and each painter takes 1 unit time to paint 1 unit of
the board. 

The problem is to find the minimum time to get this job done if 
all painters start together with the constraint that any painter 
will only paint continuous boards, say boards numbered {2,3,4} or 
only board {1} or nothing but not boards {2,4,5}

Your task:
Your task is to complete the function minTime() 
which takes the integers n and k and the array 
arr[] as input and returns the minimum time required 
to paint all partitions.


Input:
n = 5
k = 3
arr[] = {5,10,30,20,15}
Output: 35
Explanation: The most optimal way will be:
Painter 1 allocation : {5,10}
Painter 2 allocation : {30}
Painter 3 allocation : {20,15}
Job will be done when all painters finish
i.e. at time = max(5+10, 30, 20+15) = 35

*/

#include<bits/stdc++.h>
using namespace std;

int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        
        int start=0,end=0,mid,ans;
        for(int i=0;i<N;i++){
            start=max(start,A[i]);
            end+=A[i];
        }
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            int pages = 0, count=1;
            for(int i=0;i<N;i++){
                pages+=A[i];
                if(pages>mid){
                    count++;
                    pages=A[i];
                }
            }
            if(count<=M){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
        
    }

int main(){
    int pages[5]={5,10,30,20,15};
    cout<<"Ans : "<<findPages(pages,5,3);
}