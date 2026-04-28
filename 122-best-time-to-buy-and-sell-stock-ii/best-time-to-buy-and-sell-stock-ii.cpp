class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mxprofit = INT_MIN;
        if(prices.size()==1) return 0;
        for(int i=1;i<prices.size();i++){
            int temp = prices[i] - prices[i-1];
            if(temp>0){
                profit += temp;
            }
            mxprofit = max(mxprofit,profit);
        }
        return mxprofit;
    }
};