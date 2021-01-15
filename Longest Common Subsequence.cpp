class Solution {
public:
    int longestCommonSubsequence(string &x, string &y) {
        
        vector<vector<int>> m(x.size()+1 , vector<int>(y.size()+1));
        
        for(int i=1;i<=x.size();i++){
            for(int j=1;j<=y.size();j++){
                if(x[i-1]==y[j-1])
                    m[i][j] = m[i-1][j-1]+1;
                else
                    m[i][j] = max(m[i-1][j],m[i][j-1]);
            }
        }
        
        return m[x.size()][y.size()];
    }
};
