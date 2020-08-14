from collections import Counter

class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        d = dict(Counter((A+" "+B).split()))
        ans=[]
        for x in d:
            if d[x]==1:
                ans.append(x)
        return ans
