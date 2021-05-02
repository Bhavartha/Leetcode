class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> ss;
        vector<int> t(n,-1);
        for(int i=0;i<n*2;++i){
            while(!ss.empty() && nums[ss.top()]<nums[i%n]){
                t[ss.top()]=nums[i%n];
                ss.pop();
            }
            ss.push(i%n);
        }
        return t;
    }
};
