"""
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
"""
        
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle=="":
            return 0
        len_n=len(needle)
        len_h=len(haystack)
        if len_n>len_h:
            return -1
        for i in range(len_h-len_n+1):
            if haystack[i:i+len_n]==needle:
                return i
        return -1
