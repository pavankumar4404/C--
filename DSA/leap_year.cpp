#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4!=0){
        cout<<"Not a leap year";
    }
    else if(n%100==0 & n%400!=0){
        cout<<"Not a leap year";
    }
    else cout<<"Leap year";
    return 0;
}