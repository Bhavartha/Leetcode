class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0];
        int cmn=nums[0];
        int cmx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0) swap(cmn,cmx);
            cmn = min(nums[i],cmn*nums[i]);
            cmx = max(nums[i],cmx*nums[i]);
            mx = max(mx,cmx);
        }
        return mx;
    }
};
