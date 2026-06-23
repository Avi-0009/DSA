class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>res(n, -1);
        stack<int>st;
        for(int i = 0; i < 2 * n; i++){
            int idx = i % n;
            int val = nums[idx];

            while(!st.empty() and nums[st.top()] < val){
                res[st.top()] = val;
                st.pop();
            }
            if(i < n)
                st.push(idx);
        }return res;
    }
};