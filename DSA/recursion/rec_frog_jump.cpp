#include <bits/stdc++.h>
using namespace std;

int cost(int *arr,int n,int i){
    if(i==n-1) return 0;
    if(i==n-2) return cost(arr,n,i+1) + abs(arr[i]-arr[i+1]);
    return min(cost(arr,n,i+1)+abs(arr[i]-arr[i+1]),cost(arr,n,i+2)+abs(arr[i]-arr[i+2]));
}
    
int main(){
    int n=4;
    int arr[]={10,30,40,60};
    cout<<cost(arr,n,0);
    return 0;
}