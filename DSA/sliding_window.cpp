// The frequency of an element is the number of times it occurs in an array.

// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

// Return the maximum possible frequency of an element after performing at most k operations.

#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k){
    sort(nums.begin(), nums.end());
    int left = 0;
    int ans = 0;
    long cur = 0;
    for (int right = 0; right < nums.size(); right++){
        long target = nums[right];
        cur += target;

        while ((right - left + 1) * target - cur > k){
            cur -= nums[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}

int main(){
    vector<int> nums={1,4,8,13};
    int k=5;
    cout<<maxFrequency(nums,k);
    return 0;
}