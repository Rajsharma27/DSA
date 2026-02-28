class Solution(object):
    def concatenatedBinary(self, n):
        """
        :type n: int
        :rtype: int
        """
        MOD = 10**9 + 7
        temp = ""
        for i in range(1,n+1):
            temp += bin(i)[2:]
        ans = int(temp, 2)
        return ans % MOD