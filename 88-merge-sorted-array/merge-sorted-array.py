class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        place = m+n-1
        start1 = m-1
        start2 = n-1

        while place >= 0:
            if start2 >= 0 and start1>=0 and (nums1[start1] > nums2[start2]):
                nums1[place] = nums1[start1]
                start1-=1
            else:
                if start2>=0:
                    nums1[place] = nums2[start2]
                    start2-=1
            place-=1


        