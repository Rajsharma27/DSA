class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        st = []
        ans = 0

        for i in range(len(s)):
            temp = s[i]
            if temp == '(':
                st.append(temp)
            else:
                if not st:
                    ans += 1
                else:
                    st.pop()

        ans += len(st)
        return ans