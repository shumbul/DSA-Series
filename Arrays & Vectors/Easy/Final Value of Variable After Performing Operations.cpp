/*
 https://leetcode.com/problems/final-value-of-variable-after-performing-operations
*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string &s: operations){
            if(s=="++X" || s=="X++"){
                x++;
            }
            else if(s=="--X" || s=="X--"){
                x--;
            }
        }
        return x;
    }
};

/*
Complexities
Time : O(1)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 