public class Solution {
    public int MaxSubArray(int[] nums) {
        int maxSum = int.MinValue, sum = 0;

        for(int i = 0; i < nums.Length; i++){
            sum += nums[i];
            maxSum = Math.Max(maxSum, sum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
}