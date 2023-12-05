/*
https://leetcode.com/problems/container-with-most-water
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAmt = 0;
        int i = 0,j = height.size() - 1;
        while(i<j){
            maxAmt = max(maxAmt,min(height[i],height[j]) * (j - i));
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxAmt;
    }
};

/*
Complexities
Time : O(n)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 