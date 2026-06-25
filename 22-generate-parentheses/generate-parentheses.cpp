class Solution {
public:

    void generate(int n, int open, int close, string str, vector<string>&res){
        if((open == close) and (open + close == 2 * n)){
            res.push_back(str);
            return;
        }
        
        if(open > close)
            generate(n, open, close + 1, str + ")", res);
        if(open < n)
            generate(n, open + 1, close, str + "(", res);
    }

    vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate(n, 0, 0, "", res);
        return res;
    }
};