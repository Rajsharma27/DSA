class Solution(object):
    def maxScore(self, cardPoints, k):
        """
        :type cardPoints: List[int]
        :type k: int
        :rtype: int
        """
        n = len(cardPoints)

        total_pts = sum(cardPoints)

        wind_size = n-k

        curr_sum = sum(cardPoints[0:wind_size])
        min_sum = curr_sum

        for i in range(wind_size,n):
            curr_sum += cardPoints[i]
            curr_sum -= cardPoints[i-wind_size]

            min_sum = min(min_sum,curr_sum)

        return total_pts - min_sum