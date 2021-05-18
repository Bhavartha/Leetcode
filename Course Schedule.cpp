class Solution {
public:

    bool canFinish(int n, vector<vector<int>>& pr) {
        vector<vector<int>> g(n);
        for(auto p:pr)
            g[p[0]].push_back(p[1]);
        
        for(int i=0;i<n;i++){
            vector<bool> vis(n,false);
            vis[i]=true;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int f = q.front();
                q.pop();
                for(int a: g[f]){
                    if(a==i) return false;
                    if(!vis[a]) {
                        vis[a]=true;
                        q.push(a);
                    }
                }
            }
        }
        return true;
    }
};
