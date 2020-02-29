class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        l=0
        r=num
        mid=(l+r)//2
        while l<=r:
            if mid*mid == num:
                return True
            elif mid*mid>num:
                r=mid-1
            else:
                l=mid+1
            mid=(l+r)//2
        return False
