class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> row(n,0);
        vector<int> col(m,0);
        int ans=0;
        int temp=0;
        for(auto i:indices){
            row[i[0]]++;
            col[i[1]]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp=row[i]+col[j];
                if(temp&1) ans++;
            }
        }
        return ans;
    }
};
