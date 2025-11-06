class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s = floor(nums.size()/3);
        unordered_map<int,int> map;
        set<int> v;

        for(int n : nums){
            map[n]=map[n]+1;
            if(map[n]>s){
                v.insert(n);
            }
        }
        
        // for(auto n : map){
        //     if(n.second > (s/3)){
        //         v.push_back(n.first);
        //     }
        // }
        vector<int> res(v.begin(),v.end());
        return res;
    }
};