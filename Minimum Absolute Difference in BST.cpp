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
    vector<int> v;
    void dfs(TreeNode* root){
        if(root){
            v.push_back(root->val);
            dfs(root->left);
            dfs(root->right);
        }
    }
    
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        sort(v.begin(),v.end());
        int mn = INT_MAX;
        for(int i=1;i<v.size();i++)
            mn = min(mn,v[i]-v[i-1]);
        return mn;
    }
};
