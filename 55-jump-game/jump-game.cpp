class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=nums.size()-2;
        int index = nums.size()-1;

        while(i>=0){
            if(nums[i]+i>=index){
                index=i;
            }
            i--;
        }

        return index==0;
    }
};