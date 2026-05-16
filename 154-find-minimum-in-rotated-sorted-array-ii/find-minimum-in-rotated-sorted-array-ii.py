class Solution:
    def findMin(self, nums: List[int]) -> int:
        s = 0
        e = len(nums) - 1

        if nums[s] < nums[e]:
            return nums[s]
        
        while s<e :
            mid = s + (e-s)//2
            if nums[mid] > nums[e]:
                s = mid + 1
            elif nums[mid] < nums[e]:
                e = mid
            else:
                e -= 1
        return nums[e]