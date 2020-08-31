class Solution {
public:
    
    int get_ans(vector<int>& nums) {
        nums.insert(nums.begin(),0);
        nums.push_back(0);
        for(int i=2;i<nums.size();i++)
            nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
        return *nums.rbegin();
    }
    
    int deleteAndEarn(vector<int>& nums) {
        vector<int> t(100001,0);
        for(auto n:nums) t[n]+=n;
        return get_ans(t);
    }
};
