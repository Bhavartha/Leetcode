class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:     
        
        d={0:-1}
        rem=0
        for i,n in enumerate(nums):
            if k==0:
                rem+=n
            else:
                rem=(rem+n)%k            
            if rem not in d:
                d[rem]=i
            elif i-d[rem]>1:
                return True
        return False
        
