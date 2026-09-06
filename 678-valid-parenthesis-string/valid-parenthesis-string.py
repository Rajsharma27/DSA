class Solution:
    def checkValidString(self, s: str) -> bool:
        n = len(s)

        dp = [[False] * (n + 1) for _ in range(n + 1)]
        dp[n][0] = True

        for i in range(n - 1, -1, -1):
            for cnt in range(n + 1):

                if s[i] == '(':
                    if cnt + 1 <= n:
                        dp[i][cnt] = dp[i + 1][cnt + 1]

                elif s[i] == ')':
                    if cnt > 0:
                        dp[i][cnt] = dp[i + 1][cnt - 1]

                else:  
                    if cnt + 1 <= n and dp[i + 1][cnt + 1]:
                        dp[i][cnt] = True

                    elif cnt > 0 and dp[i + 1][cnt - 1]:
                        dp[i][cnt] = True

                    elif dp[i + 1][cnt]:
                        dp[i][cnt] = True

        return dp[0][0]