class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n + 1, 0);
        int val = 1;
        for(int i = 1; i <  n + 1; i++){
            // int count = i / 2 + i % 2;
            // res[i] = count;
            if(val * 2 == i){
                val = i;
            }
            res[i] = res[i - val] + 1;
        }
        return res;
    }
};