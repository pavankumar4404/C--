#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==0){
            for(int i=n;i>0;i--){
                cout<<i<<" ";
            }cout<<endl;
        }
        else{
            int cnt=n;
            for(int i=1;i<=n;i++){
                if(i<=k) cout<<i<<" ";
                else{
                    cout<<cnt<<" ";
                    cnt--;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}