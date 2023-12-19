#include <bits/stdc++.h>
using namespace std;

void insert(int* arr,int &len,int x){
    int i=len-1;
    while(i>=0 && x<arr[i]){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    len++;
}

int main(){
    int ar[]={1,8,9};
    int length=sizeof(ar)/sizeof(int);
    insert(ar,length,3);
    for(int i=0;i<4;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}