class Solution(object):
    def containsDuplicate(self, nums):
        elements = {}
        for i in nums:
            elements[i] = elements.get(i,0)+1
            if elements[i]>1:
                return True

        return False 
        