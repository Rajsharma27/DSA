class Solution(object):
    def findDifferentBinaryString(self, nums):
        """
        :type nums: List[str]
        :rtype: str
        """
        n = len(nums)
        seen = set(int(x, 2) for x in nums)

        for i in range(2**n):
            if i not in seen:
                return format(i, '0{}b'.format(n))