#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n=0;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<n++<<" ";
    //     }cout<<endl;
    // }

    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
            if(j%2==0) cout<<"1 ";
            else cout<<"0 ";
        }cout<<endl;
    }

    return 0;
}