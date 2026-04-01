import math
class Solution(object):
    def pivotInteger(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = (n * (n + 1)) // 2
        r = int(math.sqrt(s))
        if r * r == s:
            return r
        else:
            return -1
        
        