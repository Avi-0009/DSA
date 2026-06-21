class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int newTarget = target - numbers[i];
            int left = i + 1, right = n - 1;
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(numbers[mid] > newTarget){
                    right = mid - 1;
                }
                else if(numbers[mid] < newTarget){
                    left = mid + 1;
                }
                else
                    return { i + 1, mid + 1};
            }
        }
        return {-1, -1};
    }
};