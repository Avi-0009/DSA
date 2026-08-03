class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int>set;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != target[i]){
                set.insert(nums[i]);
            }
        }
        return set.size();
    }
};