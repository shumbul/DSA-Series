// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock

// Code
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), ans=0, buy=INT_MAX;
        for(int i=0;i<n;i++){
            if(buy>prices[i])
                buy=prices[i];
            ans=max(ans, prices[i]-buy);
        }
        return ans;
    }
};

/*
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 