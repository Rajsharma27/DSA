class Solution:
    def sumDecoded(self, nums: list[int]) -> int:
        ans = 0
        mod = 10**9 + 7

        for i in nums:
            w = i % 10
            d = i // 10
            arr = []
            while d:
                arr.append(d % 10)
                d //= 10
            arr.reverse()
            x, y = 0, 0
            for j in range(w):
                x = x * 10 + arr[j]
            for j in range(w, len(arr)):
                y = y * 10 + arr[j]

            ans = (ans + pow(x, y, mod)) % mod
        return ans