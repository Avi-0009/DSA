class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int aVal = 0, bVal = 0;
        for(char &c : s){
            if(c == 'a')
                aVal ++;
            else
                bVal ++;
        }
        return abs(aVal - bVal);
    }
};