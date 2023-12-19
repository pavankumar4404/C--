#include <bits/stdc++.h>
using namespace std;

void arrange(int* arr, int len){
    int i=0;
    int j=len-1;
    while(i<j){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>0){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
}

int main(){
    int arr[]={1,-2,3,-4,-5,6};
    int length=sizeof(arr)/sizeof(int);
    arrange(arr,length);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}