class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        mp = {}

        for num in nums:
            if num in mp:
                mp[num] += 1
            else:
                mp[num] = 1
        ans = []

        for key,value in mp.items():
            if value > 1:
                ans.append(key)
                
        return ans