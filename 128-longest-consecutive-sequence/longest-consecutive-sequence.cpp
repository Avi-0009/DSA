class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1)return nums.size();
        sort(nums.begin(), nums.end());
        int count = 1, maxCount = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] != nums[i]){
                if((nums[i - 1] + 1) == nums[i]){
                    count++;
                }else{
                    maxCount = max(maxCount, count);
                    count = 1;
                }
            }
        }
        return max(maxCount, count);
    }
};