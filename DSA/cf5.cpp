#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[26]={0};
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            arr[s[i]-'A']++;
        }
        int j=1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(arr[i]>=j) ans++;
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}