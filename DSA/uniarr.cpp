// Luigi has an array A of N positive integers. He wants to make all elements of the array equal. Find the minimum number of moves required to make all the elements of the array equal
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,hcf;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=hcf){
                ans++;
            }
        }
        for(int j=0;j<n-1;j++){
            for(int i=1;i<=min(arr[j],arr[j+1]);i++){
                if(arr[j]%i==0 && arr[j+1]%i==0){
                    hcf=i;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=hcf){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}