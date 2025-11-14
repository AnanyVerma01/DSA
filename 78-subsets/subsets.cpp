class Solution {
public:
    void help(vector<int>& nums, vector<vector<int>>& ans, vector<int> temp,int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        help(nums,ans,temp,idx+1);
        temp.pop_back();
        help(nums,ans,temp,idx+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(nums,ans,temp,0);
        return ans;
    }
};