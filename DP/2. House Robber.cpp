// Link: https://leetcode.com/problems/house-robber/

// Code
class Solution {
    vector<int> dp;
    int helper(vector<int> &nums, int i) {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+helper(nums, i+2), helper(nums, i+1));
    }
public:
    int rob(vector<int>& nums) {
        // two possibilities - robbed or not
        dp.resize(101, -1);
        return helper(nums, 0);
    }
};

/*
Time complexity: O(n)
Space complexity: O(n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 