class Solution:
    def smallestSubsequence(self, s: str) -> str:
        freq = [0] * 26
        for c in s:
            freq[ord(c) - ord('a')] += 1

        seen = [False] * 26
        stack = []

        for c in s:
            idx = ord(c) - ord('a')

            if not seen[idx]:
                while stack and stack[-1] > c and freq[ord(stack[-1]) - ord('a')] > 0:
                    seen[ord(stack[-1]) - ord('a')] = False
                    stack.pop()

                stack.append(c)
                seen[idx] = True

            freq[idx] -= 1

        return "".join(stack)