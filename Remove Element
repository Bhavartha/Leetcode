class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        index=0
        l=len(nums)
        for i in range(l):
            if nums[i]!=val:
                nums[i],nums[index]=nums[index],nums[i]
                index+=1
        return index
