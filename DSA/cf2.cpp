#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<arr[0]<<endl;
        }
        else{
        long long maxi=LONG_MIN;
        long long sum=0;
        int i;
        for(i=0;i<n-1;i++){
            sum+=arr[i];
            if((arr[i]^arr[i+1])%2!=1) sum=arr[i];
            // else sum=0;
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0) sum=0;
        }
        if((arr[n-1]^arr[n-2])%2!=1 && arr[n-1]>0) {sum+=arr[n-1];
        if(sum>maxi) cout<<maxi+sum<<endl;}
        else cout<<maxi<<endl;
        }
    }
    return 0;
}