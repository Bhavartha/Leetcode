class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> c(26);
        for(auto e:s1)
            c[e-'a']++;
        vector<int> t(26);
        int n = s1.size();
        for(int i=0;i<n;i++)
            t[s2[i]-'a']++;
        if(c==t) return true;
        for(int i=n;i<s2.size();i++){
            t[s2[i-n]-'a']--;
            t[s2[i]-'a']++;   
            if(c==t) return true;
        }
        return false;
    }
};
