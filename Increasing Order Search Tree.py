# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        n=[]
        def inorder(root,n):
            if root==None: return
            inorder(root.left,n)
            n.append(root.val)
            inorder(root.right,n)
        
        inorder(root,n)
        ans = curr = TreeNode()
        for _ in n:
            curr.right = TreeNode(_)
            curr = curr.right
        return ans.right
