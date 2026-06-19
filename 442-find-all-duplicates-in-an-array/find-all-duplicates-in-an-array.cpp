class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int>map;
        for(int i : nums){
            map[i]++;
        }
        vector<int>res;
        for(auto &pair : map){
            if(pair.second > 1)
                res.push_back(pair.first);
        }
        return res;
    }
};