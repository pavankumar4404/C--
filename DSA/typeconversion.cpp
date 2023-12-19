#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    string b;
    b=to_string(a);
    // cout<<b<<endl;
    
    /*char arr[b.length()];
    for(int i=0;i<b.length();i++){
        arr[i]=b[i];
    }
    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i]<<endl;
    }*/

    //Method 2
    char arr[b.length()];
    strcpy(arr,b.c_str());
    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i]<<endl;
    }
}