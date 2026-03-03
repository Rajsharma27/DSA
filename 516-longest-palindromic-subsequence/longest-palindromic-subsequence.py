import numpy as np
class Solution(object):
    def lcs(self,s1,s2):
        n = len(s1)
        m = len(s2)

        dp = np.zeros((n + 1, m + 1), dtype=int)
        for i in range(n+1):
            dp[i][0] = 0
        for j in range(m+1):
            dp[0][j] = 0
        
        for i in range(1,n+1):
            for j in range(1,m+1):
                if s1[i-1] == s2[j-1]:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else:
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j])

        return dp[n][m]

    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        p = s[::-1]

        return self.lcs(s,p)