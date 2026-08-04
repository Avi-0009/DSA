class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int> diff(n);

        for(int i = 0; i < n; i++){
            diff[i] = target[i] - nums[i];
        }

        long long count = 0, inc = 0, dec = 0;

        for(int i = 0; i < n; i++){
            if(diff[i] > 0){
                if(diff[i] > inc){
                    count += diff[i] - inc;
                }
                inc = diff[i];
                dec = 0;
            } else if(diff[i] < 0){
                if(diff[i] < dec){
                    count += dec - diff[i];
                }
                dec = diff[i];
                inc = 0;
            } else{
                inc = dec = 0;
            }
        }
        return count;
    }
};