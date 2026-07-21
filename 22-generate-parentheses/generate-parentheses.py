class Solution(object):
    def generateParenthesis(self, n):
        onum,pnum = n,n
        size=2*n
        temp=[]
        res=[]

        def recur(onum,pnum,size,temp,res):
            if len(temp)==size:
                res.append("".join(temp))
                return
            if onum>0:
                temp.append("(")
                recur(onum-1,pnum,size,temp,res)
                temp.pop()
            if pnum>onum:            
                temp.append(")")
                recur(onum,pnum-1,size,temp,res)
                temp.pop()

        recur(onum,pnum,size,temp,res)
        return res
        