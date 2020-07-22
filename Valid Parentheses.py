class Solution:
    def isValid(self, s: str) -> bool:
        closing={')','}',']'}
        mapping={'(':')','{':'}','[':']'}
        opened=[-1]
        for i in s:
            if i not in closing:
                opened.append(mapping[i])
            elif i!=opened.pop():
                return False
        return opened==[-1]      
