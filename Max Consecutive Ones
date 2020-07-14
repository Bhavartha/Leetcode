class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans=0
        temp=0
        for n in nums:
            if n==1:
                temp+=1
            elif temp:
                ans=max(ans,temp)
                temp=0
        return max(ans,temp)
