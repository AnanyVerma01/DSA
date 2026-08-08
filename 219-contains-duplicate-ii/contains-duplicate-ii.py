class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        elements={}
        for i in range(len(nums)):
            if nums[i] in elements:
                diff = abs(elements[nums[i]]-i)
                if diff<=k:
                    return True
            elements[nums[i]] = elements.get(nums[i],0)+i
        return False