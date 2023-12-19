#include <iostream>
using namespace std;

int pow(int p, int q){
    if(q == 0) return 1;
    if(q%2 == 0) return pow(p*p, q/2);
    return p*pow(p*p, (q-1)/2);
}

int main(){
    int res = pow(2, 6);
    cout<<res;
}