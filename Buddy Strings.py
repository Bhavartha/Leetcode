class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        if not A : return False
        if len(A) != len(B) : return False
        if A==B: return len(A)>len(set(A))
        d=[]
        for i in range(len(A)):
            if A[i]!=B[i]:
                d.append(i)
        return len(d)==2 and A[d[0]]==B[d[1]] and A[d[1]]==B[d[0]]
