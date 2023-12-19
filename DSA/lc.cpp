#include <iostream>
#include<vector>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

// int main() {
//   int n = 3;
//   for(int i=0;i<5;i++){
//   int count = __builtin_popcount(i);
//   cout<<count<<" ";
//   }

void maximumSumOfHeights(vector<int> &mh){
	int n=mh.size();
	vector<int> heights[n];
	int mx=mh[0];
	for(int i=0;i<n;i++){
		if(mh[i]>mx) mx=mh[i];
	}
	int i=0;
	while(mh[i+1]!=mx && mh[i]!=mx){
		if(mh[i] > mh[i+1]){
			int j=i;
			while(j>=0){
				mh[j]=mh[i+1];
				j--;
			}
			i++;
		}
		else{
			mh[i]=mh[i-1];
			i++;
		}
	}
	
	while(i<n){
		
	}
	for(int i=0;i<n;i++){
		cout<<mh[i]<<" ";
	}
}
int main(){
	// vector<int> mh ={5,4,3,2,9,2,2,2};
	vector<int> nums={12,6,1,2,7};
	auto mx=max_element(nums.begin(),nums.end()-3);
	int maxi=*mx;
	cout<<maxi<<endl;

	int mxidx=0;
	for(int i=0;i<nums.size()-3;i++){
		if(nums[i]==maxi) {
			mxidx=i;
			break;
		}
	}
	cout<<mxidx<<endl;
}