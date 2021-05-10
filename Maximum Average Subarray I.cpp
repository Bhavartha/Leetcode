class Solution {
public:
    double findMaxAverage(vector<int>& nums, double k) {
        double ans= -999999999;
        nums.insert(nums.begin(),0);
        for(int i=1;i<nums.size();i++)
            nums[i]+=nums[i-1];
        for(int i=k;i<nums.size();i++){
            ans = max(ans,(nums[i] - nums[(int)(i-k)])/k);
        }
        return ans;
    }
};
