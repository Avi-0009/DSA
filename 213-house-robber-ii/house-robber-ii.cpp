class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n <= 3)return *max_element(nums.begin(), nums.end());
        vector<int>left(n, 0), right(n, 0);
        left[0] = nums[0]; left[1] = max(nums[0], nums[1]);
        right[1] = nums[1]; right[2] = max(nums[1], nums[2]);
        for(int i = 2; i < n - 1; i++){
            left[i] = max(left[i - 1], nums[i] + left[i - 2]);
        }

        for(int i = 3; i < n; i++){
            right[i] = max(right[i - 1], nums[i] + right[i - 2]);
        }

        return max(left[n - 2], right[n - 1]);
    }
};