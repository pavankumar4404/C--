#include <bits/stdc++.h>
using namespace std;

void subarr(int r,int l,int* a){
	int sn;
	sn=r-l;
	int b[sn];
	for(int i=0;i<=sn;i++){
		b[i]=a[l];
		l++;
	}
    for(int i=0;i<=sn;i++){
        cout<<b[i]<<endl;
    }
}
int main(){
    
    int n,l,r;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
		int e;
		cin>>e;
		a[i]=e;
    }
    cout<<endl;
    cin>>l>>r;
    subarr(r-1,l-1,a);
    
}
