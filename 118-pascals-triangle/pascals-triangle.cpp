class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0; i < numRows; i++){
            vector<int> temp(i + 1);
            temp.front() = temp.back() = 1;
            if(temp.size() > 2){
                for(int j = 1; j < i; j++){
                    temp[j] = res[i - 1][j - 1] + res[i - 1][j];
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};