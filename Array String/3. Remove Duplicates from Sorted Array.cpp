// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// We just need to overwrite the unique values, array is sorted

// Code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int idx=1;
        for(int i=1; i<nums.size() && idx<nums.size(); i++){
            while(i<nums.size() && nums[i]==nums[i-1]) i++;
            if(i<nums.size() && idx<nums.size()){
                nums[idx]=nums[i];
                idx++;
            }
        }
        return idx;
    }
};


/*
Time complexity: O(n)
Space complexity: O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 