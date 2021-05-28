class Solution {
public:
    bool check(vector<int>& nums) {
        int t=0;
        for(int i=1;i<nums.size();i++)
            if(nums[i]<nums[i-1])
                t++;
        if(nums.back()>nums.front()) t++;
        return t<=1;
    }
};
