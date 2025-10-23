class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> map(2,0);
        int ind = 0, n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==1) map[0]++;
            else if(nums[i]==2) map[1]++;
            else ind++;
        }

        for(int i=0;i<n;i++){
            if(i<ind) nums[i]=0;
            else if(map[0]>0){
                nums[i]=1;
                map[0]--;
            } 
            else nums[i]=2;
        }
    }
};