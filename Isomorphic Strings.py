class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        m=dict()
        for i in range(len(s)):
            if s[i] not in m:
                if t[i] in m.values():
                    return False
                m[s[i]]=t[i]
            elif t[i]!=m[s[i]]:
                    return False
        return True
