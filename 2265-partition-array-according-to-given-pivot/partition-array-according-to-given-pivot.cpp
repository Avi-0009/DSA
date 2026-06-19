class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small, eq, greater;
        for(int i : nums){
            if(i < pivot) small.push_back(i);
            else if(i == pivot) eq.push_back(i);
            else greater.push_back(i);
        }

        for(int i : eq){
            small.push_back(i);
        }
        for(int i : greater){
            small.push_back(i);
        }
        return small;
    }
};