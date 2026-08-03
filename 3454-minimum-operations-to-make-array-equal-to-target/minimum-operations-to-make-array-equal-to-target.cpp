class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int> diff(n);

        for(int i = 0;i < n;i ++){
            diff[i] = nums[i] - target[i];
        }

        long long count = 0, incr = 0, decr = 0;

        for(int i = 0; i < n; i++){
            if(diff[i] > 0){
                if(diff[i] > incr){
                    count += diff[i] - incr;
                }
                incr = diff[i];
                decr = 0;
            } else if(diff[i] < 0){
                if(diff[i] < decr){
                    count += decr - diff[i];
                }
                decr = diff[i];
                incr = 0;
            } else{
                incr = decr = 0;
            }
        }
        return count;
    }
};