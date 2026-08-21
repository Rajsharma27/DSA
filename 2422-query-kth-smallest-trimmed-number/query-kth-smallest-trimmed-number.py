class Solution:
    def smallestTrimmedNumbers(self, nums: List[str], queries: List[List[int]]) -> List[int]:
        ans = []

        for k, trim in queries:
            heap = []
            for i, num in enumerate(nums):
                trimmed = num[-trim:]
                heapq.heappush(heap,(trimmed,i))

            for _ in range(k-1):
                heapq.heappop(heap)

            ans.append(heap[0][1])
            
        return ans
