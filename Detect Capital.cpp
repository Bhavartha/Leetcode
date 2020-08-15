class Solution {
public:
    bool detectCapitalUse(string word) {
        int ucc=0;
        for(auto w:word)
            if(w>='A' && w<='Z') ucc++;
        return ucc==0 || (ucc==1 && word[0]>='A' && word[0]<='Z') || ucc==word.length();
    }
};
