class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix.back().size();
        int r=rows-1;
        int c=0;
        while(c<cols && r>=0){
            int e = matrix[r][c];
            if(e==target) return true;
            else if(e<target) c++;
            else r--;
        }
        return false;
    }
};
