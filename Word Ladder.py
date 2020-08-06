from collections import defaultdict

class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        
        forms = defaultdict(list)
        for word in wordList:
            for i in range(len(word)):
                forms[word[:i] + "#" + word[i+1:]].append(word)
        
        na = set(beginWord)
        
        queue = [(beginWord,1)]
        for w,l in queue:
            if w==endWord:
                return l
            
            for i in range(len(w)):
                temp = w[:i] + "#" + w[i+1:]
                for j in forms[temp]:
                    if j not in na:
                        na.add(j)
                        queue.append((j,l+1))
                
        return 0
            
