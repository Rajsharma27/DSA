class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []
        for num in nums:
            temp = str(num)
            for digit in temp:
                ans.append(int(digit))

        return ans
        