class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        maxlen = 0
        st = set()
        i = 0

        for j in range(n):
            while s[j] in st:
                st.remove(s[i])
                i += 1
            st.add(s[j])
            maxlen = max(maxlen,j-i+1)
            
        return maxlen