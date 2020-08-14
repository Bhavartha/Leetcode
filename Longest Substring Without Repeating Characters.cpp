class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> na;
        int ans=0;
        int l=0,r=0;
        while(l<s.length() && r<s.length()){
            if(na.find(s[r])==na.end()){
                na.insert(s[r++]);
                ans=max(ans,r-l);
            }
            else
                na.erase(s[l++]);
        }
        return ans;
    }
};
