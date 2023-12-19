#include <bits/stdc++.h>
using namespace std;

void f(int n,int k){
    if(k<1){
        return;
    }
    f(n,k-1);
    cout<<k*n<<" ";
}
int main(){
    f(3,5);
    return 0;
}