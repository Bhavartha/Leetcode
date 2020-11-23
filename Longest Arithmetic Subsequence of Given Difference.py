class Solution:
    def longestSubsequence(self, arr: List[int], difference: int) -> int:
        d= dict()
        for a in arr:
            d[a] = d.get(a-difference,0)+1
        return max(d.values())
    
