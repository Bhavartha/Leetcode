class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        mn = 0
        ans=0
        for n in nums:
            ans+=n
            mn = min(mn,ans)
        return 1-mn
