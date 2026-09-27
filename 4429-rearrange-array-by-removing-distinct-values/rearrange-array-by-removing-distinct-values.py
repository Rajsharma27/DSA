class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        freq=[0]*101
        max_freq = 0
        for num in nums:
            freq[num]+=1
            max_freq = max(max_freq,freq[num])
        
        ans=[]
        while max_freq:
            max_freq-=1
            for i in range(101):
                if freq[i]==0:
                    continue
                ans.append(i)
                freq[i]-=1
    
        return ans