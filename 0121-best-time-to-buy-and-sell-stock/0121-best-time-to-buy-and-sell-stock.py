class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_prices = prices[0]
        max_profit = 0
        for i in range(1,len(prices)):
            profit = prices[i] - min_prices

            if profit > max_profit:
                max_profit = profit

            if prices[i] < min_prices:
                min_prices = prices[i]

        return max_profit
        