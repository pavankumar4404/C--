#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={2,6,4,1,9,3};
    int size=sizeof(array)/sizeof(array[0]);
    int n;
    cin>>n;
    int ans=-1;
    for(int i=0;i<size;i++){
        if(array[i]==n){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}