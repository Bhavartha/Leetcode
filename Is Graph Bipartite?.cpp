#define F first
#define S second

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++)
            vp.push_back({i,-1});
        for(int i=0;i<n;i++){
            queue<pair<int,int>> q;
            if(vp[i].S >= 0) continue;
            q.push({i,1});
            vp[i].S=1;
            while(!q.empty()){
                auto e = q.front();
                q.pop();
                for(auto x: graph[e.F]){
                    if(vp[x].S>=0 && vp[x].S==e.S)
                        return false;
                    if(vp[x].S == -1)
                        q.push({x,e.S^1});
                    vp[x].S = e.S^1;
                }
            }
        }
        return true;
    }
};
