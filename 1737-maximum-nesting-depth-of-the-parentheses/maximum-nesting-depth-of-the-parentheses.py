class Solution:
    def maxDepth(self, s: str) -> int:
        curr = 0
        mx = 0
        for i in s:
            if i=='(':
                curr += 1
                mx = max(mx,curr)
            elif i==')' :
                curr -= 1
        return mx