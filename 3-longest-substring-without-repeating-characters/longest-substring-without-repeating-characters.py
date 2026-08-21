class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        mx_len = 0
        i = 0

        for j in range(len(s)):
            while s[j] in st:
                st.remove(s[i])
                i += 1
            st.add(s[j])
            mx_len = max(mx_len,j-i+1)
            
        return mx_len