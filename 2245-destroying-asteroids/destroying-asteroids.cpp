class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        stack<int> st;
        long long Mass = mass;
        for(int i=0;i<asteroids.size();i++){
            st.push(asteroids[i]);
            while(!st.empty() && Mass>=st.top()){
                Mass += st.top();
                st.pop();
            }
        } 

        return st.size()==0;
    }
};