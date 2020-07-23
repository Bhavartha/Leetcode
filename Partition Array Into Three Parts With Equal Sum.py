class Solution:
    def canThreePartsEqualSum(self, A: List[int]) -> bool:
        s = sum(A)
        if s%3!=0:
            return False
        target=s//3
        count=0
        s=0
        for i in A:
            s+=i
            if s==target:
                count+=1
                s=0
                if count==3:
                    return True
        return False
