class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length()==0) return 0;
        string rs=s;
        reverse(rs.begin(),rs.end());
        return s==rs?1:2;
    }
};
