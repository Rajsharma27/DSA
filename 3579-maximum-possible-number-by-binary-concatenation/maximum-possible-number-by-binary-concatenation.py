from itertools import permutations

class Solution(object):

    def helper(self, l):
        """
        :type l: List[int]
        :rtype: int
        """
        temp = ""
        for i in l:
            temp += bin(i)[2:]   
        ans = int(temp, 2)
        return ans

    def maxGoodNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        max_ans = 0

        for perm in permutations(nums):
            val = self.helper(list(perm))
            max_ans = max(max_ans, val)

        return max_ans