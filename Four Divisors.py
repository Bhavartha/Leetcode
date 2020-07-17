class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        ans=0
        div=[]
        for n in nums:
            _ = []
            for i in range(1,int(n**0.5)+1):
                if n%i==0:
                    _.append(i)
                    if i*i !=n:
                        _.append(n//i)
            div.append(_)
        for d in div:
            if len(d)==4:
                ans+=sum(d)
        return ans
                
