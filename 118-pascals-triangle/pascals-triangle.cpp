class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> curr, prev;
        for(int i = 0; i < numRows; i ++){
            curr.resize(i + 1);
            curr.front() = curr.back() = 1;
            
            for(int j = 1; j < i; j++){
                curr[j] = prev[j - 1] + prev[j];
            }
            res.push_back(curr);
            prev = curr;
        }
        return res;
    }
};