class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentence = sentence.split()
        for i,s in enumerate(sentence):
            if s.find(searchWord)==0:
                return i+1
        return -1
