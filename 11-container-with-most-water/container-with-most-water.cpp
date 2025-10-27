class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int maxArea=0,left=0,right=n;

        while(left<right)
        {
            int currArea = n*min(height[left],height[right]);
            maxArea = max(maxArea,currArea);

            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
            n--;
        }

        return maxArea;
    }
};