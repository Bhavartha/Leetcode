class Solution:
    def repeatedSubstringPattern(self, string: str) -> bool:
        ls = len(string)
        if ls<=1:
            return False
        for i in range(1,ls):
            if ls%i == 0 and string[:i]*(ls//i)==string:
                return True
        return False
