class Solution:
    def countValidSubstrings(self, s: str) -> int:
        n = len(s)
        total_substrings = n * (n + 1) // 2
        
        invalid_substrings = 0
        last_abc_start = -1
        
        for i in range(2, n):
            if s[i-2] == 'a' and s[i-1] == 'b' and s[i] == 'c':
                last_abc_start = i - 2
                
            if last_abc_start != -1:
                invalid_substrings += (last_abc_start + 1)
                
        return total_substrings - invalid_substrings
        