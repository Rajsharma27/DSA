class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        temp = nums1 + nums2
        temp.sort()

        n = len(temp)

        if n % 2 != 0:
            return temp[n // 2]

        return (temp[n // 2 - 1] + temp[n // 2]) / 2