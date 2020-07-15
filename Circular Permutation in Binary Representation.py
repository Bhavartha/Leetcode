class Solution:    
    def circularPermutation(self, num: int, start: int) -> List[int]:        
        gray = [n^n>>1 for n in range(2**num)]
        start = gray.index(start)
        return gray[start:]+gray[:start]
