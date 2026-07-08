class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxVal = 0;
        while(left < right){
            int width = right - left;
            int length = min(height[left], height[right]);
            height[left] > height[right] ? right-- : left ++;
            maxVal = max(maxVal, length * width);
        }
        return maxVal;
    }
};