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
    void dfs(TreeNode* root,vector<int> &op){
        if(not root) return;
        dfs(root->left,op);
        op.push_back(root->val);
        dfs(root->right,op);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> op;
        dfs(root,op);
        return op;
    }
};
