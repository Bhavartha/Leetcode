class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        ans=[]
        s = sorted(nums)
        for i in range(len(nums)):
            if nums[i]!=s[i]:
                ans.append(i)
        if not ans:
            return 0
        return ans[-1]-ans[0]+1
