//Euclid's algorithm
#include <bits/stdc++.h>
using namespace std;
    
int hcf(int a,int b){
    if(b==a) return a;
    if(a>b) return hcf(b,a-b);
    else return hcf(b-a,a);
}

int main(){
    cout<<hcf(12,8)<<endl;
    return 0;
}