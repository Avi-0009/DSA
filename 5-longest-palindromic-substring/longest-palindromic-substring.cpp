class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        pair<int, int> store = {0, 0};

        for(int i = 0; i < n; i++){
            dp[i][i] = true;
        }

        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]){
                dp[i][i + 1] = true;
                store = {i, i + 1};
            }
        }

        for(int l = 2; l < n; l++){
            for(int i = 0 ; i < n - l ; i++){
                int j = i + l;
                if(s[i] == s[j] and dp[i + 1][j - 1]){
                    dp[i][j] = true;
                    store = {i, j};
                }
            }
        }
        return s.substr(store.first, store.second - store.first + 1);
    }
};