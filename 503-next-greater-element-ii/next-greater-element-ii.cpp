class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n, -1);
        stack<int>st;
        for(int i = 2 * nums.size() - 1; i >= 0; i--){
            int idx = i % n;
            int val = nums[idx];

            while(!st.empty() and st.top() <= val){
                st.pop();
            }

            if(i < n){
                if(!st.empty())
                    res[idx] = st.top();
            }

            st.push(val);
        }
        return res;
    }
};