class Solution {
public:
    int robbery(vector<int>& arr){
        int rob1=arr[0];
        int rob2=max(arr[0],arr[1]);
        for(int i=2;i<arr.size();i++){
            int newRob = max(rob2,rob1+arr[i]);
            rob1=rob2;
            rob2=newRob;
        }
        return rob2;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        vector<int> arr1(n-1);
        for(int i=0;i<n-1;i++) arr1[i]=nums[i];
        vector<int> arr2(n-1);
        for(int i=0;i<n-1;i++) arr2[i]=nums[i+1];

        int res = max(robbery(arr1),robbery(arr2));

        return res;
    }
};