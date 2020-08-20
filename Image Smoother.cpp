class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>>Matrix=M;
        int r = M.size();
        int c = M[0].size();
        int sum,count;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum=0;
                count=0;
                for(int k=i-1;k<i+2;k++){
                    for(int l=j-1;l<j+2;l++){
                        if(k>=0 && l>=0 && k<r && l<c){
                            sum+=M[k][l];
                            count++;
                        }                        
                    }
                }
                Matrix[i][j]=sum/count;
            }
        }
        return Matrix;
    }
};
