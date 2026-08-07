# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        res = []

        def recur(root,res):
            if root==None:
                return
            recur(root.left,res)
            res.append(root.val) 
            recur(root.right,res)
        
        recur(root,res)
        return res