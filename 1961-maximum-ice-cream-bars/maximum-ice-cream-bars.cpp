class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int total = 0;
        for(int i : costs){
            if(coins >= i){
                coins -= i;
                total ++;
            }
            else
                break;
        }
        return total;
    }
};