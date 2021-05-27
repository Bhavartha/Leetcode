class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && k>0;i++){
            if(nums[i]<0)
            {
                nums[i]=-nums[i];
                k--;
            }
        }
        k%=2;
        int s=accumulate(nums.begin(),nums.end(),0);
        if(k==0) return s;
        return s-(*min_element(nums.begin(),nums.end())*2);
    }
};
