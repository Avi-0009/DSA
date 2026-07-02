class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {

        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        int first = occupiedIntervals[0][0];
        int second = occupiedIntervals[0][1];
        vector<vector<int>> res;

        for (int i = 1; i < occupiedIntervals.size(); i++) {
            if (second >= occupiedIntervals[i][1])
                continue;

            if (second + 1 >= occupiedIntervals[i][0])
                second = occupiedIntervals[i][1];
            else {
                res.push_back({first, second});
                first = occupiedIntervals[i][0];
                second = occupiedIntervals[i][1];
            }
        }
        res.push_back({first, second});
        vector<vector<int>> ans;

        for (auto &it : res) {
            int start = it[0], end = it[1];

            if (end < freeStart || start > freeEnd) {
                ans.push_back({start, end});
            } else {
                if (start < freeStart)
                    ans.push_back({start, freeStart - 1});

                if (end > freeEnd)
                    ans.push_back({freeEnd + 1, end});
            }
        }
        return ans;
    }
};