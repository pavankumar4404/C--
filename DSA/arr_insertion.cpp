#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,5,6,7,8};
    int len=7;
    int pos=3;
    // int n=4;
    // for(int i=len-1;i>=pos;i--){
    //     arr[i+1]=arr[i];
    // }
    // arr[pos]=n;
    // len++;

    for(int i=pos;i<len;i++){
        arr[i]=arr[i+1];
    }
    len--;
    for(int i=0;i<len;i++) cout<<arr[i]<<" ";
    return 0;
}