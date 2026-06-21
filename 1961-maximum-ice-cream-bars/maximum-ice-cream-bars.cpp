class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = *max_element(costs.begin(), costs.end());
        vector<int> freq(maxCost + 1, 0);
        for (int cost : costs) {
            freq[cost]++;
        }
        int total = 0;
        for (int i = 1; i <= maxCost; i++) {
            if(freq[i] == 0)continue;

            int buy = min(coins / i, freq[i]);
            total += buy;
            coins -= buy * i;

            if(coins < i)
                break;
        }
        return total;
    }
};