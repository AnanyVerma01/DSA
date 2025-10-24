class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s = nums.size();
        unordered_map<int,int> map;
        vector<int> v;

        for(int n : nums){
            map[n]=1+map[n];
        }
        
        for(int n : nums){
            if(map[n]>ceil(s/3)){
                auto it = find(v.begin(), v.end(), n);
                if(it == v.end()){
                    v.push_back(n);
                }

            }
        }

        return v;
    }
};