#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
    cin>>t;
    while(t--){
        string s,a,b;
        cin>>n;
        cin>>s;
        a=s.substr(0,n/2);
        b=s.substr(n/2,n/2);
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
	return 0;
}
