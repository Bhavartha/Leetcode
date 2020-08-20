from collections import Counter

class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        ans = Counter(A[0])
        for i in A:
            ans&=Counter(i)
        return ans.elements();
