class Solution:
    def largestOverlap(self, img1: List[List[int]], img2: List[List[int]]) -> int:
        cnt = []
        n = len(img1)
        m = len(img1[0])
        for i in range(n):
            for j in range(m):
                if img1[i][j] == 1:
                    cnt.append((i,j))

        temp = {}
        for i in range(n):
            for j in range(m):
                if img2[i][j] == 1:
                    for x,y in cnt:
                        key = (x-i,y-j)
                        temp[key] = temp.get(key, 0) + 1

        return max(temp.values(), default=0)