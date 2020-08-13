class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> c;
        
        backtrack(ans,n,k,c,0);
        return ans;
    }
    
    void backtrack(vector<vector<int>> &ans,int n,int k,vector<int>c,int l){
        if(k==0){
            ans.push_back(c);
            return;
        }
        for(int i=l+1;i<=n;i++){
            c.push_back(i);
            backtrack(ans,n,k-1,c,i);
            c.pop_back();
        }
    }
};
