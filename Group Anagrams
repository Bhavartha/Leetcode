from collections import defaultdict,Counter

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list)
        for s in strs:
            _ = frozenset(Counter(s).most_common())
            result[_].append(s)
        return list(result.values())
        
# OR

from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list)
        for str in strs:
            temp = [0]*26
            for s in str:
                _ = ord(s)-ord('a')
                temp[_]+=1
            result[tuple(temp)].append(str)
        return list(result.values())
