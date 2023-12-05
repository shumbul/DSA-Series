// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

/*
the only diff between the 1st and 2nd part is that, here it is allowed to buy and sell multiple times
whereas he part 1 we were only excepted to buy once and sell once

to perform this, we can keep track of profit, and update only when it is positive
*/

// Code
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), ans=0, profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                // positive
                profit+=prices[i]-prices[i-1];
            }
            ans=max(ans, profit);
        }
        return ans;
    }
};

/*
Time complexity: O(n)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 