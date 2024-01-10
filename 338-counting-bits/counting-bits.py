class Solution:
    def countBits(self, n: int) -> List[int]:
        res = []
        for i in range(n+1):
            k = 0
            while i:
                if (i&1):
                    k+=1
                i = i >> 1 
            res.append(k)
        return res
