class Solution:
    def digit_sum(self,n):
        ans = 0
        while n:
            digit = n%10
            ans += digit
            n //= 10
        return ans
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            if self.digit_sum(nums[i]) == i:
                return i
        return -1