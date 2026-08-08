class Solution(object):
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False
        freqs = {}
        freqt = {}
        for i in range(len(s)):
            if s[i] in freqs and freqs[s[i]] != t[i]:
                return False
            if t[i] in freqt and freqt[t[i]]!=s[i]:
                return False
            freqs[s[i]]=t[i]
            freqt[t[i]]=s[i]
        
        return True
        