/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyDate=0, ans=0, n=prices.size();
        for(int day=1;day<n;day++){
            if(prices[day]<prices[buyDate]){
                buyDate=day;
            }
            int profit=prices[day]-prices[buyDate];
            ans=max(ans, profit);
        }
        return ans;
    }
};

/*

[7,1,5,3,6,4]

Day 1: Assume we purchased
Day 2: Undo buying and Day 1, and buy on Day 2
Day 3: Profit of 5-1=4
Day 4: Profit of 3-1=2
Day 5: Profit of 6-1=5
Day 6: Profit of 4-1=3

*/

/*
Complexities
Time : O(n)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 