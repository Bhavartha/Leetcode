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
    int ans=0;    
    void sum(TreeNode *root,int s){
        int t = s*10+root->val;
        if(root->left==NULL && root->right==NULL) ans+=t;
        if(root->left) sum(root->left,t);
        if(root->right) sum(root->right,t);
    }
    
    int sumNumbers(TreeNode* root) {
        if(root) sum(root,0);
        return ans;
    }
};
