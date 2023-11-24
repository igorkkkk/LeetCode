class Solution:
    def firstUniqChar(self, s: str) -> int:
        # res=0
        # for idx,ch in enumerate(s):
        #     if s.rfind(ch)  == idx and  s.find(ch)  == idx:
        #         return idx
        # return -1
        d = collections.Counter(s)
        for idx,ch in enumerate(s):
            if d[ch]==1:
                return idx
        return -1
                 