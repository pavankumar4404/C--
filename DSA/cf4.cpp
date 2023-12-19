#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string ab;
//         cin>>ab;
//         string a="";
//         a+=ab[0];
//         string b="";
//         int i;
//         for(i=1;i<ab.length()/2;i++){
//             if(ab[i]!='0') break;
//             else a+=ab[i];
//         }
//         if(i==ab.length()){
//             cout<<-1<<endl;
//         }
//         else{
//             for(int j=i;j<ab.length();j++){
//                 b+=ab[j];
//             }
//             // cout<<a<<"  "<<b;
//             int x=stoi(a);
//             int y=stoi(b);
//             if(x<y) {
//                 cout<<x<<" "<<y<<endl;
//             }
//             else{
//                 cout<<-1<<endl;
//             }
//         }
        
//     }
//     return 0;
// }

void f(){
    string ab;
    cin >> ab;
    string a = "";
    a += ab[0];
    string b = "";
    int m = ab.length() / 2;
    if(ab.length()%2==0 && ab[m]!='0' && ab[m]<ab[0]) m=m-1;
    if (ab[m] == '0')
    {
        int j = m;
        while (ab[j] == 0)
        {
            j--;
        }if(j==0){
            cout<<-1<<endl;
            return;
        } 
        m = j - 1;
    }
    for (int i = 1; i < m; i++)
    {
        a += ab[i];
    }
    // if (i == ab.length())
    // {
    //     cout << -1 << endl;
    // }
    // else
    // {
        for (int j = m; j < ab.length(); j++)
        {
            b += ab[j];
        }
        // cout<<a<<"  "<<b;
        int x = stoi(a);
        int y = stoi(b);
        if (x < y)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        f();
    }
    return 0;
}