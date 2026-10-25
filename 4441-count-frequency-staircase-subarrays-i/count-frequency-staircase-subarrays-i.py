class Solution:
    def countStaircase(self, nums: list[int]) -> int:
        ans = 0

        for i in range(len(nums)):
            mp = {}
            temp = 0
            lst = []

            for j in range(i, len(nums)):
                x = nums[j]

                if x not in mp:
                    mp[x] = 0
                    temp += 1
                    lst.append(x)

                mp[x] += 1

                if mp[x] > temp:
                    break

                valid = True
                for k in range(len(lst)):
                    if mp[lst[k]] != k + 1:
                        valid = False
                        break
                if valid:
                    ans += 1
        return ans