class Solution:
    def findGCD(self, nums: List[int]) -> int:
        nums.sort()

        return math.gcd(nums[0],nums[len(nums)-1])