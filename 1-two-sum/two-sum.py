class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp = {}

        for i in range(len(nums)):
            mp[nums[i]] = i
        
        for i in range(len(nums)):
            temp = target-nums[i]
            if temp in mp and mp[temp] != i:
                return [i,mp[temp]]

        return []