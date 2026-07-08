class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int newTarget = target - nums[i];
            if(map.find(newTarget) == map.end()){
                map[nums[i]] = i;
            }
            else{
                return {i, map[newTarget]};
            }
        }
        return {-1, -1};
    }
};