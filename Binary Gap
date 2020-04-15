class Solution:
    def binaryGap(self, N: int) -> int:
        ans=0
        c=0
        exist=False
        while N:
            N,_ = divmod(N,2)
            if _==0:
                c+=1
            elif _==1 and not exist:
                exist=True
                c=0
            else:
                ans=max(ans,c+1)
                c=0
        return ans
            
            
