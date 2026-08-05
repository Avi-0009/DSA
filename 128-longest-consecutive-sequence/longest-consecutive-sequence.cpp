class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        unordered_set<int>set;

        for(int i : nums){
            set.insert(i);
        }

        int maxCount = 1;

        for(int i : set){
            if(set.find(i - 1) == set.end()){
                int count = 1, curr = i;
                while(set.find(curr + 1) != set.end()){
                    count++;
                    curr++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};