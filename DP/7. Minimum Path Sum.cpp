// Link: https://leetcode.com/problems/minimum-path-sum

// Code
class Solution {
    int dp[201][201];
    int helper(vector<vector<int>>& grid, int& n, int& m, int i, int j) {
        if(i==n-1 && j==m-1) return grid[i][j];
        if(i<0 || j<0 || i>=n || j>=m) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(helper(grid, n, m, i+1, j), helper(grid, n, m, i, j+1));
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        // top down 
        int n=grid.size(), m=grid[0].size(), i=0, j=0;
        memset(dp, -1, sizeof dp);
        return helper(grid, n, m, i, j);
    }
};

/*
Time complexity: O(m*n)
Space complexity: O(m*n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 