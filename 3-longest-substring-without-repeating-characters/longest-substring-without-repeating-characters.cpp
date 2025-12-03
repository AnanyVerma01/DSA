class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),res=0;
        int l=0,r=0;

        map<char,int> map;

        while(r<n){
            map[s[r]]++;
            while(map[s[r]]>1){
                map[s[l]]--;
                l++;
            }
            res=max(r-l+1,res);
            r++;
        }

        return res;
    }
};