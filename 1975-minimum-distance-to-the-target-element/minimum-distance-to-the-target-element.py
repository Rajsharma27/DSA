class Solution(object):
    def getMinDistance(self, nums, target, start):
        """
        :type nums: List[int]
        :type target: int
        :type start: int
        :rtype: int
        """
        mn = float('inf')
        for i in range(len(nums)):
            if nums[i] == target:
                dist = abs(i-start)
                mn = min(mn,dist)
        return mn
        