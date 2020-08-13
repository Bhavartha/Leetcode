class Solution {
public:
    string toLowerCase(string str) {
        string ans;
        for(char s:str){
            if(s<=90 && s>=65)
                s+=32;
            ans+=s;
        }
        return ans;
    }
};
