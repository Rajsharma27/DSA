class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            nums[i] = nums[i]*nums[i]
        
        nums.sort()

        k = len(nums)//2

        return sum(nums[k:]) - sum(nums[:k])

