// Link: https://leetcode.com/problems/spiral-matrix

// Code

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    int row = matrix.size();
    int col = matrix[0].size();
    int r1 = 0 , c1 =0, r2 = row - 1,c2 = col -1;
    int count = 0;
    int numbers = row * col;
    while(count < numbers)
    {
        for(int i=c1;i<=c2 && count!=numbers;i++){
            res.push_back(matrix[r1][i]);
            count = count + 1;
        }
        r1++;
        for(int i=r1;i<=r2 && count!=numbers;i++){
            res.push_back(matrix[i][c2]);
            count = count + 1;
        }
        c2--;
        for(int i=c2;i>=c1 && count!=numbers;i--){
            res.push_back(matrix[r2][i]);
            count = count + 1;
        }
        r2--;
        for(int i=r2;i>=r1 && count!=numbers;i--){
            res.push_back(matrix[i][c1]);
            count = count + 1;
        }
        c1++;
    }
        return res;
    }
};


/*
Time complexity: O(N*M)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 