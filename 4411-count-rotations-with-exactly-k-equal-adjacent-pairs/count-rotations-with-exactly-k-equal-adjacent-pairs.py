class Solution:
    def countRotations(self, s: str, k: int) -> int:
        temp = 0
        n = len(s)
        for i in range(n-1):
            if s[i]==s[i+1]:
                temp += 1
        if s[n-1] == s[0]:
            temp += 1
        if k == temp:
            return n-temp
        if k == temp-1:
            return temp
        return 0