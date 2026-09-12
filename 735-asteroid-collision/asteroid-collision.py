class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        a = asteroids[:]
        collision = True

        while collision:
            collision = False

            for i in range(len(a) - 1):
                if a[i] > 0 and a[i + 1] < 0:
                    collision = True

                    if abs(a[i]) > abs(a[i + 1]):
                        a.pop(i + 1)
                    elif abs(a[i]) < abs(a[i + 1]):
                        a.pop(i)
                    else:
                        a.pop(i + 1)
                        a.pop(i)

                    break
        return a