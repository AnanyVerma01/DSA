class Solution {
public:
    bool isValid(string s)
    {

        stack<char> st;
        map<char,char> map;
        map.insert({'{','}'});
        map.insert({'(',')'});
        map.insert({'[',']'});
    
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && s[i]==st.top()) st.pop();
            
            else st.push(map[s[i]]);
        }

        return st.empty();

    }
};