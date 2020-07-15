class Solution:
    def bitwiseComplement(self, N: int) -> int:
        N = bin(N)[2:].replace('0','#').replace('1','0').replace('#','1')
        return int(N,2)
