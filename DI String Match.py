class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        output= []
        i=0
        d=len(S)
        for s in S:
            if s=='I':
                output.append(i)
                i+=1
            else:
                output.append(d)
                d-=1
        return output+[i]
