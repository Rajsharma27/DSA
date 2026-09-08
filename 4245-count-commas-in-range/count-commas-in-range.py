class Solution:
    def countCommas(self, n: int) -> int:
        ans = 0
        temp = 1000

        while n>=temp:
            ans += n-temp+1
            temp *= 1000
        
        return ans