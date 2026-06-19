class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        if(n < 2)return n;
        unordered_set<char>uset;
        for(int i = 0; i < n; i ++){
            if(uset.find(s[i]) == uset.end())
                uset.insert(s[i]);
        }
        return uset.size();
    }
};