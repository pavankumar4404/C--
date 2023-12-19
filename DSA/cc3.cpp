#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s,q;
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            s+=e;
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            if((r-l)%2==0){
                s+=1;
            }
        }
    cout<<s<<endl;
    }
    return 0;
}