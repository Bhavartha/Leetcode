class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        ans=0
        if num<=1:
            return False
        for n in range(2,int(num**0.5)+1):
            if num%n==0:
                ans= ans+ n + num//n
        return ans==num-1
