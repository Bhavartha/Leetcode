class Solution:
    def findMin(self, nums: List[int]) -> int:
        if nums[-1]>=nums[0]:
            return nums[0]
        low = 0
        high = len(nums)-1
        while low<high:
            mid = (low+high)//2
            if nums[mid]>nums[mid+1]:
                return nums[mid+1]
            elif nums[mid]<nums[mid-1]:
                return nums[mid]
            elif nums[mid]>nums[0]:
                low = mid+1
            else:
                high = mid-1
        return low
            
