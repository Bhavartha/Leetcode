class Solution {
public:
    int rob(vector<int>& nums) {
        nums.insert(nums.begin(),0);
        nums.push_back(0);
        for(int i=2;i<nums.size();i++)
            nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
        return *nums.rbegin();
    }
};
