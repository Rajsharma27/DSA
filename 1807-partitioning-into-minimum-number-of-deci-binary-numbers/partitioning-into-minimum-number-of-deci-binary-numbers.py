class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """
        largest = 0
        for digit in n:
            if digit>largest:
                largest = digit
        return int(largest)