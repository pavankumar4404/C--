#include <bits/stdc++.h>
using namespace std;

int arm(int n,int dig){
    if (n==0) return 0;
    int ans=pow(n%10,dig)+arm(n/10,dig);
    return ans;
}

int main(){
    int n=153;
    int dig=0;
    string temp=to_string(n);
    cout<<(arm(n,temp.length())==n);
    return 0;
}