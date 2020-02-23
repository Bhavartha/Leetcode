# The guess API is already defined for you.
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        l,h=1,n
        m=(l+h)//2
        while l<=h:
            _=guess(m)
            if _==0:
                return m
            elif _==-1:
                h=m-1
            else:
                l=m+1
            m=(l+h)//2
