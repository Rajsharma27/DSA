class Solution:
    def minOperations(self, s: str) -> int:
        n = len(s)
        if s == ''.join(sorted(s)):
            return 0
        if len(s) == 2:
            return -1

        mn = 'z'
        mx = 'a'

        for i in s:
            mn = min(mn,i)
            mx = max(mx,i)

        if mn == s[0] or mx == s[n-1]:
            return 1
        
        for i in range(1,n-1):
            if s[i]==mn or s[i]==mx:
                return 2

        return 3        

        