#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,6,1,1,1,7,4,8,2,4,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mode,cnt,temp;
    temp=0;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>temp){
            temp=cnt;
            mode=arr[i];
        }
    }
    if(cnt==1){
        mode=arr[0];
    }
    cout<<temp<<mode<<endl;
    return 0;
}