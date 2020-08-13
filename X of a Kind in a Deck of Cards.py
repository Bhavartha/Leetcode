from collections import Counter
from math import gcd
class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        if len(deck)<2:
            return False
        val = list(Counter(deck).values())
        for i in range(len(val)-1):
            if gcd(val[i],val[i+1])<2:
                return False
        return True
        
