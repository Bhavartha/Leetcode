class Solution:
    def minSteps(self, num: int) -> int:
        if num<2:
            return 0
        
        ans=0
        i=2
        while i<=int(sqrt(num)):
	        if(num%i==0):
		        ans+=i
		        num//=i
	        else:
		        i+=1
        return ans+num
