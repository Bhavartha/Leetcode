class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=accumulate(nums.begin(), nums.end(), 0);
        vector<int>ans;
        int tmp=0;
        for(int n:nums){
            ans.push_back(n);
            tmp+=n;
            if(tmp*2>sum)
                break;
        }
        return ans;
    }
};
