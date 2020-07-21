class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int ans=0;
        multiset<int> ms;
        int left=0,right=0;
        while(right!=nums.size()){
            // Add new element
            ms.insert(nums[right++]);
            // Adjust left pointer till arr is valid
            while(abs(*ms.begin()-*ms.rbegin())>limit)
                ms.erase(ms.find(nums[left++]));
                
            ans=max(ans,right-left);
        }        
        return ans;
    }
};
