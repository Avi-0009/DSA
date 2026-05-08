class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int left = i + 1, right = n - 1;
            int newTarget = target - numbers[i];
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(newTarget == numbers[mid])return {i + 1, mid + 1};
                else if(newTarget < numbers[mid])right = mid - 1;
                else left = mid + 1;
            }
        }
        return {-1, -1};
    }
};