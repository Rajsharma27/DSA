class Solution:
    def evaluate(self, s: str, knowledge: list[list[str]]) -> str:
        mp = {}
        for key, value in knowledge:
            mp[key] = value

        ans = ""
        i = 0
        while i < len(s):
            if s[i] == "(":
                i += 1
                temp = ""
                while s[i] != ")":
                    temp += s[i]
                    i += 1
                ans += mp.get(temp, "?")
            else:
                ans += s[i]
            i += 1
        return ans