class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alphabet(26,0);

        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            alphabet[s[i]-'a']++;
            alphabet[t[i]-'a']--;
        }

        for(int i=0;i<alphabet.size();i++){
            if(alphabet[i]!=0 ) return false;
        }

        return true;
    }
};