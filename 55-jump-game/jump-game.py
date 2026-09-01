class Solution:
    def canJump(self, nums: List[int]) -> bool:
        temp = 0
        for i in range(len(nums)):
            if temp < i:
                return False
            temp = max(temp, i+nums[i])

        if temp >= len(nums)-1:
            return True

        return True