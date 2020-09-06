from collections import Counter

class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        if k<0: return 0
        if k==0:
            c = dict(Counter(nums))
            return len([_ for _ in c.keys() if c[_]>1])
        s=set()
        ans=0
        for n in nums:
            if n in s: continue
            if n+k in s:
                ans+=1
            if n-k in s:
                ans+=1
            s.add(n)
        return ans
