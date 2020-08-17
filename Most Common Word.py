from collections import Counter
class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        for _ in "!?',;.":
            paragraph=paragraph.replace(_," ")
        
        words = Counter(paragraph.lower().split()).most_common()
        for x,y in words:
            if x not in banned:
                return x
