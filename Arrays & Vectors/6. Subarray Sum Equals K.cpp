/*
https://leetcode.com/problems/subarray-sum-equals-k/
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0, n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        if(prefix[0]==k)
            ans++;

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            if(prefix[i]==k)
                ans++;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int sum=prefix[i]-prefix[j];
                if(sum==k){
                    ans++;
                }
            }
        }
        return ans;
    }
};

/* 
Approach 1: Brute force:
Find all possible subarray, and calculate their sum
check whether it's equal to k or not

int ans=0, n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(sum==k)
                    ans++;
            }
        }
        return ans;

Complexities
Time : O(n*n*n)
Space : O(1)

*/

/*
Approach 2: Prefix sum array

[1,2,3] -> [1,3,6]

int ans=0, n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        if(prefix[0]==k)
            ans++;

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            if(prefix[i]==k)
                ans++;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int sum=prefix[i]-prefix[j];
                if(sum==k){
                    ans++;
                }
            }
        }
        return ans;

Complexities
Time : O(n*n)
Space : O(n)

*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 