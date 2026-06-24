class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>res(nums.size());
        int ptr = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                res[ptr++] = nums[i];
        }
        nums.clear();
        nums = res;
        
    }
};