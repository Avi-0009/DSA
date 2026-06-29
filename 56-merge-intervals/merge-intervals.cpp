class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>res;
        int first = intervals[0][0], second = intervals[0][1];
        for(int i = 1; i < n; i++){
            if(second >= intervals[i][0] and second >= intervals[i][1])
                continue;
            else if(second >= intervals[i][0]){
                second = intervals[i][1];
            }
            
            else{
                res.push_back({first, second});
                first = intervals[i][0];
                second = intervals[i][1];
            }
        }
        res.push_back({first, second});
        return res;
    }
};