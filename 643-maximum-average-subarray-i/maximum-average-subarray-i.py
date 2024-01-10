class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        max_sum = sum(nums[:k])
        cur_sum = max_sum
        for i, num in enumerate(nums[k:]):
            cur_sum = cur_sum + num - nums[i]
            if max_sum < cur_sum:
                max_sum = cur_sum
        return max_sum / k   