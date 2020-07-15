class Solution:
    def convertToTitle(self, n: int) -> str:
        ans=[]
        while n>0:
            n,_ = divmod(n-1,26)
            ans.append(chr(_+65))
        return ''.join(ans[::-1])
