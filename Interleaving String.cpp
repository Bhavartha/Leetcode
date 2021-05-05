class Solution {
public:
    bool s(string &s1, string &s2, string &s3, int i, int j, int x)
    {
        if(s1.size()+s2.size() != s3.size()) return false;
        if(i == s1.size() && j == s2.size() && x == s3.size())
            return true;
        if (i < s1.size() && j < s2.size() && s1[i] == s2[j] && s1[i]==s3[x])
            return s(s1, s2, s3, i + 1, j, x + 1) || s(s1, s2, s3, i, j + 1, x + 1);
        if (i < s1.size() && s1[i] == s3[x])
            return s(s1, s2, s3, i + 1, j, x + 1);
        if (j < s2.size() && s2[j] == s3[x])
            return s(s1, s2, s3, i, j + 1, x + 1);
        return false;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        return s(s1,s2,s3,0,0,0);
    }
};
