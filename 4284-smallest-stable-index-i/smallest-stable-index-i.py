class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)
        sufix = [0] * n
        sufix[-1] = nums[-1]

        for i in range(n - 2, -1, -1):
            sufix[i] = min(sufix[i + 1], nums[i])

        mx = 0
        for i, x in enumerate(nums):
            mx = max(mx, x)
            if mx - sufix[i] <= k:
                return i

        return -1