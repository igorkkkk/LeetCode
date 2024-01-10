class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        from collections import Counter
        d = Counter(nums)
        for v in d.values():
            if v > 1:
                return True
        return False
        