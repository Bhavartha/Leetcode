class Solution:
    def arrangeCoins(self, n: int) -> int:
        l=0
        h=n
        
        while l<=h:
            mid=(l+h)//2
            _ = mid*(mid+1)//2
            if _<n:
                l=mid+1
            elif _==n:
                return mid
            else:
                h=mid-1
        return l-1
