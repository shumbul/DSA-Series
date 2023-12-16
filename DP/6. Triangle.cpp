// Link: https://leetcode.com/problems/triangle/

// Code
class Solution {
    int dp[201][201];
    int helper(vector<vector<int>>& triangle, int& n, int i, int j) {
        if(i<0 || j<0 || i>=n || j>=n) return INT_MAX;
        if(i==n-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=triangle[i][j]+min(helper(triangle, n, i+1, j), helper(triangle, n, i+1, j+1));
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // top down 
        int n=triangle.size(), i=0, j=0;
        memset(dp, -1, sizeof dp);
        return helper(triangle, n, i, j);
    }
};

/*
Time complexity: O(n*n)
Space complexity: O(n*n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 