class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;              
        dp[0][1] = -prices[0];   

        for (int ind = 1; ind < n; ind++) {
            dp[ind][0] = max(dp[ind - 1][0], dp[ind - 1][1] + prices[ind]);
            dp[ind][1] = max(dp[ind - 1][1], dp[ind - 1][0] - prices[ind]);
        }
        return dp[n - 1][0];
    }
};