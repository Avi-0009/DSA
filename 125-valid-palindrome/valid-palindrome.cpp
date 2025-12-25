class Solution {
public:
    bool isPalindrome(string s) {
        string lower = "";

        for(char c : s){
            if(!isalnum(c))
                continue;
            if(c >= 'A' and c <= 'Z')
                c += 32;
            lower += c;
        }

        for(int left = 0, right = lower.size() - 1; left < lower.size() / 2; left++, right--){
            if(lower[left] != lower[right])
                return false;
        }
        return true;
    }
};