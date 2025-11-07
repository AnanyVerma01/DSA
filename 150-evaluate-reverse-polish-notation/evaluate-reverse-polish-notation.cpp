class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-"){
                int one = st.top();
                st.pop();
                int two = st.top();
                st.pop();

                if(tokens[i]=="+"){
                    int temp = one+two;
                    cout<<temp<<endl;
                    st.push(temp);
                }
                if(tokens[i]=="*"){
                    int temp = one*two;
                    cout<<temp<<endl;
                    st.push(temp);
                }
                if(tokens[i]=="/"){
                    int temp = two/one;
                    cout<<temp<<endl;
                    st.push(temp);
                }
                if(tokens[i]=="-"){
                    int temp = two-one;
                    cout<<temp<<endl;
                    st.push(temp);
                }

            }
            else st.push(stoi(tokens[i]));
        }

        return st.top();
    }
};