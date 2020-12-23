class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        cnt = 0
        for _ in s:
            if _ == '(':
                cnt+=1
                ans=max(ans,cnt)
            elif _ == ')':
                cnt-=1
        return ans
