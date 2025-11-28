class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), size=INT_MIN, start=0;

        for(int i=0;i<n;i++){
            //odd length
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>size){
                    size=r-l+1;
                    start=l;
                }
                l--; r++;
            }

            //even length
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>size){
                    size=r-l+1;
                    start=l;
                }
                l--; r++;
            }
        }

        return s.substr(start,size);
    }
};