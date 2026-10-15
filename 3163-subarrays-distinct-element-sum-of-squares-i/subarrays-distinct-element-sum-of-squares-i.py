class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)

        for i in range(n):
            st = set()

            for j in range(i,n):
                st.add(nums[j])
                cnt  = len(st)
                ans += cnt*cnt

        return ans