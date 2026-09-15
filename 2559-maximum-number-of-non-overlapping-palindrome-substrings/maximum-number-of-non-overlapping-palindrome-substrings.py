class Solution:
    def maxPalindromes(self, s: str, k: int) -> int:
        n = len(s)
        if k == 1:
            return n

        res = i = 0

        while i <= n - k:
            for p in (k, k + 1):
                if i + p <= n and s[i : i + p] == s[i : i + p][::-1]:
                    res += 1
                    i += p
                    break
            else:
                i += 1

        return res