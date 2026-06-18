class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        h_angle = (hour % 12) * 30 + 0.5 * minutes
        m_angle = 6 * minutes

        angle = abs(h_angle - m_angle)

        return min(angle, 360 - angle)