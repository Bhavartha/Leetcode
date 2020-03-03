class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        letter=ord(t[-1])
        for i in range(len(s)):
            letter^=ord(s[i])^ord(t[i])
        return chr(letter)
        
      
#OR


class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s1=0
        s2=0
        for i in s:
            s1+=ord(i)
        for i in t:
            s2+=ord(i)
        return chr(s2-s1)
        
