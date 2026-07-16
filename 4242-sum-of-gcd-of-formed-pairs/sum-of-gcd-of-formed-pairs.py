import fractions
class Solution(object):
    def gcdSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        temp = []
        mx = nums[0]
        
        for i in range(n):
            mx = max(mx, nums[i])
            temp.append(fractions.gcd(nums[i], mx))
        temp.sort()

        i=0
        j=n-1
        ans=0
        while i<j:
            ans += fractions.gcd(temp[i],temp[j])
            i += 1
            j -= 1
        return ans
        