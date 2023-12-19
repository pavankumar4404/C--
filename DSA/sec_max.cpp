#include <bits/stdc++.h>
using namespace std;
int main(){
    int max,sec_max;
    int arr[]={4,2,6,3,8,5,1,9,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    max=INT_MIN;
    sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];
        }
    }
    cout<<sec_max<<endl;
    return 0;
}