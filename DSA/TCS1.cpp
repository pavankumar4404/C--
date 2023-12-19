#include<iostream>
using namespace std;

int bubble(int n,int arr[],bool asc){
    int cnt=0;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++){
            if((asc && arr[j]>arr[j+1]) || (!asc && arr[j]<arr[j+1])){
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
    }

    return cnt;

}

int main(){
  	int n;
	cin>>n;
  	int arr[n];
    int temp[n];
  	for(int i=0;i<n;i++){
      cin>>arr[i];
      temp[i]=arr[i];
    }
  	int asc=bubble(n,arr,true);
  	int dsc=bubble(n,temp,false);
  	cout<<min(asc,dsc)<<endl;
}