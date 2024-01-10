class Solution:
    def isPerfectSquare(self, num: int) -> bool:    
        start = 1
        end = num
        while start <= end:
            mid = (start+end) // 2
            p = mid * mid
            if p == num:
                return True
            if p < num:
                start=mid+1
            else:
                end= mid-1
        return False
        