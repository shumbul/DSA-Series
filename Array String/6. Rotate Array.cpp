// Link: https://leetcode.com/problems/rotate-array

// Code
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // approach 1 - vector property - O(n*n) time, O(1) space - TLE
        // int K=k;
        // while(K--){
        //     nums.insert(nums.begin(), nums[nums.size()-1]);   // O(n) 
        //     nums.pop_back();    // O(1)
        // }

        // approach 2 - another array - O(n) time and space
        // vector<int> ans(n);
        // for(int i=0;i<n;i++){
        //     ans[(i+k)%n]=nums[i];
        // }
        // nums=ans;

        // approach 3 - push n-K elements to the end of vector, and remove these many from beginning, time: O(n), space: O(n)
        int K=k%n;
        for(int i=0;i<n-K;i++){
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(), nums.begin()+n-K);

        // approach 4 - partially rev - best complexities - time: O(n), space: O(1) 
        // reverse(nums.begin(), nums.begin()+n-K);
        // reverse(nums.begin()+n-K, nums.end());
        // reverse(nums.begin(), nums.end());
    }
};

/* Best
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 