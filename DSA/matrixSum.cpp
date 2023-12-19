#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int> arr;
        for(int k=0;k<q;k++){
            int i=queries[k][1];
            int j=queries[k][2];
            int sum=0;
            if(queries[k][0]==1){
                sum=mat[i-1][j-1]+mat[i-1][j]+mat[i-1][j+1]+mat[i][j-1]+mat[i][j+1]+mat[i+1][j-1]+mat[i+1][j]+mat[i+1][j+1];
                
            }
            else{
                sum=mat[i-2][j-2]+mat[i-2][j-1]+mat[i-2][j]+mat[i-2][j+1]+mat[i-2][j+2]+mat[i-1][j-2]+mat[i-1][j+2]+mat[i][j-2]+mat[i][j+2]+mat[i+1][j-2]+mat[i+1][j+2]+mat[i+2][j-2]+mat[i+2][j-1]+mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
            }
            arr.push_back(sum);
        }
        return arr;
    }
};
int main(){
int t;
cin>>t;
while(t--){
int n, m, q, ty, i, j;
cin>>n>>m;
vector<vector<int>> mat (n, vector<int>(m, 0)); for(int i = 0; i < n;i++) for(int j=0;j< m;j++) cin>>mat[i][j];
cin>>q;
vector<int> queries [q];
for (int k = 0; k < q;k++){
cin>>ty>>i>>j;
queries [k].push_back(ty);
queries [k].push_back(i);
queries [k].push_back(j);
}
Solution ob;
vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
for(int u: ans) cout<<u<<"\n";
}
return 0;
}