// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

// remove some duplicates in-place such that each unique element appears at most twice
// overwrite, just change condition to check for 2nd last number before the current one

// Code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int num : nums)
            if (i < 2 || num > nums[i-2])
                nums[i++] = num;
        return i;
    }
};

/*
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 