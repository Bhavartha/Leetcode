from collections import Counter

class Solution:
    def frequencySort(self, s: str) -> str:
        ans=""
        c = Counter(s).most_common();
        for _ in c:
            ans+=_[0]*_[1]
        return ans
