from collections import Counter

class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        
        c = dict(Counter(arr).most_common())
        x = list(c.values())
        for i in range(k):
            x[-1]-=1
            if x[-1]==0:
                x.pop()
        return len(x)
