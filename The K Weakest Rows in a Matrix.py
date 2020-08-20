class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        d = dict()
        for i in range(len(mat)):
            d[i] = mat[i].count(1)
        return sorted(d.keys(),key=lambda x:d[x])[:k]
