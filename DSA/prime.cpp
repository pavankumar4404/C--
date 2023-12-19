#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<=1) return false;
    if(n%2==0 && n!=2) return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    return 0;
}