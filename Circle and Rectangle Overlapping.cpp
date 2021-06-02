class Solution {
public:
    int dist(int x1,int y1,int x2,int y2){
        return ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2));
    }
    
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        int mn = INT_MAX;
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                mn = min(mn,dist(xc,yc,i,j));
                mn = min(mn,dist(xc,yc,i,j));
            }
        }
        cout<<mn;
        return mn<=(r*r);
    }
};
