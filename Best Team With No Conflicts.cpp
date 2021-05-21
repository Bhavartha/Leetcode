#define S second
#define F first

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=ages.size();
        vector<pair<int,int>> vp;
        
        for(int i=0;i<n;i++)
            vp.push_back({ages[i],scores[i]});
        sort(vp.begin(),vp.end());
        
        vector<pair<int,int>> dp = vp;
        
        for(int i=0;i<n;i++){
            int v = vp[i].S;
            for(int j=0;j<i;j++){
                if(vp[j].S<=vp[i].S)
                v = max(v,dp[j].S+vp[i].S);
            }
            dp[i].S = v;
        }
        
        int mx = 0;
        for(auto i:dp)
            mx = max(mx,i.S);
        return mx;
        
    }
};
