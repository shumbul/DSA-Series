/*
https://leetcode.com/problems/merge-intervals/description/
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        int currstart=intervals[0][0], currend=intervals[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            if(currend>=intervals[i][0]) // overlap
            {
                currend = max(currend, intervals[i][1]);
            }
            else{
                ans.push_back({currstart, currend});
                currstart=intervals[i][0], currend=intervals[i][1];
            }
        }
        ans.push_back({currstart, currend});
        return ans;
    }
};

/*
Complexities
Time : O(nlogn)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 