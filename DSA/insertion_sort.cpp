#include<iostream>
using namespace std;

void i_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            // arr[j+1]=arr[j];
            swap(arr[j],arr[j+1]);
            j--;
        }
        // arr[j+1]=key;
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int arr[]={23,67,13,54,76,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    i_sort(arr,n);
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}