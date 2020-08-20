class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()<2) return false;        
        int x1=c[0][0];
        int x2=c[1][0];
        int y1=c[0][1];
        int y2=c[1][1];        
        int lhs,rhs;
        for(int i=2;i<c.size();i++){
            lhs=(x2-x1)*(c[i][1]-y1);
            rhs=(y2-y1)*(c[i][0]-x1);
            if(lhs!=rhs)
                return false;
        }
        return true;
    }
};
