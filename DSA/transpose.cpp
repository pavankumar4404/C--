#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Your Matrix is :"<<endl
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    cout<<"Transposed Matrix is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}