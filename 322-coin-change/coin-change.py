class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:

        # memo = {}
        @lru_cache(None)
        def helper(amount):
            if amount == 0:
                 return 0
            if amount < 0:
                return float('inf')
            # if amount in memo:
            #     return memo[amount]

            res = float('inf')
            for c in coins:
                res = min(res,helper(amount-c)+1)
            # memo[amount] = res
            return res
        
        num = helper(amount)
        if num == float('inf'):
            return -1
        else:
            return num






