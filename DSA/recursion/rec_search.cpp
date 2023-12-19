#include <bits/stdc++.h>
using namespace std;
    
int search(int *arr,int n,int x,int i){
    if(i==n) return 0;
    if(arr[i]==x||search(arr,n,x,i+1)) return 1;
}

int main(){
    int arr[]={23,53,6,4,25,21};
    int x=3;
    cout<<search(arr,6,x,0);
    return 0;
}