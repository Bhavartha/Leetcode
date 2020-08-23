class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(not n) return 0;
        int mx;
        vector<int> dp(n,0);
        dp[0]++;
        for(int i=1;i<n;i++){
            mx=0;
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j])
                    mx = max(mx,dp[j]);
            dp[i] = ++mx;
        }
        return *max_element(dp.begin(),dp.end());
    }
};
