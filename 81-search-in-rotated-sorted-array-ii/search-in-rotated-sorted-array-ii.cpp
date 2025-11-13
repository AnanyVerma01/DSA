class Solution {
public:
    bool find(vector<int> arr, int k, int l, int r){
        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid]==k) return true;
            else if(arr[mid]>k) r=mid-1;
            else l=mid+1;
        }
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                idx = i;
                break;
            }
        }

        return find(nums,target,0,idx-1) || find(nums,target,idx,nums.size()-1);
    }
};