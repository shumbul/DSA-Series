// Link: https://leetcode.com/problems/jump-game

/*
Let's keep this simple
Just take the max limit till where we can jump to
And check for the same in a single traversal, if we are under that limit
Parallelly updating the max limit
*/

// Code
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(i>maxi) return false;
            maxi=max(maxi, (int)i+nums[i]);
        }
        return true;
    }
};

/*
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 