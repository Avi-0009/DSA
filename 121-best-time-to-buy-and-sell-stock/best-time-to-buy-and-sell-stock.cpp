class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit = 0;
        int val = prices.front();
        int n = prices.size();

        for(int i = 1; i < n; i++){
            if(val >= prices[i]){
                val = prices[i];
            }else{
                profit = prices[i] - val;
            }
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};