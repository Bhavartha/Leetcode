class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        int start=-1,end=-1;
        
        //Loop left->right to find end which is max index element with greater element on its left
        for(int i=0;i<nums.size();i++){
            mx = max(mx,nums[i]); // max number
            if(nums[i]<mx) end=i; //index of element that has greater element on left
        }
        
        //Similarly find start
        for(int i=nums.size()-1;i>=0;i--){
            mn = min(mn,nums[i]); // min number
            if(nums[i]>mn) start=i; //index of element that has smaller element on right
        }
        
        if(start==-1 && end==-1) // No start and end elements ie array is already sorted
            return 0;
        
        return end-start+1;        
    }
};
