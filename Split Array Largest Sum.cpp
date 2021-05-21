class Solution {
public:
    bool valid(vector<int>& nums, int k,int mx){
        int need=1,s=0;
        for(auto n:nums){
            if(s+n>mx){
                need++;
                s=0;
            }
            s+=n;
        }
        return need<=k;
    }  
    
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<high){
            int mid = low+(high-low)/2;
            if(valid(nums,k,mid))
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
