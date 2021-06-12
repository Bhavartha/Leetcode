class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0,m=0;
        for(auto g:gain){
            s+=g;
            m = max(s,m);
        }
        return m;
    }
};
