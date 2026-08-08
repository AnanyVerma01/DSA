class Solution(object):
    def missingNumber(self, nums):
        maxx = max(nums)
        for i in range(maxx):
            if i not in nums:
                return i
        return len(nums)