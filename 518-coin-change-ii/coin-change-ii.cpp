class Solution {
public:
    int solve(int n, int amount, vector<int>&coins, vector<vector<int>>&dp){
        if(n == 0)return 0;
        if(amount == 0) return 1;

        if(dp[n][amount] != -1)return dp[n][amount];
        if(coins[n - 1] > amount)
            return dp[n][amount] = solve(n - 1, amount, coins, dp);
        else
            return dp[n][amount] = solve(n, amount - coins[n - 1], coins, dp) + solve(n - 1, amount, coins, dp);
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size() + 1, vector<int>(amount + 1, -1));
        return solve(coins.size(), amount, coins, dp);
    }
};