class Solution:
    def helper(self, s1, s2):
        diff = sum(c1 != c2 for c1, c2 in zip(s1, s2))
        diff += abs(len(s1) - len(s2))
        return diff

    def twoEditWords(self, queries: List[str], dictionary: List[str]) -> List[str]:
        ans = []
        for i in queries:
            for j in dictionary:
                if self.helper(i,j) <= 2:
                    ans.append(i)
                    break
        return ans
