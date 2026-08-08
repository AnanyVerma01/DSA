class Solution(object):
    def wordPattern(self, pattern, s):
        s=s.split()
        if len(pattern)!=len(s):
            return False
        pat = {}
        smap = {}
        for i in range(len(s)):
            if pattern[i] in smap and smap[pattern[i]]!=s[i]:
                return False
            if s[i] in pat and pat[s[i]]!=pattern[i]:
                return False
            smap[pattern[i]]=s[i]
            pat[s[i]]=pattern[i]
        return True