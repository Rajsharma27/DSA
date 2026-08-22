class Solution:
    def helper1(self,n:int):
        ans = 0
        while n:
            t = n%10
            ans += t
            n = n//10
        return ans
    def helper2(self, n:int):
        ans = 1
        while n:
            t = n%10
            ans *= t
            n = n//10
        return ans
    def checkDivisibility(self, n: int) -> bool:
        s = self.helper1(n)
        p = self.helper2(n)

        return (n % (s+p)) == 0
