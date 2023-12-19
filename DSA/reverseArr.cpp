#include <bits/stdc++.h>
using namespace std;

void rev(int* arr,int len){
    int i;
    int j;
    for(int i=0, j=len-1; i<j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void rev2(int* arr,int len){
    int temp[len];
    for(int i=len-1;i>=0;i--){
        temp[len-i-1]=arr[i];
    }
    for(int i=0;i<len;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(int);
    rev2(arr,length);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}