class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n, 1);
        int left = 1, right = 1;
        for(int i = 1, j = n - 2; i < n; i++, j--){
            left = left * nums[i - 1];
            res[i] *= left;
            right = right * nums[j + 1];
            res[j] *= right;
        }
        return res;
    }
};