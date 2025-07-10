class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==0 || numRows >= s.size()) return s;
        
        vector<string> v(numRows,"");

        int i=0;
        while(i<s.size()){
            //UPtoDOWN
            for(int j=0;j<numRows && i<s.size();j++){
                v[j]+=s[i++];
            }
            //DOWNtoUP
            for(int j=(numRows-2);j>0 && i<s.size();j--){
                v[j]+=s[i++];
            }
        }

        string res;
        for(string s:v){
            res+=s;
        }

        return res;
    }
};