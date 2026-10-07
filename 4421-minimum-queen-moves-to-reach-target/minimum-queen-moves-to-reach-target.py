class Solution:
    def minQueenMoves(self, source: list[int], target: list[int]) -> int:
        sr,sc = source[0], source[1]
        tr,tc = target[0], target[1]

        if abs(sr-tr) == 0 and abs(sc-tc) == 0:
            return 0
        elif abs(sr-tr) == 0 or abs(sc-tc) == 0:
            return 1
        elif abs(sr-tr) == abs(sc-tc):
            return 1
        else:
            return 2