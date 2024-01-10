class Solution:
    def countBits(self, n: int) -> List[int]:
        res = [0]*(n+1)
        for i in range(1,n+1):
            k = i
            while k:
                if k & 1:
                    res[i]+=1
                k = k >> 1
        return res

        

