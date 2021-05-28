class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int val=INT_MAX;
        int ind=-1;
        for(int i=0;i<points.size();i++){
            auto p=points[i];
            if(p[0]!=x && p[1]!=y) continue;
            int d = abs(p[0]-x)+abs(p[1]-y);
            if(d<val){
                val=d;
                ind=i;
            }
        }
        return ind;
    }
};
