// Link: https://leetcode.com/problems/climbing-stairs

// Code
class Solution {
    int dp[46];
    int helper(int n){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=helper(n-1)+helper(n-2);
    }
public:
    int climbStairs(int n) {
        // top down
        if(n<=2) return n;
        memset(dp, -1, sizeof dp);
        return helper(n);
    }
};

/*
Time complexity: O(n)
Space complexity: O(n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 