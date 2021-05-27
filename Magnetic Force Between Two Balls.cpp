class Solution {
public:
    bool isValid(vector<int>& pos, int m, int d){
        int r=-d;
        for(int p:pos){
            if(p>=(r+d)){
                r=p;
                m--;
                if(m==0) return true;
            }
        }
        return false;
    }
    
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int low=1;
        int high=pos.back()-pos.front();
        while(low<high){
            int mid = high-(high-low)/2;
            if(isValid(pos,m,mid))
                low = mid;
            else high = mid-1;
        }
        return low;
    }
};
