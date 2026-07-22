class Solution(object):
    def maxArea(self, height):
        size = len(height)
        left,right=0,size-1

        maxarea=0
        while left<right:
            size=size-1
            area = min(height[left],height[right])*size
            maxarea=max(maxarea,area)
            if height[left]<height[right]:
                left+=1
            else:
                right-=1

        return maxarea
        