class Solution:
    def titleToNumber(self, s: str) -> int:
        answer = 0
        for ind,_ in enumerate(s[::-1]):
            answer+=26**ind*(ord(_)-ord('A')+1)
        return answer
