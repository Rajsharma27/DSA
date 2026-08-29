class Solution:
    def minBishopMoves(self, source: list[int], target: list[int]) -> int:
        a1, a2 = source[0], source[1]
        b1, b2 = target[0], target[1]

        if (a1 + a2) % 2 != (b1 + b2) % 2:
            return -1
        if abs(a1 - b1) == abs(a2 - b2):
            return 1
        return 2 