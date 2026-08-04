class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res, hash(101, 0);
        int minEle = *min_element(nums.begin(), nums.end());
        int maxEle = *max_element(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        for(int i = minEle; i < maxEle; i++){
            if(hash[i] == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};