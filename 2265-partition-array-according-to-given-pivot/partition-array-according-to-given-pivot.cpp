class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>res(n, 0);
        int i = 0, j = n - 1;
        int left = 0, right = n - 1;
        while(i < n){
            if(nums[i] < pivot){
                res[left] = nums[i];
                left++;
            }

            if(nums[j] > pivot){
                res[right] = nums[j];
                right--;
            }

            i++;
            j--;
        }
        for(i = 0; i < n; i++){
            if(nums[i] == pivot){
                res[left] = nums[i];
                left++;
            }
        }
        return res;
    }
};