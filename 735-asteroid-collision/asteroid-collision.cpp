class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            if (a > 0) {
                st.push(a);
            } else {
                while (!st.empty() && st.top() > 0 && st.top() < -a) {
                    st.pop();
                }

                if (st.empty() || st.top() < 0) {
                    st.push(a);
                }

                if (!st.empty() && st.top() == -a) {
                    st.pop();
                }
            }
        }

        int n = st.size();
        vector<int> res(n,0);
        n--;

        while(!st.empty()){
            res[n]=(st.top());
            st.pop();
            n--;
        }

        return res;
    }
};