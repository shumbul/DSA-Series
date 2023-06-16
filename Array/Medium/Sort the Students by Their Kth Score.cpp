/*
 https://leetcode.com/problems/sort-the-students-by-their-kth-score/
*/

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(), score.end(), [&](auto const &a, auto const &b){
        return a[k]>b[k];});
        return score;
    }
};

/*
Complexities
Time : O(nlogn)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 