class Solution(object):
    def lengthOfLongestSubstring(self, s):
        table = {}
        n=len(s)
        i,j=0,0
        res=0 

        while j!=n:
            table[s[j]] = table.get(s[j],0)+1

            while table[s[j]]>1:
                table[s[i]]=table.get(s[i])-1
                i+=1

            res = max(res,j-i+1)
            j+=1

        return res
