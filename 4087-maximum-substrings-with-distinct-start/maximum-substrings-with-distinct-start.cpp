class Solution {
public:
    int maxDistinct(string s) {
        vector<int>set(26, 0);
        int count = 0;
        for(char &c : s){
            if(set[c - 'a'] == 0){
                count++;
                set[c - 'a']++;
            }
        }
        return count;
    }
};