class Solution {
public:
    int rob(vector<int>& nums) {
        int prevLoot = 0, maxLoot = 0;

        for(int curr : nums){
            int temp = max(maxLoot, prevLoot + curr);
            prevLoot = maxLoot;
            maxLoot = temp;
        }
        return maxLoot;
    }
};