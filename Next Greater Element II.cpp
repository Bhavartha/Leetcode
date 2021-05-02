class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
            nums.push_back(nums[i]);
        stack<int> ss;
        for(int i=0;i<nums.size();++i){
            while(!ss.empty() && nums[ss.top()]<nums[i]){
                nums[ss.top()]=nums[i];
                ss.pop();
            }
            ss.push(i);
        }
        while(!ss.empty()){
            nums[ss.top()]= -1;
            ss.pop();
        }
        for(int i=0;i<n;i++)
            nums.pop_back();
        return nums;
    }
};
