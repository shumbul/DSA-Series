/*
https://leetcode.com/problems/3sum
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int l,h,target;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           if(i == 0 || (i > 0 and nums[i]!=nums[i-1])){
               l = i + 1;
               h = n - 1;
               target = -1 * nums[i];
               while(l < h){
                   vector<int> temp;
                   if(nums[l] + nums[h] == target){
                       temp.push_back(nums[i]);
                       temp.push_back(nums[l]);
                       temp.push_back(nums[h]);
                       while(l<h and nums[l]==nums[l+1]) l++;
                       while(l<h and nums[h]==nums[h-1]) h--;
                       l++;
                       h--;
                       ans.push_back(temp);
                   }
                   else if(nums[l] + nums[h] > target){
                       h--;
                   }
                   else{
                       l++;
                   }
               }
           }
        }
        return ans;
    }
};


/*
Complexities
Time : O(n*n)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
