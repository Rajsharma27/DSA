class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            if nums[i]==0:
                nums[i] = -1
        
        prefix_sum = 0
        maxlen = 0

        mp = {0:-1}
        for i in range(len(nums)):
            prefix_sum += nums[i]

            if prefix_sum in mp:
                maxlen = max(maxlen,i-mp[prefix_sum])
            else:
                mp[prefix_sum] = i
        return maxlen
