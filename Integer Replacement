class Solution:
    def integerReplacement(self, n: int) -> int:
        count=0
        while n!=1:
            count+=1
            if n&1 == 0: #Even
                n=n//2
            elif n&3 == 3 and n!=3:
                n+=1
            else:
                n-=1
        return count
        
