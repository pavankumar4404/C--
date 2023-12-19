#include <bits/stdc++.h>
using namespace std;

int lcm_of_no(int a,int b){
    int mx,lcm;
    mx=max(a,b);
    for(int i=1;i<=mx;i++){
        for(int j=1;j<=mx;j++){
            if(a*i==b*j){
                lcm=a*i;
                return lcm;
            }
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm_of_no(a,b)<<endl;
    return 0;
}