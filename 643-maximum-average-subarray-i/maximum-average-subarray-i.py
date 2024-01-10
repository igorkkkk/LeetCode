class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        # max_sum = sum(nums[:k])
        # for i, num in enumerate(nums[k:]):
        #     cur_sum = max_sum + num - nums[i]
        #     if max_sum < cur_sum:
        #         max_sum = cur_sum
        # return max_sum / k   
        sum_part = sum(nums[:k])
        max_sum = sum_part
        for i, num in enumerate(nums[k:]):
            sum_part= sum_part +num - nums[i]
            if sum_part > max_sum:
                max_sum = sum_part
        return max_sum/k