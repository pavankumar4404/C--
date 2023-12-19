#include<iostream>
using namespace std;

int it_fib(int n){
    int a=0,b=1,s;
    if(n<=1) return n;
    for(int i=2; i<=n; i++){
        s=a+b;
        a=b;
        b=s;
    }
    return s;
}

int rec_fib(int n){
    if(n<=1){
        return n;
    }
    return rec_fib(n-2)+rec_fib(n-1);
}

int F[10];
int memoization_fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    if(F[n-2]==-1){
        F[n-2]=memoization_fib(n-2);
    }
    if(F[n-1]==-1){
        F[n-1]=memoization_fib(n-1);
    }
    F[n]=F[n-2]+F[n-1];
    return F[n];
}

int main(){
    // cout<<it_fib(7)<<endl;
    // cout<<rec_fib(7)<<endl;
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    int ans=memoization_fib(4);
    cout<<ans<<endl;
}