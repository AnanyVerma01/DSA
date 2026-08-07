class Solution(object):
    def majorityElement(self, nums):
        # voting algorithm 
        count=0
        majority=0
        for i in nums:
            if count==0:
                majority=i
            if majority == i:
                count+=1
            else:
                count-=1
        
        return majority