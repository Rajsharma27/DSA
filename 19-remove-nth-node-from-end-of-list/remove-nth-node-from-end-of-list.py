# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode | None, n: int) -> ListNode | None:

        length = 0
        temp = head

        while temp:
            length += 1
            temp = temp.next

        if length == n:
            return head.next

        temp = head

        a = 1
        while a < length - n:
            temp = temp.next
            a += 1

        temp.next = temp.next.next

        return head
