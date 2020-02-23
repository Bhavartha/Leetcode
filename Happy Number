class Solution:
    def isHappy(self, n: int) -> bool:
        seen=set()
        while n!=1:
            _=0
            while n:
                _+=(n%10)**2
                n=n//10
            n=_
            if n in seen:
                return False
            seen.add(n)
        return True
