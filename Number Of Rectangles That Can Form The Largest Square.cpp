class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int mx=0;
        int mc=0;
        for(auto r:rectangles){
            int e = min(r.front(),r.back());
            if(e>mx){
                mx=e;
                mc=1;
            }
            else if(e==mx)
                mc++;
        }
        return mc;
    }
};
