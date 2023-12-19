#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>a;
            arr[i]=a;
        }
        int min=arr[0];
        for (int i = 0; i < n; i++){
        if (min > arr[i])
        {
            min = arr[i];
        }
        }
        int arr2[n-1];
        for(int i=0;i<n;i++){
            if(min<arr[i]){
                arr[i];
            }
        }

    return 0;
    }
}