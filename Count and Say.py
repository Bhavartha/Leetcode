class Solution:
    def countAndSay(self, n: int) -> str:
        def calc(nums):
            ans=""
            cnt=1
            for j in range(1,len(nums)):
                if(nums[j]==nums[j-1]): cnt+=1
                else:
                    ans += str(cnt)+nums[j-1]
                    cnt=1
            ans+=str(cnt)+"1"
            return ans
        
        result="1"
        for i in range(n-1):
            result = calc(result)
        return result
