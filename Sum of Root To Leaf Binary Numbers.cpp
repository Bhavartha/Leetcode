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
    void sR2L(TreeNode* root,int s){
        s=(s<<1)+(root->val);
        if(root->left == NULL && root->right==NULL)
            ans+=s;
        if(root->left) sR2L(root->left,s);
        if(root->right) sR2L(root->right,s);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        sR2L(root,0);
        return ans;
    }
};
