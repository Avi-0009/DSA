class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(part.size() > s.size()) return s;
        string res;
        int n = part.size();
        for(char & ch : s){
            res.push_back(ch);

            if(ch == part.back() && res.size() >= n){
                if(res.substr(res.size() - n) == part){
                    res.erase(res.size() - n);
                }
            }
        }
        return res;
    }
};