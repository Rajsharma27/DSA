class Solution:
    def reverseParentheses(self, s: str) -> str:
        st = []
        ans = ""

        for ch in s:
            if ch==')':
                temp = ""

                while st and st[-1] != '(':
                    temp += st.pop()

                st.pop()
                st.extend(temp)

            else:
                st.append(ch)

        return ''.join(st)
