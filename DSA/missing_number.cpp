#include <bits/stdc++.h>
using namespace std;

//XOR approach
int missing(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    xor1^=n;
    return xor1^xor2;
}

int main(){
    int arr[]={1,2,6,5,4};
    int miss=missing(arr,6);
    cout<<miss;
    return 0;
}