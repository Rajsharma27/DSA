import math
class Solution:
    def checkOverlap(self, radius: int, xCenter: int, yCenter: int, x1: int, y1: int, x2: int, y2: int) -> bool:
        px = max(x1,min(x2,xCenter))
        py = max(y1,min(y2,yCenter))

        X = (px-xCenter)**2
        Y = (py-yCenter)**2
        temp = X + Y
        dist = math.sqrt(temp)

        return temp <= radius**2