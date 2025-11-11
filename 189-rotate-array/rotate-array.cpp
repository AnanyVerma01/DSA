class Solution {
public:

    void rev(vector<int>& arr, int i, int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        if(n<=1) return;

        k=k%n;

        rev(nums,0,n-1);
        rev(nums,0,k-1);
        rev(nums,k,n-1);
    }
};