/*
 https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> v(n+1), ans;
        for(int i=0;i<n;i++){
            v[groupSizes[i]].push_back(i);
        }
        for(int i=1;i<=n;i++){
            if(v[i].size()){
                vector<int> temp;
                for(int j=0; j<v[i].size();j++){
                    if(temp.size()==i){
                        ans.push_back(temp);
                        temp.clear();
                    }
                    // cout<<i<<" "<<j<<" "<<v[i][j]<<"\n";
                    temp.push_back(v[i][j]);
                }
                ans.push_back(temp);
            }
        }
    return ans;
    }
};

/*
Complexities
Time : O(n)
Space : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 