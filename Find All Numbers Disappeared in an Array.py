class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans=[]
        for n in nums:
            n=abs(n)
            if nums[n-1] > 0 :
                nums[n-1]= -nums[n-1]
        for n in range(len(nums)):
            if nums[n]>0:
                ans.append(n+1)
        return ans
