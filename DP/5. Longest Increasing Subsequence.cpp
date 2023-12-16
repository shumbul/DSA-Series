// Link: https://leetcode.com/problems/longest-increasing-subsequence

// Code
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(), ans=1;
        if(n==0) return 0;

        vector<int> dp(n, 1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                    dp[i]=max(dp[i], dp[j]+1);
            }
            ans=max(ans, dp[i]);
        }
        return ans;
    }
};

/*
Time complexity: O(n*n)
Space complexity: O(n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 