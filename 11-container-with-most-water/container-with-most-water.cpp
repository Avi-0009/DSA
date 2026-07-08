class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxVal = 0;
        while(left < right){
            int width = right - left;
            if(height[left] > height[right]){
                maxVal = max(maxVal, min(height[left], height[right]) * width);
                right--;
            }
            else{
                maxVal = max(maxVal, min(height[left], height[right]) * width);
                left ++;
            }
        }
        return maxVal;
    }
};