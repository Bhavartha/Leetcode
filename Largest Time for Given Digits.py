from itertools import permutations as perm
class Solution:
    def largestTimeFromDigits(self, A: List[int]) -> str:
        ans=[0,0]
        for a,b,c,d in perm(A):
            hh = a*10 + b
            mm = c*10 + d
            # print(hh,mm)
            if hh==mm==0:
                return "00:00"
            if hh>=24 or mm>59:
                hh,mm=0,0
            ans = max(ans,[hh,mm])
        if ans==[0,0]:
            return ""
        hh,mm=ans[0],ans[1]
        h1 = hh//10
        h2 = hh%10
        m1=mm//10
        m2=mm%10
        return f"{h1}{h2}:{m1}{m2}"
            
