class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        _=[]
        for i in range(1,n+1):
            if i%15==0:
                _.append("FizzBuzz")
            elif i%3==0:
                _.append("Fizz")
            elif i%5==0:
                _.append("Buzz")
            else:
                _.append(str(i))
        return _
