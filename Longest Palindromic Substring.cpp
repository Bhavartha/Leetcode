class Solution {
public:
    string longestPalindrome(string s) {
        int ans=1;
        pair<int,int> c = {0,0};
        // ODD
        for(int i=0;i<s.size();i++){
            int l=i-1;
            int r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if((r-l+1)>ans){
                        c = {l,r};
                        ans = r-l+1;
                    }
                l--;
                r++;
            }
        }
        //EVEN
        for(int i=0;i<s.size();i++){
            int l=i;
            int r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){  
                if((r-l+1)>ans){
                    c = {l,r};
                    ans = r-l+1;
                }
                l--;
                r++;
            }
        }
        string rrr="";
        for(int i=c.first;i<=c.second;i++) rrr.push_back(s[i]);
        return rrr;
    }
};
