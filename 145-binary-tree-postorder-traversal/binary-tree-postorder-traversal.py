class Solution(object):
    def postorderTraversal(self, root):
        res = []

        def recur(root,res):
            if root==None:
                return
            recur(root.left,res)
            recur(root.right,res)
            res.append(root.val)

        recur(root,res)
        return res
        