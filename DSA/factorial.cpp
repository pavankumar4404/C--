#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fac=1;
    while(n>0){
        fac*=n;
        n--;
    }
    cout<<fac<<endl;
}