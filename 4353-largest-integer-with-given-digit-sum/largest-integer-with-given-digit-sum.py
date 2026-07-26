class Solution:
    def helper(self, n: int):
        return sum(int(digit) for digit in str(n))

    def largestInteger(self, n: int, s: int) -> int:
        ans = -1

        for i in range(10**n):
            if self.helper(i) == s:
                ans = max(ans, i)

        return ans