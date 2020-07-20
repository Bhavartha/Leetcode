class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> ls,rs;
        int sz=nums.size();
        if(sz==0)
            return -1;
        ls.push_back(nums[0]);
        rs.push_back(nums.back());
        for(int i=1;i<sz;i++)
            ls.push_back(nums[i]+ls.back());
        for(int i=sz-2;i>=0;i--)
            rs.push_back(nums[i]+rs.back());
        for(int i=0;i<sz;i++){
            if(ls[i]==rs[sz-1-i])
                return i;
        }
        return -1;
    }
};
