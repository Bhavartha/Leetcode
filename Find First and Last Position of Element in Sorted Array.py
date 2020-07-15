class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        ans=[-1,-1]
        if not nums:
            return ans
        
        #First position
        low=0
        high=len(nums)-1
        while low<=high:
            mid=(low+high)//2
            if nums[mid]>target:
                high=mid-1
            elif nums[mid]==target:
                ans[0]=mid
                high=mid-1
            else:
                low=mid+1
        
        #Last position
        low=0
        high=len(nums)-1
        while low<=high:
            mid=(low+high)//2
            if nums[mid]>target:
                high=mid-1
            elif nums[mid]==target:
                ans[1]=mid
                low=mid+1
            else:
                low=mid+1
        return ans
