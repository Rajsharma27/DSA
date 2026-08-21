class Solution:
    def compress(self, chars: List[str]) -> int:
        length = 0
        i = 0

        while i<len(chars):
            char = chars[i]
            count = 0
            while i<len(chars) and chars[i] == char:
                count += 1
                i += 1
            chars[length] = char
            length += 1
            if count > 1:
                for c in str(count):
                    chars[length] = c
                    length += 1
        return length


