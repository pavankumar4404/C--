// #include <iostream>
// #include <string>
// using namespace std;

// int f(int n,int c){
//     if(n==50) return c;
//     c++;
//     if (n>50) return f(n-3,c);
//     else return f(n+2,c);
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,c;
//         c=0;
//         cin>>n;
// 	    cout<<f(n,c)<<endl;
//     }
// }

// int main(){
//     int i=1;
//     // char s=i;
//     // char a = static_cast<char>(i);
//     char a = i+'A';
//     string str(1,a);
//     cout<<str;
// 	return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    float l,v1,v2;
// 	    cin>>l>>v1>>v2;
// 	    int a=ceil(l/v1);
// 	    int b=ceil(l/v2);
// 	    cout<<a-b-1<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m;
// 	    cin>>n>>m;
// 	    string s,k;
// 	    cin>>s;
// 		cin>>k;
// 	    string mn=s.substr(0,m);
// 	    for(int i=1;i<n-m+1;i++){
// 	        if(abs(stoi(k)-stoi(s.substr(i,i+m))) < stoi(mn)){
// 	            mn=s.substr(i,i+m);
// 	        }
// 	        else if(abs(stoi(k)-stoi(s.substr(i,i+m))) < stoi(mn)){
// 	            cout<<0<<endl;
// 	            break;
// 	        }
// 	    }
// 		cout<<mn<<endl;
// 	    int cnt=0;
// 		for(int i=0;i<m;i++){
// 			cnt+=abs((mn[i]-'0')-(k[i]-'0'));
// 		}
// 		cout<<cnt<<endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
    // int t;
    // cin >> t;
    // while (t--) {
    //     char a[10][10];
    //     for (int i = 0; i < 10; i++) {
    //         for (int j = 0; j < 10; j++) {
    //             cin >> a[i][j];
    //         }
    //     }
        
    //     int ans = 0;
    //     int ringPoints[5] = {1, 2, 3, 4, 5};

    //     for (int i = 0; i < 10; i++) {
    //         for (int j = 0; j < 10; j++) {
    //             if (a[i][j] == 'X') {
    //                 int minDist = min(min(min(i, 9 - i), j), 9 - j);
    //                 ans += ringPoints[minDist];
    //                 a[i][j] = '.';
    //             }
    //         }
    //     } 

    //     cout << ans << endl;
    // }

    // int* a=new int(10);
    // cout<<*a<<endl;
    // delete a;
    // char* a=new char;
    // *a='a';
    // cout<<*a;

    int a;
    cout<<a;
    return 0;
}
