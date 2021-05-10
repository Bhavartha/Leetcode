class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto n:nums)
            m[n]++;
        for(auto n:m)
            if(n.second==1)
                return n.first;
        return 0;
    }
};
