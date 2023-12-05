// Link: https://leetcode.com/problems/majority-element/

/*
maintain an answer, count the consecutive same elements
reduce count if we find a diff element
when this count becomes 0, that is the time to reset the count and update our answer, our new possible ans
reason being, if prev was a majority, the count wouldn't have reduced to 0
*/ 

// Code
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int k=0;
        for(int i:nums){
            if(k==0) ans=i;
            if(ans==i)
                k++;
            else k--;
        }
        return ans;
    }
};

/*
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 