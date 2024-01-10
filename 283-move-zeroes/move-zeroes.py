class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        place = 0
        index = 0
        while index < len(nums):
            nums[place] = nums[index]
            if nums[index] != 0:
                place+=1
            index+=1
        
        nums[place:] = [0]*(index-place)
            
