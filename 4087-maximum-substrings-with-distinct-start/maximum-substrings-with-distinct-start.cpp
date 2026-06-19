class Solution {
public:
    int maxDistinct(string s) {
        vector<int>uset(26,0);
        for(char &c : s){
            uset[c - 'a']++;
        }
        int count = 0;
        for(int i : uset){
            if(i > 0)
                count++;
        }
        return count;
    }
};