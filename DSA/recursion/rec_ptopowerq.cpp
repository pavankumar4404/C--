#include <bits/stdc++.h>
using namespace std;

int power(int p,int q){
    if(q==0){
        return 1;
    }
    int ans=p*power(p,q-1);
    return ans;
}
int main(){
    cout<<power(3,4);
    return 0;
}