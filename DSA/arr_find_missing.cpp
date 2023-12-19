#include <iostream>
using namespace std;

void sortedArr(){
    int arr[] = {6,7,9,10,11,14,15};
    int diff = arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]-i != diff){
            while(diff != arr[i]-i){
                cout<<diff+i<<" ";
                diff++;
            }
        }
    }
}

void unsorted(){
    int arr[] = {4,2,6,8,3,1,9};
    int l=1, h=9, n=7;
    int hash[h]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=h;i++){
        if(hash[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    unsorted();
}