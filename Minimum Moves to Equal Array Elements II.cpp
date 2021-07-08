class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int s=0,e = nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        while(s<=e)
            ans+= nums[e--] - nums[s++];
        return ans;
    }
};
