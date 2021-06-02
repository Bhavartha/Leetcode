class Solution {
public:
    int maximumScore(int a, int b, int c) {
        multiset<int,greater<int>> m = {a,b,c};
        int ans=0;
        while(*(++m.begin())>0){
            int f = *m.begin();
            m.erase(m.begin());
            int s = *m.begin();
            m.erase(m.begin());
            m.insert(f-1);
            m.insert(s-1);
            ans++;
        }
        return ans;
    }
};
