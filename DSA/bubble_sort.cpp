#include <bits/stdc++.h>
using namespace std;

void bubble(int n,vector<int> &v){
    int cnt=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                cnt++;
                for (int i = 0; i < n; i++) {
                    cout << v[i] << " ";
                }cout<<endl;
            }
        }
        
    }
    cout<<cnt<<endl;
}

int main(){
    int n;
    // cin >> n;
    vector<int> v;
    v={4,5,1,2,3};
    n=v.size();
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
    bubble(n,v);
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    return 0;
}