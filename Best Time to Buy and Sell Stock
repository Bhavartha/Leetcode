class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        profit=0
        m = float('inf')
        for p in prices:
            m = min(m,p)
            profit= max(profit,p-m)
        return profit
