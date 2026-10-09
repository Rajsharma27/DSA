class Solution:
    def minInsertions(self, s: str) -> int:
        ans = 0
        st = []
        n = len(s)
        i = 0
        
        while i < n:
            if s[i] == '(':
                st.append(s[i])
                i += 1
            else:
                if i+1<n and  s[i+1] == ')':
                    if not st:
                        ans += 1
                    else:
                        st.pop()
                    i += 2
                else:
                    ans += 1
                    if not st:
                        ans += 1
                    else:
                        st.pop()
                    i += 1

        ans += 2*len(st)

        return ans