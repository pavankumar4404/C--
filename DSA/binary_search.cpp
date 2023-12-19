#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0;
        int u=nums.size()-1;
        while(l<=u){
            int mid=l+(u-l)/2;    //use this formula to reduce the errors caused by int overflow instead of (u+l)/2
            if(nums[mid]<t){
                l=mid+1;
            }
            else if(nums[mid]>t){
                u=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

    int rec_binSearch(vector<int> &num, int target, int l, int h){
        if(l>h) return -1;
        int mid = l+(h-l)/2;
        if(num[mid] == target){
            return mid;
        }
        else if(num[mid] > target){
            return rec_binSearch(num, target, l, mid-1);
        }
        else{
            return rec_binSearch(num, target, mid+1, h);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 7;
    // int result = sol.search(nums, target);
    int result = sol.rec_binSearch(nums, target, 0, nums.size()-1);
    cout << "Index of " << target << " is " << result << endl;
    return 0;
}