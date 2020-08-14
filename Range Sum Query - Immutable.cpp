class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& ip) {
        nums=ip;
        for(int i=1;i<nums.size();i++)
            nums[i]+=nums[i-1];
    }
    
    int sumRange(int i, int j) {
        return i==0?nums[j]:nums[j]-nums[--i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
