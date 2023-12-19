#include <iostream>
using namespace std;

int x=0;

int fun(int n){
    // static int x=0;
    if(n>0) {
        // x++;
        return n + fun(n-1);
    }
    return 0;
}

int main(){
    int a=5;
    cout<<fun(a);
}