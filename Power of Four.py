from math import log

class Solution:
    def isPowerOfFour(self, num: int) -> bool:
        if num<1:
            return False
        x = log(num,4)
        return x==int(x)
