class Solution {
public:
    int solve(int start, int end, vector<int> & nums){
        int prev1 = 0, prev2 = 0;
        for(int i = start; i <= end; i++){
            int take = nums[i] + prev2;
            int notTake = prev1;

            int curr = max(take, notTake);

            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n <= 3)return *max_element(nums.begin(), nums.end());
        return max(solve(0, n - 2, nums), solve(1, n - 1, nums));
    }
};