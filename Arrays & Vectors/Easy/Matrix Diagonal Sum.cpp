/*
 https://leetcode.com/problems/matrix-diagonal-sum/
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0, n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ans+=mat[i][j];
                }
                if(i==(n-j-1)){
                    ans+=mat[i][j];
                }
            }
        }

        if(n%2){
            ans-=mat[n/2][n/2];
        }
        return ans;
    }
};

// primary diagonal: (i,i)
// secondary diagnal: (i, n-i-1)

/*
Complexities
Time: O(n*n)
Space: O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 