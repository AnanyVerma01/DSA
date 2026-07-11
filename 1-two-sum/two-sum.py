class Solution(object):
    def twoSum(self, nums, target):
        seen = {}

        for x in range(len(nums)):
            remaining = target-nums[x]
            if remaining in seen:
                return list({x,seen[remaining]})
            seen[nums[x]]=x

        return []