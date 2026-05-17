class Solution:
    def countKthRoots(self, l: int, r: int, k: int) -> int:

        def solve(n):
            low, high = 0, n

            while low <= high:
                mid = (low + high) // 2

                if mid ** k <= n:
                    low = mid + 1
                else:
                    high = mid - 1

            return high

        return solve(r) - solve(l - 1)