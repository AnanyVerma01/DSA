class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;

        map<int,int> map;
        for(int n:nums){
            map[n]++;
        }

        for(int i=k;i>0;i--){
            int Max = max_element(map);
            res.push_back(Max);
            map[Max]=-1;
        }

        return res;
    }

    int max_element(map<int,int>& map){
        int maxKey = -1, maxValue = INT_MIN;

        for (auto &p : map) {
            if (p.second > maxValue) {
                maxValue = p.second;
                maxKey = p.first;
            }
        }

        return maxKey;
    }
};