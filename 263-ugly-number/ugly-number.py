class Solution:
    def isUgly(self, n: int) -> bool:
        
        arr = [2,3,5]
        def helper(n):
            if n ==1:
                return True
            if n == 0:
                return False
            for f in arr:
                div = n//f
                if n%f ==0:
                    return True  and helper(div)
            return False

        return helper(n)