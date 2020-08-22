class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        
        def calc(num):
            n=num
            while n:
                t=n%10
                if t==0:
                    return False
                if num%t!=0:
                    return False
                n//=10
            return True                
        
        ans=[]
        for i in range(left,right+1):
            if calc(i): ans.append(i)
        return ans
