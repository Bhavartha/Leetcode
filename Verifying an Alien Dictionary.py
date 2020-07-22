class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        pos = dict()
        for i in range(26):
            pos[order[i]]=i
           
        return words==sorted(words,key=lambda x:[ pos[_] for _ in x])
