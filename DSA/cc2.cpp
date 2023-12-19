#include <iostream>
using namespace std;

int main() {
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        if(y==0 || y==(n*x)){
            cout<<"YES"<<endl;
        }
        else if((y%x)==0 && ((n*x)>y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}