#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r,p;
    cin>>n;
    r=0;
    while(n>0){
        p=n%10;
        if(p==4){
            r++;
        }
        n/=10;
    }
    cout<<r;
    return 0;
}