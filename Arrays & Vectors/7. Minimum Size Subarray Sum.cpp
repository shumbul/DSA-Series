/*
https://leetcode.com/problems/minimum-size-subarray-sum/
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(), left=0, sum=0;
        int minLength=INT_MAX;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                minLength=min(minLength, i-left+1);
                sum-=nums[left++];
            }
        }
        return minLength==INT_MAX?0:minLength;
    }
};

/*

Approach 1: Brute Force

1. Find all possible subarrays
2. Choose the subarrays whose sum is greater than or equal to target
3. store minLength of such subarrays

int minLength=INT_MAX, n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                
                if(sum>=target){
                    minLength=min(minLength, j-i+1);
                }
            }
        }
        if(minLength==INT_MAX){
            return 0;
        }
        return minLength;

Complexities
Time : O(n*n*n)
Space : O(1)

*/

/*

Approach 2: Prefix sum

[2,3,1,2,4,3] -> Prefix sum array: [2,5,6,8,12,15]

int minLength=INT_MAX, n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        if(nums[0]>=target)
            return 1;

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            if(nums[i]>=target){
                return 1;
            }
            if(prefix[i]>=target){
                minLength=min(minLength, i+1);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=prefix[j]-prefix[i];
                // cout<<j<<' '<<prefix[j]<<'-'<<i<<' '<<prefix[i]<<' '<<sum<<'\n';
                if(sum>=target){
                    minLength = min(minLength, j-i);
                }
            }
        }
        if(minLength==INT_MAX){
            return 0;
        }
        return minLength;

Complexities
Time : O(n*n)
Space : O(n)

*/

/* 
Approach 3:

int n=nums.size(), left=0, sum=0;
int minLength=INT_MAX;

for(int i=0;i<n;i++){
    sum+=nums[i];
    while(sum>=target){
        minLength=min(minLength, i-left+1);
        sum-=nums[left++];
    }
}
return minLength==INT_MAX?0:minLength;

TC: O(n^2)
SC: O(1)

*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 