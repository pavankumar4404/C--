#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr={2,3,1,6,8,5,4};
    for(auto i:arr){
        cout<<i<<" ";
    }
    sort(arr.begin(),arr.end());
    cout<<"\nAfter sorting ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}