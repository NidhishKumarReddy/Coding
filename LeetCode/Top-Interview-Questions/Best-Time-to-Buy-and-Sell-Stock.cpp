class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = INT_MIN;
        int profit = 0;
        int ans = 0;
        for(int i = n-1; i>=0; i--){
            if(prices[i] > max){
                max = prices[i];
            }
            profit = max - prices[i];
            if(profit > ans){
                ans = profit;
            }
        }
        return ans;
    }
};