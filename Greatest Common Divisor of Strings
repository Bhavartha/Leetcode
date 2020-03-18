class Solution:
    
    def gcd(a,b):
        if a%b==0:
            return b
        return gcd(b,a%b)
    
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        l=gcd(len(str1),len(str2))
        x=str1[:l]
        if any(str1.split(x)) or any(str2.split(x)):
            return ''
        return x
