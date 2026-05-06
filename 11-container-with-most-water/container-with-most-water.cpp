class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0, right = height.size() - 1;
        while(left <= right){
            int length = right - left;
            int breadth = min(height[left], height[right]);
            height[left] > height[right] ? right -- : left ++;
            maxWater = max(maxWater, length * breadth);
        }
        return maxWater;
    }
};