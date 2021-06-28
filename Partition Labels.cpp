#define F first
#define S second

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> ans;
        vector<pair<int,int>> vp(26,{-1,-1});
        for(int i=0;i<n;i++){
            int t = s[i]-'a';
            if(vp[t].F<0)
                vp[t].F = i;
            vp[t].S = i;
        }
        int i=0;
        while(i<n){
            char c = s[i];
            int m = vp[c-'a'].S;
            int j = i+1;
            while(j<=m)
                m = max(m,vp[s[j++]-'a'].S);        
            ans.push_back(j-i);
            i = j;
        }
        return ans;
    }
};
