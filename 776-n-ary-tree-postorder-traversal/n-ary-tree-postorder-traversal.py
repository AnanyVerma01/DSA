class Solution(object):
    def postorder(self, root):
        res = []
         
        def recur(root,res):
            if root==None:
                return
            for i in root.children:
                recur(i,res)
            res.append(root.val)

        recur(root,res)
        return res