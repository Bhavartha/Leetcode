class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        
        int rows = A.size();
        int cols = A[0].size();
        vector<vector<int>> ans(cols,vector<int>(rows,0));
        
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                ans[j][i]=A[i][j];
        return ans;
    }
};
