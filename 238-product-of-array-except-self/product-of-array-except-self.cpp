class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);

        int prev = 1;
        for(int i=0;i<n;i++){
           res[i]=prev;
           prev*=nums[i];
        }

        int post = 1;
        for(int i=n-1;i>=0;i--){
           res[i]*=post;
           post*=nums[i];
        }

        return res;
    }
};