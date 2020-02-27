class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        m=dict()
        str=str.split(" ")
        if len(str)!=len(pattern):
            return False
        for p in range(len(pattern)):
            if pattern[p] not in m:
                if str[p] in m.values():
                    return False
                m[pattern[p]]=str[p]
            elif m[pattern[p]]!=str[p]:
                return False
        return True
