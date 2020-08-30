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
    set<int> s;    
    void t(TreeNode* root){
        if(root!=NULL){
            s.insert(root->val);
            t(root->left);
            t(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        t(root);
        if(s.size()<2)
            return -1;
        auto iter = s.begin();
        advance(iter, 1);
        return *iter;
    }
};
