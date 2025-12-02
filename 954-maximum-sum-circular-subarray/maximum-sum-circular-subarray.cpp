class Solution {
public:
    int Kmax(vector<int>& nums){
        int maxSum=nums[0],sum=nums[0];

        for(int i=1;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            maxSum = max(maxSum,sum);
        }

        return maxSum;
    }

    int Kmin(vector<int>& nums){
        int minSum=nums[0],sum=nums[0];

        for(int i=1;i<nums.size();i++){
            sum=min(sum+nums[i],nums[i]);
            minSum = min(minSum,sum);
        }

        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {

        int SUM = accumulate(nums.begin(),nums.end(),0);
        int minSum = Kmin(nums);
        int maxSum = Kmax(nums);
        int circularSum = SUM - minSum;

        if(maxSum>0){
            return max(circularSum,maxSum);
        }

        return maxSum;
    }
};