from collections import Counter
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        ans=-1
        for k,v in Counter(arr).items():
            if k==v:
                ans=max(ans,k)
        return ans
