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
    long long mx=0;
    long long ts=0;
    
    void postorder(TreeNode *root,bool e) {
        long long s=0;
        if(root->left){
            postorder(root->left,e);
            s+= root->left->val;
        }
        if(root->right){
            postorder(root->right,e);
            s+= root->right->val;
        }
        if(!e)
            root->val+=s;
        else{
            long long t = (ts - (root->val))*(root->val);
            if(t > mx) mx = t;
        }
   }

    int maxProduct(TreeNode* root) {
        postorder(root,false);
        ts = root->val;
        postorder(root,true);
        
        return mx%1000000007;
    }
};
