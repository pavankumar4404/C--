#include <bits/stdc++.h>
using namespace std;

int max1s(int arr[],int n){
    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else cnt=0;
        ans=max(ans,cnt);
    }
    return ans;
}

int main(){
    int arr[]={1, 0, 1, 1, 1, 0, 1};
    int ans=max1s(arr,6);
    cout<<ans;
}