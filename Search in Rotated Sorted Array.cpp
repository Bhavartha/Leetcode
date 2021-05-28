class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]<nums[high])
                high = mid;
            else
                low = mid+1;
        }
        int pivot = low;
        low = 0;
        high = n-1;
        while(low<=high){
            int mog = (low+high)/2;
            int mid = (pivot+mog)%n;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                high = mog - 1;
            else
                low = mog+1;
        }
        return -1;
    }
};
