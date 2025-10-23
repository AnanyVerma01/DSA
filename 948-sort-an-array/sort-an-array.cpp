class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }

    void mergeSort(vector<int>& nums, int start, int end)
    {
        if(start==end) return;
        int mid = start + (end-start)/2;
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }

    void merge(vector<int>& nums, int start, int mid, int end)
    {
        vector<int> temp(end-start+1);
        int left = start, right = mid+1, idx = 0;

        while(left<=mid && right<=end){
            if(nums[left]<nums[right]){
                temp[idx]=nums[left];
                left++; idx++;
            }
            else{
                temp[idx]=nums[right];
                right++; idx++;
            }
        }

        while(left<=mid){
            temp[idx]=nums[left];
            left++; idx++;
        }

        while(right<=end){
            temp[idx]=nums[right];
            right++; idx++;
        }

        idx=0;

        while(start<=end){
            nums[start++]=temp[idx++];
        }
    }
};