class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while(i <= j){
            if(nums[i] != val) i++;
            else{
                if(nums[j] == val) j--;
                else{
                    swap(nums[i], nums[j]);
                    i ++;
                    j --;
                }
            }
        }
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val)
                break;
            count ++;
        }
        return count;
    }
};