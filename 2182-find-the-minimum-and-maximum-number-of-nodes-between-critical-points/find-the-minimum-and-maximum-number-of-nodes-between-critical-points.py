# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        if not head or not head.next or not head.next.next:
            return [-1, -1]
        p = head
        q = p.next
        r = q.next
        

        arr = []
        cnt = 2
        while r:
            pv, qv, rv = p.val, q.val, r.val
            if (qv > pv and qv > rv) or (qv < pv and qv < rv):
                arr.append(cnt)

            cnt += 1
            p = q
            q = r
            r = r.next

        n = len(arr)
        if n < 2:
            return [-1,-1]
        mx = arr[-1] - arr[0]
        mn = float('inf')
        for i in range(n-1):
            l = arr[i+1] - arr[i]
            mn = min(mn,l)
        return [mn,mx]