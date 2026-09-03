class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        mn_even = float('inf')
        mn_odd = float('inf')
        for i in nums1:
            if i%2==0:
                mn_even = min(mn_even,i)
            else:
                mn_odd = min(mn_odd,i)

        if mn_odd == float('inf'):
            return True
        
        return mn_odd < mn_even