class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        stack<int>st;
        for(int i = 0; i < nums2.size(); i++){
            while(!st.empty() and nums2[i] > st.top()){
                umap[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int>res;
        for(int i =0 ;i < nums1.size(); i++){
            if(umap.find(nums1[i]) != umap.end())
                res.push_back(umap[nums1[i]]);
            else
            res.push_back(-1);
        }
        return res;
    }
};