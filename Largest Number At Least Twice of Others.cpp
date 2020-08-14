class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        if(nums.size()==1) return 0;
        
        int m1=0;
        for(int i=1;i<nums.size();i++)
            if(nums[m1]<nums[i])
                m1=i;
        int m2=-1;
        for(int i=0;i<nums.size();i++){
            if(i==m1) continue;
            if(m2<0) m2=i;
            if(nums[m2]<nums[i]) m2=i;
        }
        return nums[m1]>=nums[m2]*2?m1:-1;
        
    }
};
