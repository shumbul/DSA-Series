// Link: https://leetcode.com/problems/rotate-image


// Code

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0;i < n;i++){
            for(int j = 0;j < i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0;i < n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

/*
Time complexity: O(n*n) 
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 
