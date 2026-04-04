class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),res=0;
        int l=0,r=0;

        map<char,int> map;

        while(r<n){
            if(map.find(s[r])!=map.end() && map[s[r]]>=l){
                l=map[s[r]]+1;
            }
            map[s[r]]=r;
            res=max(r-l+1,res);
            r++;
        }

        return res;
    }
};