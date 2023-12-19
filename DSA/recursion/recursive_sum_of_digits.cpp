#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0){
        return 0;
    }
    int ans=n%10+f(n/10);
    return ans;
}
int main(){
    // int n;
    // cin>>n;
    cout<<f(46)<<endl;
    return 0;
}