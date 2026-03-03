class Solution(object):
    def findKthBit(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        s = "0"
        for _ in range(1, n):
            inverted = "".join('1' if char == '0' else '0' for char in s)
            reversed_inv = inverted[::-1]
            s = s + "1" + reversed_inv
            
        return s[k-1]