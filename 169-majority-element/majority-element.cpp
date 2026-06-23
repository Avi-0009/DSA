class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val = 0, occ = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(occ == 0){
                val = nums[i];
                occ++;
            }
            else if(val == nums[i]){
                occ++;
            }
            else
                occ--;
        }
        return val;
    }
};