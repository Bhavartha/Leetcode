class Solution:
    def rotateString(self, A: str, B: str) -> bool:
        return B in A*2 and len(A)==len(B)
