class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        sindex=len(s)-1
        tindex=len(t)-1
        while tindex>=0 and sindex>=0:
            if s[sindex]==t[tindex]:
                sindex-=1
            tindex-=1
        if sindex==-1:
            return True
        return False
