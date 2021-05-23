class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        {
        // Move 0 to left
        int index=0;
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                swap(nums[i],nums[index++]);
        }
        {
        // Move 2 to right
        int index=n-1;
        for(int i=n-1;i>=0;i--)
            if(nums[i]==2)
                swap(nums[i],nums[index--]);
        }
    }
};
