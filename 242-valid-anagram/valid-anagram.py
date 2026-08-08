class Solution(object):
    def isAnagram(self, s, t):
        elements = {}
        for i in s:
            elements[i]=elements.get(i,0)+1
        
        for i in t:
            elements[i]=elements.get(i,0)-1
        
        for j in elements.values():
            if j!=0:
                return False
        
        return True
        
        