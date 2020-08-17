class Solution {
public:
    bool pal(string s,int l, int r){
        while(l<=r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<=r){
            if(s[l]!=s[r]) return pal(s,l+1,r) || pal(s,l,r-1);
            l++;
            r--;
        }
        return true;
    }
};
