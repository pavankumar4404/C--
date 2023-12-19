#include <bits/stdc++.h>
using namespace std;

int f(int *arr,int i,int n){
    if(i==n-1){
        return arr[i];
    }
    return arr[i]+f(arr,i+1,n);
}

int main(){
    int n=5;
    int arr[]={4,3,7,8,3};
    cout<<f(arr,0,n);
    return 0;
}