class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int p=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>=g[p]){
                ans++;
                p++;
            }
            if(p==g.size()) break;
        }
        return ans;
    }
};
