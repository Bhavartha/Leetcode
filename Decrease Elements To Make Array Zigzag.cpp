#define MAX 99999
class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        vector<int> res = {0,0};
        int n=nums.size();
        int left,right,tmp;
        for(int i=0;i<n;i++){
            left = i>0?nums[i-1]:MAX;
            right = i<n-1?nums[i+1]:MAX;
            tmp = min(left,right);
            res[i&1]+=max(0,nums[i]-tmp+1);
        }
        return min(res[0],res[1]);
    }
};
