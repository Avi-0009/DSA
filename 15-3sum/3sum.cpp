class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // if(*min_element(nums.begin(), nums.end()) > 0)return {};
        // if(*max_element(nums.begin(), nums.end()) < 0)return {};

        int n = nums.size();
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i ++){
            if(i != 0 and nums[i - 1] == nums[i])
                continue;
            int left = i + 1, right = n - 1;
            while(left < right){
                // int mid = left + (right - left) / 2;
                if(nums[left] + nums[right] + nums[i] > 0){
                    right--;

                }
                else if(nums[left] + nums[right] + nums[i] < 0){
                    left ++;
                }
                else{
                    res.push_back({nums[i], nums[left], nums[right]});
                    while(left < right and nums[left] == nums[left + 1])left ++;
                    while(left < right and nums[right] == nums[right - 1])right--;
                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};