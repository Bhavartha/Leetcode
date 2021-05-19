class Solution {
public:
    bool checkOnesSegment(string s) {
        int o=0;
        for(int i=1;i<s.size();i++)
            if(s[i]!=s[i-1])
                o++;
        return o<2;
    }
};
