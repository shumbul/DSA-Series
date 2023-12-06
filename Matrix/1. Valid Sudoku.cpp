// Link: https://leetcode.com/problems/valid-sudoku


// Code

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> b;
        unordered_map<char,int> r;
        unordered_map<char,int> c;

        for(int i = 0;i < 9;i++){
            for(int j = 0;j < 9;j++){
                if(board[i][j] != '.'){
                    r[board[i][j]]++;
                }
                if(board[j][i] != '.'){
                    c[board[j][i]]++;
                }
                if(r[board[i][j]] > 1) return false;
                if(c[board[j][i]] > 1) return false;
            }
            r.clear();
            c.clear();
        }

        for(int i = 0;i < 9;i += 3){
            for(int j = 0;j < 9;j += 3){
                for(int x = i;x < i + 3;x++){
                    for(int y = j;y < j + 3;y++){
                        if(board[x][y] != '.'){
                            b[board[x][y]]++;
                        }
                        if(b[board[x][y]] > 1) return false;
                    }
                }
                b.clear();
            }
        }

        return true;
    }
};


/*
Time complexity: O(1) // Constant Time Operation - O(81)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 