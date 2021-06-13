class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        pair<int,int> m = {0,1};
        for(int i=1;i<=n;i++){
            v[i] = v[i-m.second]+1;
            if(v[i]>m.first){
                m.first = v[i];
                m.second = i+1;
            }
        }
        return v;
    }
};
