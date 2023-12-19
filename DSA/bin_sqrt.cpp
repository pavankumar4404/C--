#include <bits/stdc++.h>
using namespace std;

int sqrt(int x){
    int l = 0; 
    int h = x;
    int ans = 0;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(mid*mid <= x){
            ans = mid;
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return ans;
}

int main(){
    cout<<sqrt(26)<<endl;
    return 0;
}