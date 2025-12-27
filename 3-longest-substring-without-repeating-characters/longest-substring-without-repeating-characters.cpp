class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>uset;
        int start = 0,cnt = 0;

        for(int i = 0; i < s.size(); i++){
            while(uset.find(s[i]) != uset.end()){
                uset.erase(s[start++]);
            }
            uset.insert(s[i]);
            cnt = max(cnt, i - start + 1);
        }
        return cnt;
    }
};