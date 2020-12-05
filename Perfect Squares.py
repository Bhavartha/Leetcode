class Solution:
    def numSquares(self, num: int) -> int:
        squares = []
        n=1
        while n*n <= num:
            squares.append(n*n)
            n+=1
        
        dp = [num+1]*(num+1)
        dp[0]=0
        
        for d in range(1,len(dp)):
            for s in squares:
                if d-s>=0:
                    dp[d]=min(dp[d],dp[d-s]+1)
        
        return dp[num]
                
        
        
