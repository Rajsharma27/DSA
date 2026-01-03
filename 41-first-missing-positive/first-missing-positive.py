class Solution(object):
    def firstMissingPositive(self, nums):
        positive_num = set()

        for num in nums:
            if num>0:
                positive_num.add(num)
        
        for i in range(1, len(nums) + 2):
            if i not in positive_num:
                return i
        