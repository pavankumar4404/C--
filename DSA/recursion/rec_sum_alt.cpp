#include <bits/stdc++.h>
using namespace std;
    
int f(int n){
    if(n==1){
        return n;
    }
    int ans=f(n-1);
    if(n%2==0) return -1*n+ans;
    else return n+ans;
}

int main(){
    cout<<f(8)<<endl;
    return 0;
}