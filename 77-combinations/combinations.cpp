class Solution {
public:
    void help(vector<vector<int>>& res, vector<int>& temp, int idx, int n, int k){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }

        for(int i=idx;i<=n;i++){
            temp.push_back(i);
            help(res,temp,i+1,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;

        help(res,temp,1,n,k);
        return res;
    }
};