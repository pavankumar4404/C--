#include <iostream>
#include <vector>
using namespace std;

int first_occ(vector<int> &num, int target){
    int l = 0;
    int h = num.size()-1;
    int ans = -1;
    while(l<=h){
        int mid=l+(h-l)/2;    //use this formula to reduce the errors caused by int overflow instead of (u+l)/2
        if(num[mid]<target){
            l=mid+1;
        }
        else if(num[mid]>target){
            h=mid-1;
        }
        else{
            ans = mid;
            h = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,5,5,5,6,6,9,9,9,9};
    cout<<first_occ(nums, 8)<<endl;
    return 0;
}