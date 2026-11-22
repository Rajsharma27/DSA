class Solution:
    def countDominantElements(self, nums: list[int]) -> int:
        n = len(nums)
        if n == 1:
            return 1
        
        cnt = 0
        for i in range(n):
            if i == 0:
                if nums[i] >= nums[i + 1]:
                    cnt += 1
            elif i == n - 1:
                if nums[i] >= nums[i - 1]:
                    cnt += 1
            else:
                if 2 * nums[i] >= nums[i - 1] + nums[i + 1]:
                    cnt += 1       
        return cnt