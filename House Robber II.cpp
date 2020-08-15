class Solution {
public:
    
    int hr(vector<int> &nums){
        nums.insert(nums.begin(),0);
        nums.push_back(0);
        for(int i=2;i<nums.size();i++)
            nums[i]=max(nums[i]+nums[i-2],nums[i-1]);
        return *nums.rbegin();
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int> v1 = nums;
        vector<int> v2 = nums;
        v1.erase(v1.begin());
        v2.pop_back();
        int skipF = hr(v1);
        int skipL = hr(v2);
        return max(skipF,skipL);
    }
};
