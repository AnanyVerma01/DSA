class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> set(nums.begin(),nums.end());

        int i = 0; 
        for(int n:set){
            nums[i]=n;
            i++;
        }    

        return set.size();
    }
};