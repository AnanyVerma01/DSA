class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,n=word1.size(),m=word2.size();

        string finalS = "";
        while(i<n && j<m){
            finalS+=word1[i];
            i++;
            finalS+=word2[j];
            j++;
        }

        while(i<n){
            finalS+=word1[i];
            i++;
        }

        while(j<m){
            finalS+=word2[j];
            j++;
        }

        return finalS;
    }
};