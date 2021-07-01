class Solution {
public:
    int makeConnected(int no_nodes, vector<vector<int>>& conn) {
        if(conn.size()<(no_nodes-1)) return -1;
        int ans = -1;
        vector<int> ind(no_nodes,0);
        vector<vector<int>> graph(no_nodes);
        for(auto c:conn){
            int u=c[0],v=c[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> vis(no_nodes,false);
        for(int i=0;i<no_nodes;i++){
            // Skip if already visited before
            if(vis[i]) continue;
            // Perform BFS
            ans++;
            queue<int> q;
            q.push(i);
            vis[i] = true;
            while(q.size()){
                int t = q.front();
                q.pop();
                for(auto e: graph[t]){
                    if(!vis[e]){
                        vis[e] = true;
                        q.push(e);
                    }
                }
            }
        }
        return ans;
    }
};
