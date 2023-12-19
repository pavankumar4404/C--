#include <bits/stdc++.h>
using namespace std;

class abc{
    int a=2;
    int b;
    public:
        int n(int x , int y){
            x=a;
            y=b;
            return x;
        }
};


int main(){
    int x=4;
    int y=8;
    abc obj;
    cout<<obj.n(x,y)<<" ";
    return 0;
}