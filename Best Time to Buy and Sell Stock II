class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for p in range(len(prices)-1):
            if prices[p] < prices[p+1]:
                profit+= prices[p+1]-prices[p]
                
        return profit
