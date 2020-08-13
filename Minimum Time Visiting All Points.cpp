class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int a,b;
        for(int i=1;i< points.size();i++){
            a = points[i][0]-points[i-1][0];
            b = points[i][1]-points[i-1][1];
            ans+= max(abs(a),abs(b));
        }
        return ans;
    }
};
