// Horner's rule : T = O(n)
#include <iostream>
using namespace std;

double e(int x, int n){
    static double s;
    if(n == 0){
        return s;
    }
    s = 1+x*s/n;
    return e(x, n-1);
}

double it_e(int x, int n){
    double s = 1;
    for(; n>0; n--){
        s = (1+x*s/n);
    }
    return s;
}

int main(){
    double ans = e(3,10);
    cout<<ans<<endl;
    double ans2 = it_e(3,10);
    cout<<ans2;
}