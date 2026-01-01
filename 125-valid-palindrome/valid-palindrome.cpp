class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(char c : s){
            if(!isalnum(c)){
                continue;
            }
            if(c >= 65 and c <= 90){
                c += 32;
            }
            t += c;
        }

        int n = t.size();

        for(int i = 0, j = n - 1; i < n / 2; i++, j--){
            if(t[i] != t[j])
                return false;
        }
        return true;
    }
};