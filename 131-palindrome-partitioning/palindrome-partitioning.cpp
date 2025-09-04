class Solution {
public:
    bool palindrome(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++; j--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<string> curr;
        vector<vector<string>> res;
        recur(s,0,n,curr,res);
        return res;
    }
    
    void recur(string s, int ind, int n, vector<string>& curr, vector<vector<string>>& res){
        if(ind>=n){
            res.push_back(curr);
            return;
        }
        for(int i=ind;i<n;i++){
            if(palindrome(s,ind,i)){
                curr.push_back(s.substr(ind,i-ind+1));
                recur(s,i+1,n,curr,res);
                curr.pop_back();
            }
        }
    }
};