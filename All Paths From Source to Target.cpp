class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int> &path , int target , vector<vector<int>> &graph){
        int l = path.back();
        if(l==target){
            ans.push_back(path);
            return;
        }
        for(auto e:graph[l]){
            path.push_back(e);
            dfs(path,target,graph);
            path.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target = graph.size()-1;
        vector<int> path(1);
        dfs(path,target,graph);
        return ans;
    }
};
