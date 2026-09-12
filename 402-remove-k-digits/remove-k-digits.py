class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        st = []

        for i in num:
            while k > 0 and st and st[-1] > i:
                st.pop()
                k -= 1
            st.append(i)

        if k > 0:
            st = st[:-k]

        result = "".join(st).lstrip('0')

        return result if result else "0"