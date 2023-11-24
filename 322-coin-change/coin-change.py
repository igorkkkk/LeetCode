class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        # if not amount:
        #     return 0
        # coins.sort()
        # coins = coins[::-1]
        # dp = [0]*(len(coins)+1)
        # out = 0
        # for i in range(len(coins)):
        #     print(dp[i-1]*coins[i-1])
        #     tmp,k = divmod(amount-dp[i-1],coins[i])
        #     out+=tmp
        #     dp[i] = tmp*coins[i]+dp[i-1]
        #     if k == 0:
                
        #         return out
        # print(out,dp)
        # return -1
        memo = {}
        def helper(amount):
            if amount == 0:
                 return 0
            if amount < 0:
                return float('inf')
            if amount in memo:
                return memo[amount]

            res = float('inf')
            for c in coins:
                res = min(res,helper(amount-c)+1)
            memo[amount] = res
            return res
        
        num = helper(amount)
        if num == float('inf'):
            return -1
        else:
            return num



