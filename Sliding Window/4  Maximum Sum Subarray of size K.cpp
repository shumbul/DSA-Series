/*
https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
*/

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &nums , int N){
        // code here 
        int n = nums.size();
        int i = 0, j = 0;
        long long int ans = 0,sum = 0;
        while(j<n){
            sum = sum + nums[j];
            if(j - i + 1 < k){
                j++;
            }
            else if(j - i + 1 == k){
                ans = max(ans,sum);
                sum = sum - nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};

/*
Complexities
Time : O(n)
Space : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 