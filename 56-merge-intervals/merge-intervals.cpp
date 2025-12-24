class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        int first = intervals.front().front();
        int second = intervals.front().back();
        for(int i = 0; i < intervals.size(); i++){
            if(second >= intervals[i].back())
                continue;
            
            if(second >= intervals[i].front())
                second = intervals[i].back();
            
            else{
                res.push_back({first, second});
                first = intervals[i].front();
                second = intervals[i].back();
            }
        }
        res.push_back({first, second});
        return res;
    }
};