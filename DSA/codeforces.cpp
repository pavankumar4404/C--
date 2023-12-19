#include<bits/stdc++.h>
// #include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n]={0};
        int max=INT_MIN;
        int min=INT_MAX;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max) max=arr[i];
            if(arr[i]<min) min=arr[i];
        }
        cout<<max-min<<endl;
    }
}

// void check(){
//     string s;
//     cin>>s;
//     for(int i=0;i<s.length()-1;i++){
//         if(s[i]=='c' && s[i+1]=='a'){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         check();
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n; 
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int m=arr[0];
//         int idx=0;
//         for(int i=1;i<n;i++){
//             if(arr[i]<m){
//                 m=arr[i];
//                 idx=i;
//             }
//         }
//         arr[idx]++;
//         long p=1;
//         for(int i=0;i<n;i++){
//             p*=arr[i];
//         }
//         cout<<p<<endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         char a[10][10];
//         for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                 cin>>a[i][j];
//             }
//         }
//         int ans=0;
//         for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                 if(a[i][j]=='X'){
//                     if(i==0 || i==9 || j==0 || j==9){
//                         ans=ans+1;
//                         a[i][j]='.';
//                     }
//                     if(i==1 || i==8 || j==1 || j==8){
//                         ans=ans+2;
//                         a[i][j]='.';
//                     }
//                     if(i==2 || i==7 || j==2 || j==7){
//                         ans=ans+3;
//                         a[i][j]='.';
//                     }
//                     if(i==3 || i==6 || j==3 || j==6){
//                         ans=ans+4;
//                         a[i][j]='.';
//                     }
//                     if(i==4 || i==5 || j==4 || j==5){
//                         ans=ans+5;
//                         a[i][j]='.';
//                     }
//                 }
//             }
//         } 
//         cout<<ans<<endl;
        
//     }
// }