#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    s=0;
    while(n>0){
        n/=10;
        s++;
    }
    cout<<s;
    return 0;
}