// Link: https://leetcode.com/problems/coin-change

// Code
class Solution {
    int dp[13][10001]={-1};
    int helper(vector<int>& coins, int curr, int amount) {
        if(curr>=coins.size() || amount<0)
            return amount==0?0:INT_MAX-2;
            if(dp[curr][amount]!=-1)
                return dp[curr][amount];
        int ans=-1;
        if(coins[curr]>amount){
            int currNotTaken = helper(coins, curr+1, amount);
            ans = currNotTaken;
        }
        else{
            int takeCoin=1+helper(coins, curr, amount-coins[curr]);
            int doNotTakeCoin=helper(coins, curr+1, amount);
            ans=min(takeCoin, doNotTakeCoin);
        }
        return dp[curr][amount]=ans;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof dp);
        int res=helper(coins, 0, amount);
        int ans=res==INT_MAX-2?-1:res;
        return ans;
    }
};

/*
coins.size() = max 12 = m
amount = max 10000 = n
Time complexity: O(m*n)
Space complexity: O(m*n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 