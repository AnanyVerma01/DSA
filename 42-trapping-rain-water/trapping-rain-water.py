class Solution(object):
    def trap(self, height):
        n = len(height)
        leftmax = [0]*n
        rightmax = [0]*n

        for i in range(1,len(height)):
            leftmax[i]=max(leftmax[i-1],height[i-1])
            
        for i in range(len(height)-2,-1,-1):    
            rightmax[i]=max(height[i+1],rightmax[i+1])
            

        print(leftmax)
        print(rightmax)

        ans=0
        for i in range(len(height)):
            water=min(leftmax[i],rightmax[i])
            if water>height[i]:
                ans += water-height[i]
        

        return ans
        