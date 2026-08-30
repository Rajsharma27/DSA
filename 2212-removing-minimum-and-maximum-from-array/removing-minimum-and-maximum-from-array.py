class Solution:
    def minimumDeletions(self, nums):
        n = len(nums)

        mni = nums.index(min(nums))
        mxi = nums.index(max(nums))

        left = min(mni, mxi)
        right = max(mni, mxi)

        front = right + 1
        back = n - left
        frontBack = (left + 1) + (n - right)

        return min(front, back, frontBack)