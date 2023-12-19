#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,4,6,7,1};
    int x=4;
    int ans=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}