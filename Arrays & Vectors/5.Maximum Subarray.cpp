/*
https://leetcode.com/problems/maximum-subarray/
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum=INT_MIN, n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxSum=max(maxSum, sum);
            if(sum<0)
                sum=0;
        }
        return maxSum;
    }
};

/*
Approach 1: Brute force: Find all possible subarrays, and their sum

int maxSum=INT_MIN, n=nums.size();

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        // subarray: array from index i to j
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=nums[k];
        }
        maxSum=max(maxSum, sum);
    }
}
return maxSum;

Complexities
Time : O(n*n*n)
Space : O(1)

*/

/*
Approach 2: Prefix Sum

int n=nums.size(), maxSum=nums[0];
vector<int> prefix(n);
prefix[0]=nums[0];

for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+nums[i];
    maxSum=max(maxSum, prefix[i]);
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int subArraySum=prefix[j]-prefix[i];
        maxSum=max(maxSum, subArraySum);
    }
}
return maxSum;

Complexities
Time : O(n*n)
Space : O(n)
*/

/*

Approach 3: Kadane's Algorithm

int sum = 0, maxSum=INT_MIN, n=nums.size();
for(int i=0;i<n;i++){
    sum+=nums[i];
    maxSum=max(maxSum, sum);
    if(sum<0)
        sum=0;
}
return maxSum;

Complexities
Time : O(n)
Space : O(1)

*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 