class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        map<string,vector<string>> map;

        for(int i=0;i<n;i++){
            string sorted = strs[i];
            sort(sorted.begin(),sorted.end());

            map[sorted].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for( auto it : map){
            res.push_back(it.second);
        }

        return res;
    }
};