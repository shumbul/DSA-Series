// Link: https://leetcode.com/problems/game-of-life

// Code

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>dir={{-1,-1},{-1,0},{-1,1}, {0,-1},{0,1},{1,1},{1,0},{1,-1}};
                        
        vector<vector<int>> b(board);                   

        int n = board.size();
        int m = board[0].size();

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int live = 0;
                for(int k = 0;k < 8;k++){
                    if(((i + dir[k][0] >= 0) && (i + dir[k][0] < n)) && (j+ dir[k][1] >=0 && (j + dir[k][1] < m))){
                        int x = i + dir[k][0];
                        int y = j + dir[k][1];

                        if(b[x][y] == 1) live++;
                    }
                }
                if(b[i][j] == 1 && (live < 2 || live > 3)) {
                    board[i][j] = 0;
                }
                else if(b[i][j] == 0 && live == 3){
                    board[i][j] = 1;
                }
                else if(b[i][j] == 1 && (live == 2 || live == 3)){
                    board[i][j] = 1;
                }
            }
        }                     
    }
};

/*
Time complexity: O(N*M)
Space complexity: O(N*M)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 