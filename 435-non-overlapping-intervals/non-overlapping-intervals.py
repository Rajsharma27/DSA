class Solution:

  def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
    if not intervals:
      return 0

    n = len(intervals)
    intervals.sort(key=lambda x: x[1])
    cnt = 1
    last_i = intervals[0][1]

    for i in range(1, n):
      if intervals[i][0] >= last_i:
        cnt += 1
        last_i = intervals[i][1]

    return n - cnt
