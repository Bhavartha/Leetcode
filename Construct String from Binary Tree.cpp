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
    string tree2str(TreeNode* t) {
        if(NULL==t) return "";
        else if(NULL==t->left && NULL==t->right) return to_string(t->val);
        else if(NULL==t->right) return to_string(t->val)+"("+ tree2str(t->left) + ")";
        else return to_string(t->val)+"("+tree2str(t->left)+")"+"("+tree2str(t->right)+")";
    }
};
