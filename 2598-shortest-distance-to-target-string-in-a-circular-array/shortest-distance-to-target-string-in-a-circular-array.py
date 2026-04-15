class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        dist = float('inf')
        n = len(words)

        for i,word in enumerate(words):
            if word == target:
                right = (i-startIndex+n) % n
                left = (startIndex-i+n) % n
                dist = min(dist,min(right,left))
        
        return -1 if dist == float('inf') else dist
        