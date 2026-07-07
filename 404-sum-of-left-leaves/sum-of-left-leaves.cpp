/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int &val){
        if(!root)return 0;
        if(root->left){
            if(!root->left->left and !root->left->right)val += root->left->val;
            solve(root->left, val);
        }
        solve(root->right, val);
        return val;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int val = 0;
        solve(root, val);
        return val;
    }
};