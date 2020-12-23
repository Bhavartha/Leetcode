class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        f,s = 0,0
        for n in nums:
            if n>=f:
                f,s = n,f
            elif n>=s:
                s=n
        return (f-1)*(s-1)
