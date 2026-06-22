class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26, 0);
        for(char & c : text){
            freq[c - 'a']++;
        }

        int res = 0;
        res = min(freq['b' - 'a'], min(freq['a' - 'a'], min(freq['l' - 'a'] / 2, min(freq['o' - 'a'] / 2, freq['n' - 'a']))));
        return res;
    }
};