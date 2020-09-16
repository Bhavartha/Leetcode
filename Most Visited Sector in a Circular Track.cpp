class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int>ans;
        int sz=rounds.size();
        if(rounds[0]<=rounds[sz-1])
            for(int i=rounds[0];i<=rounds[sz-1];i++)
                ans.push_back(i);
        else{
            for(int i=1;i<=rounds[sz-1];i++)
                ans.push_back(i);
            for(int i=rounds[0];i<=n;i++)
                ans.push_back(i);
        }
        return ans;
    }    
};
