#include <bits/stdc++.h>
using namespace std;

void f(int n){
    if(n<1){
        return;
    }
    f(n-1);
    cout<<n<<" ";
    return ;
}
int main(){
    f(100);
    return 0;
}