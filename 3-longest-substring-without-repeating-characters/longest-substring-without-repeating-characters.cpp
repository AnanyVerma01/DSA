class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> set;
        int n=s.size(),start=0,end=0,len=0;

        while(end<n){
            while(start<end && set.find(s[end])!=set.end()){
                set.erase(s[start]);
                start++;
            }
            set.insert(s[end]);
            len=max(len,end-start+1);
            end++;
        }

        return len;
    }
};