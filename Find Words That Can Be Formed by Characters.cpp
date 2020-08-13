class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> avail (26,0);
        int ans=0;
        bool a;
        for(char c:chars)
            avail[c-'a']++;
        vector<int> temp;
        for(string w:words){
            temp=avail;
            a=true;
            for(char c:w){
                temp[c-'a']--;
                if(temp[c-'a']<0){
                    a=false;
                    break;
                }
            }
            if(a) ans+=w.length();
        }
        return ans;
    }
};
