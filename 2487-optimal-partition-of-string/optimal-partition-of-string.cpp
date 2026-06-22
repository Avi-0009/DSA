class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>uset;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(uset.find(s[i]) != uset.end()){
                count++;
                uset.clear();
            }
            uset.insert(s[i]);
        }
        return count + 1;
    }
};