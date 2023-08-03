/*
https://leetcode.com/problems/find-subarrays-with-equal-sum/
*/

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]+nums[i+1]==nums[j]+nums[j+1])
                    return true;
            }
        }
        return false;
    }
};

/*
Complexities
Time : O(n^2)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 