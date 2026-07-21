class Solution(object):
    def isValid(self, s):
        stack=[]

        for i in s:
            if i in "([{":
                stack.append(i)
            else:
                if len(stack)==0:
                    return False
                top = stack[-1]
                if i==")" and top!="(":
                    return False
                elif i=="}" and top!="{":
                    return False
                elif i=="]" and top!="[":
                    return False
                else:
                    stack.pop()
        
        if len(stack)==0:
            return True
        else: 
            return False
                