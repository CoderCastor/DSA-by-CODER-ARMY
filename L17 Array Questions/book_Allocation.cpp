#include<bits/stdc++.h>
using namespace std;


int getSecondOrderElements(int n, int a[]) {
    // Write your code here.
    int i,max;
    max=0;
    for(i=1;i<n;i++){
        if(a[max]<a[i]){
            max=i;
        }
    }
    return a[max];
    
}


int main(){
    int a[5]={1, 2, 3 , 4, 5};
    cout<<getSecondOrderElements(5,a);
}
