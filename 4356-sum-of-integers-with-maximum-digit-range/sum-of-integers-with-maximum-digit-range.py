class Solution:
    def helper(self, number):
        digits = [int(d) for d in str(abs(number))]
        return max(digits) - min(digits)

    def maxDigitRange(self, nums: list[int]) -> int:
        max_range = float('-inf')

        for num in nums:
            max_range = max(max_range, self.helper(num))

        ans = 0
        for num in nums:
            if self.helper(num) == max_range:
                ans += num

        return ans