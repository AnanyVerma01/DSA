class Solution(object):
    def isValid(self, s):
        stack=[]
        hash = {")":"(","]":"[","}":"{"}

        for i in s:
            if i in "([{":
                stack.append(i)
            else:
                if not stack:
                    return False
                top = stack[-1]
                if top == hash[i]:
                    stack.pop()
                else:
                    stack.append(i)
            
           
        return not stack
                