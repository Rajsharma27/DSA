class Solution:
    def minMoves(self, nums: List[int]) -> int:
        mx = max(nums)
        ans = 0
        for i in nums:
            ans += abs(mx-i)

        return ans