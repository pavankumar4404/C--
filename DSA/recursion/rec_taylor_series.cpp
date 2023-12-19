#include <iostream>
using namespace std;

double p=1, f=1;
double e(int x, int n){
    // static double p = 1;
    // static double f = 1;
    double r;
    if(n == 0){
        return 1;
    }
    r = e(x, n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}

double it_e(int x, int n){
    double s = 1;
    double num = 1;
    double den = 1;
    for(int i = 1; i<=n; i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main(){
    cout<<it_e(3,10);
    return 0;
}