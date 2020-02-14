class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pre=''        
        if strs==None or len(strs)==0:
            return pre
        s=strs[0]
        for i in range(len(s)):
            for _ in strs:
                if i>=len(_) or _[i]!=s[i]:
                    return pre
            pre+=s[i]
        return pre
