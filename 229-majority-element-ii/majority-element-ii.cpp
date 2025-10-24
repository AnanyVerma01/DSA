class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s = nums.size();
        unordered_map<int,int> map;
        vector<int> v;

        for(int n : nums){
            map[n]=1+map[n];
        }
        
        for(auto n : map){
            if(n.second > (s/3)){
                v.push_back(n.first);
            }
        }

        return v;
    }
};