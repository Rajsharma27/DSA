import math

class Solution(object):
    def minNumberOfSeconds(self, mountainHeight, workerTimes):
        def can_do(T):
            total = 0
            for t in workerTimes:
                val = (8 * T) // t
                x = (math.sqrt(1 + val) - 1) // 2
                total += x
                if total >= mountainHeight:
                    return True
            return False

        left = 0
        right = max(workerTimes) * mountainHeight * (mountainHeight+1)//2
        
        ans = right
        while left <= right:
            mid = left + (right - left) // 2
            if can_do(mid):
                ans = mid
                right = mid - 1
            else:
                left = mid + 1
        return ans
