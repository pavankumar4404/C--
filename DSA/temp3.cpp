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
    // vector<char> v(6);
    // for(int i=0;i<3;i++){
    //     cin>>v[i];
    // }v.shrink_to_fit();
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // double sum=pow(5,3);
    // cout<<sum<<endl;
    // cout<<ceil(3.5);

    int n;
    cin>>n;
    cout<<prime(n);

    return 0;
}