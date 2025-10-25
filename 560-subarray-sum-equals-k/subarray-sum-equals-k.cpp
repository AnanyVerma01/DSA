class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(), sum=0, res=0;
        map<int,int> map;
        map[0]=1;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            res+=map[sum-k];
            map[sum]++;
      
        }

        return res;
    }
};