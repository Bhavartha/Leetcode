class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0,n=nums.size()-1;
        for(int i=0;i<=n;i++){
            if(i>m) return false;
            m=max(m,i+nums[i]);
        }
        return (m>=n);
    }
};
