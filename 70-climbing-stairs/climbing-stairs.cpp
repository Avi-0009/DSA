class Solution {
public:
    int climbStairs(int n) {
        if(n < 3) return n;
        int prev = 1, curr = 2, temp = 0;
        for(int i = 3; i < n + 1; i++){
            temp = curr + prev;
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};