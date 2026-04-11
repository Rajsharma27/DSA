class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        mpp = defaultdict(list)
        Min = float('inf')

        for i in range(len(nums)):
            mpp[nums[i]].append(i)

        for val, key in mpp.items():
            if len(key) < 3:
                continue

            for i in range(len(key) - 2):
                dist = 2*(key[i+2]-key[i])
                Min = min(Min, dist)

        return -1 if Min==float('inf') else Min

