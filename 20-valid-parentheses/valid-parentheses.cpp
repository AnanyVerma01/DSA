class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> map;
        map.insert({'{','}'});
        map.insert({'(',')'});
        map.insert({'[',']'});

        // cout<<map['(']<<endl;
        // cout<<map['[']<<endl;
        // cout<<map['}']<<endl;
        // cout<<map['}']<<endl;
        // cout<<map[']']<<endl;
        // cout<<map[')']<<endl;
    
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]==st.top()) st.pop();
            //else if(map.find(s[i]) != map.end()) st.push(map[s[i]]);
            else st.push(map[s[i]]);
            cout<<s[i]<<" "<<map[s[i]]<<endl;
        }

        return st.empty();
    }
};