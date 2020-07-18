class Solution:
    def countLargestGroup(self, n: int) -> int:        
        def sum_dig(n):
            ans=0
            while n>0:
                ans=ans+n%10
                n=n//10
            return ans
        
        ans=dict()
        for i in range(1,n+1):
            s=sum_dig(i)
            if s not in ans:
                ans[s]=1
            else:
                ans[s]+=1
                
        m = max(ans.values())
        
        return list(ans.values()).count(m)
