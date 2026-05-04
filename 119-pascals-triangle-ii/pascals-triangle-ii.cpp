class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res(1,1);
        for(int i = 1; i <= rowIndex; i++){
            vector<int>temp(i + 1, 0);
            temp.front() = temp.back() = 1;
            if(i < 2){
                res = temp;
                continue;
            }
            for(int j = 1; j < i ; j++){
                temp[j] = res[j - 1] + res[j];
            }
            res = temp;
        }
        return res;
    }
};