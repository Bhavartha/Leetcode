# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        l=1
        h=n
        m=(l+h)//2
        while l<=h:
            if isBadVersion(m):
                h=m-1
            else:
                l=m+1
            m=(l+h)//2
        return m+1
