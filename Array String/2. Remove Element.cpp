// https://leetcode.com/problems/remove-element

/*
We just have to overwrite the values we want with the ones which are not required, we can do that in a liner traversal
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[idx]=nums[i];
                idx++;
            }
        }
        return idx;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 