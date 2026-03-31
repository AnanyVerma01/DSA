class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        map<char,int> map;

        for(int i=0;i<t.size();i++){
            map[t[i]]++;
        }

        int uniques = map.size();
        int winStart = 0;
        int winEnd = 0;
        int startIndex = -1;
        int len = INT_MAX;

        while(winEnd<n)
        {
            char ch = s[winEnd];

            //Expansion
            if(map.find(ch) != map.end()){
                map[ch]--;
                if(map[ch]==0){
                    uniques--;
                }
            }

            //Shrinking
            while(uniques==0)
            {
                //Length
                if(len>winEnd-winStart+1){
                    len=winEnd-winStart+1;
                    startIndex = winStart;
                }

                ch = s[winStart];

                if(map.find(ch) != map.end()){
                    map[ch]++;
                    if(map[ch]>0){
                        uniques++;
                    }
                }

                winStart++;
            }


            winEnd++;
        }

        return startIndex==-1?"":s.substr(startIndex,len);
    }
};