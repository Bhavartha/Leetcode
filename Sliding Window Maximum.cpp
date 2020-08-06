class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> mx;
        for(int i=0;i<k;i++)
            mx.insert(nums[i]);
        ans.push_back(*(mx.rbegin()));
        for(int i=0;i<nums.size()-k;i++){
            mx.erase(mx.find(nums[i]));
            mx.insert(nums[i+k]);
            ans.push_back(*(mx.rbegin()));
        }
        return ans;            
    }
};
