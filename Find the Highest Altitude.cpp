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

// OR

class Solution {
public:
    int largestAltitude(vector<int>& g) {
        partial_sum(g.begin(),g.end(),g.begin());
        return max(0,*max_element(g.begin(),g.end()));
    }
};
