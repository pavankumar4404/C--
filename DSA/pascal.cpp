#include<bits/stdc++.h>
using namespace std;

// vector<vector <int>> pascal(int n){
//     vector<vector<int>> p(n);
//     for(int i=0;i<n;i++){
//         p.resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i){
//                 p[i][j]=1;
//             }
//             else{
//                 p[i][j]=p[i-1][j]+p[i-1][j-1];
//             }
//         }
//     }
//     return p;
// }
int main(){
    int n;
    cin>>n;
    vector<vector<int>> p(n);
    for(int i=0;i<n;i++){
        p[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                p[i][j]=1;
            }
            else{
                p[i][j]=p[i-1][j]+p[i-1][j-1];
            }
        }
    }
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[i].size();j++){
            cout<<p[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}