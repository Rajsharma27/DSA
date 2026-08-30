class Solution:
    def countSpecialIntegers(self, nums: list[int]) -> int:
        special = 0

        for x in set(nums):
            first = nums.index(x)
            last = len(nums) - 1 - nums[::-1].index(x)

            if len(set(nums[first:last + 1])) == 1:
                special += 1

        return special