class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        n = len(colors)
        l = 0
        r = n-1
        ans = 0

        while l < r:
            if colors[l] != colors[r]:
                ans = max(ans,abs(l-r))
            r -= 1
        r = n-1
        while l < r:
            if colors[l] != colors[r]:
                ans = max(ans,abs(l-r))
            l += 1
        return ans
