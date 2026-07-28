class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        unordered_set<int>set;
        int maxCount = 1;
        for(int i : nums)
            set.insert(i);
        
        for(int i : set){
            if(set.find(i - 1) == set.end()){
                int count = 1, curr = i;
                while(set.find(curr + 1) != set.end()){
                    curr++;
                    count++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};