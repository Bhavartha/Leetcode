class Solution {
public:
    bool canPartition(vector<int>& vi) {
        int total = accumulate(vi.begin(), vi.end(), 0);
        if (total & 1)
            return false;
        total = total / 2 + 1;
        sort(vi.begin(), vi.end());
        vector<bool> ss(total, false);
        ss[0] = true;
        for (auto v : vi)
        {
            vector<bool> sst = ss;
            for (int i = v; i < total; i++)
                sst[i] = ss[i - v] || ss[i];
            ss = sst;        
        }
        return *ss.rbegin();
    }
};
