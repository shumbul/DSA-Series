// Link: https://leetcode.com/problems/jump-game-ii/

// Code
class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            if(dp[i]==INT_MAX)
                continue;
            for(int j=0;j<nums[i] && j+i+1<n;j++)
                dp[j+i+1]=min(dp[j+i+1], dp[i]+1);
        }
        return dp[nums.size()-1];
    }
};


/*
Time complexity: O(n*n)
Space complexity: O(n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 