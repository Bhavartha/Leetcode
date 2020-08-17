class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r1=set(list("qwertyuiopQWERTYUIOP"))
        r2=set(list("asdfghjklASDFGHJKL"))
        r3=set(list("zxcvbnmZXCVBNM"))
        ans=[]
        for w in words:
            if all([_ in r1 for _ in w]) or all([_ in r2 for _ in w]) or all([_ in r3 for _ in w]):
                ans.append(w)
        return ans
