class Solution {
public:
    int numWaterBottles(int eB, int nE) {
        int ans=eB;
        while(eB>=nE){
            eB-=nE;
            ans++;
            eB++;
        }
        return ans;
    }
};
