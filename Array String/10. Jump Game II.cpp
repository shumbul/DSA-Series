// Link: https://leetcode.com/problems/jump-game-ii/

// Code
class Solution {
public:
    int jump(vector<int>& nums) {
        // approach 1: DP - O(n*n) time

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

        // approach 2: simila to part 1, just maintain farthest index, and curr fartest
         int ans=0,curr_jump=0,farthest=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,nums[i]+i);
            if(i==curr_jump){
                ans++;
                curr_jump=farthest;
            }
        }
        return ans;
    }
};


/* Best
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 