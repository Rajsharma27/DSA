class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        st = set(nums)
        i = 1
        while True:
            val = i * k
            if val not in st:
                return val
            i += 1