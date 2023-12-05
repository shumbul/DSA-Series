/*
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int l = 0,h = n -1,sum = 0;
        while(l<=h)
        {
            sum = numbers[l] + numbers[h];
            if(sum > target){
                h--;
            }
            else if(sum<target){
                l++;
            }
            else{
                ans.push_back(l+1);
                ans.push_back(h+1);
                break;
            }
        }
        return ans;
    }
};

/*
Complexities
Time : O(n)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 