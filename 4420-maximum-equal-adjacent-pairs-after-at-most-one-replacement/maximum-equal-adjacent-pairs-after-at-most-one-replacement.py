class Solution:
    def maxEqualAdjacentPairs(self, nums: list[int]) -> int:
        freq = defaultdict(int)
        totalEq = 0

        for i in range(len(nums)-1):
            x,y = nums[i],nums[i+1]
            if x==y:
                totalEq+=1
                continue
            if (x,y) in freq:
                freq[(x,y)]+=1
            elif (y,x) in freq:
                freq[(y,x)]+=1
            else:
                freq[(x,y)]=1
        

        if not freq:
            return totalEq

        ans = 0
        for (x,y) in freq:
            curr = freq[(x,y)]+totalEq
            ans = max(ans,curr)
        
        return ans