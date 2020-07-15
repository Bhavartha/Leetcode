class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=3:
            return n
        a,b=1,1
        for i in range(n):
            a,b=b,a+b
        return a
