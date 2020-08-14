from collections import Counter

class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        A=A.split()
        B=B.split()
        d = dict(Counter(A+B))
        ans=[]
        for x in d:
            if d[x]==1:
                ans.append(x)
        return ans       
